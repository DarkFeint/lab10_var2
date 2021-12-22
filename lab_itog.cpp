#include "inc/hats.hpp"

int main()
{

   sf::RenderWindow window(sf::VideoMode(vr::width, vr::height), L"Шизофазия с шариком");

   vr::Circle* circle = new vr::Circle(50, 450);

   sf::Music music;

   music.openFromFile("music/coming_to_the_river.ogg");

   music.play();
   
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();

        sf::Texture cosmos;

        cosmos.loadFromFile("images/background/background.jpg");

        sf::Sprite background(cosmos);

        window.draw(background);
       
        window.draw(*circle->Get());

        if (circle->GetX() < (210 * PI + circle->GetPosX()))
        {
            circle->Move();
        }
        else
        {
            circle->SetFigFalse();

            circle->~Circle();
            
            circle->Teleport(vr::width, vr::height);

            circle->IncrRadius();
        }
        
        window.display();

        this_thread::sleep_for(40ms);
    }

    return 0;
}