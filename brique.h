#ifndef __BRIQUE_H__
#define __BRIQUE_H__
#include "pch.h"

class Brique : public Entity
{
public:
	Brique();
	Brique(sf::Vector2f pos, sf::Vector2f dir, sf::Vector2f size, float spd);
	~Brique();

	void Move(sf::Vector2f dir);
	void set_pos(sf::Vector2f pos);
	sf::Vector2f get_pos();
	void set_sprite();
};

#endif
