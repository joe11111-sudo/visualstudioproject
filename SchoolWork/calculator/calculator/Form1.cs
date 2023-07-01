using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace calculator
{
    public partial class Form1 : Form
    {      
        //定义操作数和结果
        string firstValue, secondValue, result;
        char operation;
        //存储上次点击了什么按钮，0代表什么都没点击，1代表了数字按钮
        private int lastButtonStatus = 0;

        public Form1()
        {
            InitializeComponent();
        }
        private void button_value_click(object sender, EventArgs e)
        {
            Button btn = (Button)sender;
            if (lastButtonStatus == 0 || textBox_ans.Text == "0")
            {
                textBox_ans.Text = btn.Text;
            }
            else
            {
                textBox_ans.Text += btn.Text;
            }
            lastButtonStatus = 1;
        }
        private void Form1_Load(object sender, EventArgs e)
        {
            this.textBox_ans.Text = "0";
            this.textBox_cal.Text = "0";
            button_zero.Click += new EventHandler(button_value_click);
            button_one.Click += new EventHandler(button_value_click);
            button_two.Click += new EventHandler(button_value_click);
            button_three.Click += new EventHandler(button_value_click);
            button_four.Click += new EventHandler(button_value_click);
            button_five.Click += new EventHandler(button_value_click);
            button_six.Click += new EventHandler(button_value_click);
            button_seven.Click += new EventHandler(button_value_click);
            button_eight.Click += new EventHandler(button_value_click);
            button_nine.Click += new EventHandler(button_value_click);
        }
     

        private void button_add_Click_1(object sender, EventArgs e)
        {
            firstValue = textBox_ans.Text;
            operation = '+';
            textBox_cal.Text = firstValue + '+';
            textBox_ans.Text = string.Empty;
        }

        private void button_sub_Click_1(object sender, EventArgs e)
        {
            firstValue = textBox_ans.Text;
            operation = '-';
            textBox_cal.Text = firstValue + '-';
            textBox_ans.Text =string.Empty;
        }

        private void button_mul_Click_1(object sender, EventArgs e)
        {
            firstValue = textBox_ans.Text;
            operation = '×';
            textBox_cal.Text = firstValue + '×';
            textBox_ans.Text = string.Empty;
        }

        private void button_div_Click_1(object sender, EventArgs e)
        {
            firstValue = textBox_ans.Text;
            operation = '÷';
            textBox_cal.Text = firstValue + '÷';
            textBox_ans.Text = string.Empty;
        }

        private void button_clear_Click_1(object sender, EventArgs e)
        {
            textBox_cal.Text = string.Empty;
            textBox_ans.Text = string.Empty;
            firstValue = string.Empty;
            secondValue = string.Empty;
        }

        private void button_equal_Click_1(object sender, EventArgs e)
        {
            secondValue = textBox_ans.Text;
            textBox_cal.Text += secondValue + '=';
            double outFirst, outSecond;
            double.TryParse(firstValue, out outFirst);
            double.TryParse(secondValue, out outSecond);
            switch (operation)
            {
                case '+':
                    result = (outFirst + outSecond).ToString();
                    break;
                case '-':
                    result = (outFirst - outSecond).ToString();
                    break;
                case '×':
                    result = (outFirst * outSecond).ToString();
                    break;
                case '÷':
                    if (outSecond != 0)
                    {
                        result = (outFirst / outSecond).ToString();
                    }
                    else
                    {
                        MessageBox.Show("被除数不能为0");
                    }
                    break;
            }
            textBox_ans.Text = result;
        }
    }
}
