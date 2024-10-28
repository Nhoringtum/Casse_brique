#include "pch.h"

Paddle::Paddle()
{
	std::cout << "Paddle created" << std::endl;
	set_sprite(m_texture);
};

Paddle::Paddle(sf::Vector2f pos, sf::Vector2f dir, sf::Vector2f size, float spd)
{
	m_pos = pos;
	m_dir = dir;
	m_size = size;
	m_spd = spd;
	set_sprite(m_texture);
};

Paddle::~Paddle()
{
};

void Paddle::Move(sf::Vector2f dir)
{
	m_pos += dir * m_spd;
};
void Paddle::set_pos(sf::Vector2f pos)
{
	m_pos = pos;
};
sf::Vector2f Paddle::get_pos()
{
	return (m_pos);
};
void Paddle::set_sprite(sf::Texture texture)
{

	m_sprite.setTexture(texture);
	m_sprite.setScale(sf::Vector2f(0.06f, 0.06f));
};