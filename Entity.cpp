#include "pch.h"

Entity::Entity() : m_pos(10.f,10.f), m_dir(1.f, 0.f), m_size(20.f, 20.f), m_spd(1.f){};

Entity::Entity(sf::Vector2f pos, sf::Vector2f dir, sf::Vector2f size, float spd)
{
	m_pos = pos;
	m_dir = dir;
	m_size = size;
	m_spd = spd;
}

Entity::~Entity(){}