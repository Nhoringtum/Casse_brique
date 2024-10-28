#include "pch.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "SFML works!");
    /*
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape); 
        window.display();
    }
    */
   
    sf::Texture texture;
    
    if (!texture.loadFromFile("ball.png"))
    {
        return 0;
    }

    sf::Sprite ballSprite;
    ballSprite.setTexture(texture);
    ballSprite.setScale(sf::Vector2f(0.06f, 0.06f));

   

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(ballSprite);
        window.display();
    }
    return 0;
}