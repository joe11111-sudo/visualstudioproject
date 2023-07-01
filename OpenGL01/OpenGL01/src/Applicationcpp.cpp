#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

#include "Renderer.h"

#include "VertexBuffer.h"
#include "IndexBuffer.h"
#include "VertexArray.h"
#include "VertexBufferLayout.h"
//P11 Attribute set per vertex while the uniform is set per draw

//P12 vertex array: a way to bind vertex buffer with a certain kind of specification 
//for the layout of that actual vertex buffer
//change from{ bind shader--> vertex buffer--> set up the vetex layout(attribpoint)--> bind index buffer-
//--> issue the draw call}
//to         { bind shader--> vertex array-------------------------------------------> bind index buffer-
//--> issue the draw call}

//P4:基于你选定的Shader和Buffer去绘制某个三角形，OpenGL是一种状态机，意思是OpenGL不是一个对象
//instead of me just saying hey draw me a triangle and pass everything that opengl needs to 
//know to draw the that triangle it actually knows what it needs to do
//OpenGL work draw a triangle and base on which buffer and which shader you have selected, to determine
//what triangle get drawn and where and all of that stuff

//Vertex Attribute 和 shader
/*
Vertex Attribute:
opengl pipeline 的工作方式：提供图形类型给数据，然后存储在GPU上的内存里（内存里包含了我们想要绘制的所有数据）
然后我们使用shader（在GPU上执行的一种程序）读取这部分数据，然后在屏幕上显示下来
有代表性的是，我们实际上绘制图形使用的是一个Vertex buffer （存储在GPU上的一部分内存的 buffer ）
当shader 实际上开始读取 Vertex buffer 时，它需要知道 buffer 的布局（ buffer 里面有什么）
如果我们不说这个，它只是和c++的其他数据没什么两样
glVertexAttribPointer() 告诉OpenGLposition中的数据分布
stride: the amount of bytes between each vertex 12 for coordinate(index1), 8 for texture(index2), 12 for normal(index3)(bytes) so the stride is 32 bytes
pointer: 指向属性的指针 coordinate offset = 0 ,texture offset = 12, normal offset = 20
*/

/*
最常用的两种 shader ：
vertex shader OR fragment(pixel) shader
 data(CPU) -> GPU -> draw call -> shader
 Draw Call就是CPU调用图形编程接口，比如DirectX或OpenGL，来命令GPU进行渲染的操作。
 vertex shader: 告诉 OpenGL 你想要 vertex 出现在屏幕空间的何处
 fragment(pixel) shader : 栅格化，每个小三角形什么颜色
 记得 enable shader
*/

/*
uniform 实际上是一种从 CPU 中取数据到 shader 里的一种方法
*/

int main(void)
{
    GLFWwindow* window;

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE,GLFW_OPENGL_CORE_PROFILE);
   
    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
    if (!window) {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

        if (glewInit() != GLEW_OK)
        std::cout << "ERROR!" << std::endl;
   //First you need to create a valid OpenGL rendering context and call glewInit() to initialize the extension entry points. 

    std::cout << glGetString(GL_VERSION) << std::endl;
    {
        float positions[] = {
           -0.5f, -0.5f,//0
            0.0f, -0.5f,//1
            0.5f,  0.5f,//2


           -0.5f,  0.5f //3
        };//vertex shader 会被调用三次

        unsigned int indices[] = {
            0,1,2,
            2,3,0
        };
        unsigned int vao;//vertex array object;
        GLCall(glGenVertexArrays(1, &vao));
        GLCall(glBindVertexArray(vao));

        VertexArray va;
        VertexBuffer vb(positions, 4 * 2 * sizeof(float));

        VertexBufferLayout layout;
        layout.Push<float>(2);
        va.AddBuffer(vb, layout);
        
        IndexBuffer ib(indices, 6);

          
        Shader shader("res/shader/Basic.shader");
        shader.Bind();
        shader.SetUniform4f("u_Color", 0.8f, 0.3f, 0.8f, 1.0f);

        va.UnBind();
        vb.Unbind();
        ib.Unbind();
         shader.UnBind();


         Renderer renderer;


        float r = 0.0f;
        float increment = 0.5f;
         /* Loop until the user closes the window */
        while (!glfwWindowShouldClose(window))
        {
            /* Render here */
            renderer.Clear();

            shader.Bind();
            shader.SetUniform4f("u_Color",r,0.3f,0.8f,1.0f);
           
      
            renderer.Draw(va,ib,shader);
            

            if (r > 1.0f)
                increment = -0.05f;
            else if (r < 0.0f)
                increment = 0.05f;

            r += increment;

            //glDrawArrays(GL_TRIANGLES,0,6);

            /* Swap front and back buffers */
            glfwSwapBuffers(window);

            /* Poll for and process events */
            glfwPollEvents();
        }

    }
    glfwTerminate();
    return 0;
}