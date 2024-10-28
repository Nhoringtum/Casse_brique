#include "pch.h"

Entity::Entity() : m_pos(10.f,10.f), m_dir(1.f, 0.f), m_size(20.f, 20.f), m_spd(1.f){};

Entity::Entity(sf::Vector2f pos, sf::Vector2f dir, sf::Vector2f size, float spd, sf::Texture texture)
{
	m_pos = pos;
	m_dir = dir;
	m_size = size;
	m_spd = spd;
	m_texture = texture;
	if (!m_texture.loadFromFile("Breakout_Tile_Free.png"))
	{
		std::cout << "Could not load texture" << std::endl;
		return;
	}	
}

Entity::~Entity(){}