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
    //ballSprite.setTextureRect(sf::IntRect(10, 10, 32, 32));

    ballSprite.scale(0.5f, 0.5f);
    ballSprite.setPosition(window.getSize().x / 2, window.getSize().y / 2);
    ballSprite.setOrigin(sf::Vector2f(ballSprite.getPosition().x + ballSprite.getScale().x / 2, ballSprite.getPosition().y + ballSprite.getScale().y / 2));
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
        ballSprite.move(0.002f, 0.f);
        ballSprite.rotate(0.02f);
        
        window.display();
    }
    return 0;
}