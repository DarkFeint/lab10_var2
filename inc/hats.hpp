#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <chrono>
#include <thread>
#include <cmath>
#include <hats.hpp>
#define  PI acos(-1)

using namespace std;

using namespace std::chrono_literals;

namespace vr
{
	const float width = 1000;

	const float height = 500;

	
	
	class Circle
	{
	public:
		Circle(float x, float y);

		~Circle();

		sf::CircleShape* Get();

		void Move();

		void SetFigTrue();

		void SetFigFalse();

		void IncrRadius();

		float GetX();

		float GetPosX();

		void Teleport(float width, float height);

	private:

		float m_x;

		float m_y;

		float m_posx;

		float m_posy;

		bool m_fig;

		int m_r;

		float m_t;

		sf::CircleShape* m_shape;
	};

}
