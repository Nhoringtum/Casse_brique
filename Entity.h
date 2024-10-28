#ifndef __ENTITY_HPP__
#define __ENTITY_HPP__
#include "pch.h"


class Entity
{
public:
	Entity();
	Entity(sf::Vector2f pos, sf::Vector2f dir, sf::Vector2f size, float spd);
	~Entity();

	sf::Vector2f m_pos;
	sf::Vector2f m_dir;
	sf::Vector2f m_size;
	sf::Sprite m_sprite;
	float m_spd;

	virtual void Move(sf::Vector2f dir) = 0;
	virtual void set_pos(sf::Vector2f pos) = 0;
	virtual sf::Vector2f get_pos() = 0;
	virtual void set_sprite() = 0;
};

#endif