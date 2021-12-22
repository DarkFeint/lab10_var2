#include "hats.hpp"

namespace vr
{

	

		Circle::Circle(float x, float y)
		{

			m_x = x;

			m_fig = true;

			m_y = y;

			m_posx = x;

			m_posy = y;

			m_t = 0;

			m_r = 50;

			m_shape = new sf::CircleShape(m_r);

			m_shape->setOrigin(m_r, m_r);

			m_shape->setPosition(m_x, m_y);

			m_shape->setFillColor(sf::Color::Black);

		}

		Circle::~Circle()
		{

			delete m_shape;
		}

		sf::CircleShape* Circle::Get()
		{
			return m_shape;
		}

		void Circle::Move()
		{


			if (m_fig == true)
			{
				m_x = m_posx + 35 * m_t - 35 * sin(m_t);

				m_y = m_posy - 35 + 35 * cos(m_t);

				m_shape->setPosition(m_x, m_y);

				m_t += 0.1;
			}

		}


		void Circle::SetFigTrue()
		{
			m_fig = true;
		}

		void Circle::SetFigFalse()
		{
			m_fig = false;
		}

		void Circle::IncrRadius()
		{
			if (m_r <= (vr::height / 2))
			{

				m_shape->setRadius(m_r);

				m_r++;
			}

		}

		float Circle::GetX()
		{
			return m_x;
		}

		float Circle::GetPosX()
		{
			return m_posx;
		}

		void Circle::Teleport(float width, float height)
		{
			
			float x = width / 2;

			float y = height / 2;

			m_shape = new sf::CircleShape(m_r);

			m_shape->setOrigin(m_r, m_r);

			m_shape->setPosition(x, y);

			m_shape->setFillColor(sf::Color::Black);

		}

	
	


}