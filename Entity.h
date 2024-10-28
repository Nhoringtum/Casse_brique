#ifndef __ENTITY_HPP__
#define __ENTITY_HPP__
#include "pch.h"

//mettre en template pour l'opti cast type de variable
class Entity
{
public:
	Entity();
	Entity(sf::Vector2f pos, sf::Vector2f dir, sf::Vector2f size, float spd, sf::Texture texture);
	~Entity();

	sf::Vector2f m_pos;
	sf::Vector2f m_dir;
	sf::Vector2f m_size;
	sf::Texture m_texture;
	sf::Sprite m_sprite;
	
	float m_spd;

	virtual void Move(sf::Vector2f dir) = 0;
	virtual void set_pos(sf::Vector2f pos) = 0;
	virtual sf::Vector2f get_pos() = 0;
	virtual void set_sprite(sf::Texture texture) = 0;
};

#endif