#ifndef __PADDLE_H__
#define __PADDLE_H__
#include "pch.h"

class Paddle : public Entity
{
public:
	Paddle();
	Paddle(sf::Vector2f pos, sf::Vector2f dir, sf::Vector2f size, float spd);
	~Paddle();

	void Move(sf::Vector2f dir);
	void set_pos(sf::Vector2f pos);
	sf::Vector2f get_pos();
	void set_sprite();
};

#endif
