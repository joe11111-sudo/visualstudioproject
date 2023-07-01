#include <SFML/Graphics.hpp>

// demo hello world
int helloWorld()
{
	sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works");
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);
	while (window.isOpen())
	{
		sf::Event evt;
		while (window.pollEvent(evt))
		{
			if (evt.type == sf::Event::Closed)window.close();
		}
		window.clear();
		window.draw(shape);
		window.display();
	}
	return 0;
}