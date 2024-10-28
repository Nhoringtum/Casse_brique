#ifndef __BALL_H__
#define __BALL_H__
#include "pch.h"

class Ball : public Entity
{
public:
	Ball();
	Ball(sf::Vector2f pos, sf::Vector2f dir, sf::Vector2f size, float spd);
	~Ball();

	void Move(sf::Vector2f dir);
	void set_pos(sf::Vector2f pos);
	sf::Vector2f get_pos();
	void set_sprite();
};

#endif
