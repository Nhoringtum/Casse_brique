#include "pch.h"

Ball::Ball()
{
	std::cout << "Ball created" << std::endl;
	set_sprite(m_texture);
};


Ball::Ball(sf::Vector2f pos, sf::Vector2f dir, sf::Vector2f size, float spd)
{
	m_pos = pos;
	m_dir = dir;
	m_size = size;
	m_spd = spd;
	set_sprite(m_texture);
};

Ball::~Ball(){};

void Ball::Move(sf::Vector2f dir)
{
	m_pos += dir * m_spd;
};
void Ball::set_pos(sf::Vector2f pos)
{
	m_pos = pos;
};
sf::Vector2f Ball::get_pos()
{
	return (m_pos);
};

void Ball::set_sprite(sf::Texture texture)
{
	m_sprite.setTexture(texture);
	m_sprite.setScale(sf::Vector2f(0.06f, 0.06f));
};