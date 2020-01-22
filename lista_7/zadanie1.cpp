#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <unistd.h>

using namespace std;
int main()
{
    int keyonoff = 1;
    const float szerokosc = 800, wysokosc = 600, promien = 50, N = 3;
    float xkola[3] = {250, 350, 300}, ykola[3] = {250, 350, 300};
    float vx[3] = {0.21, 0.34, 0.64}, vy[3] = {0.21, 0.34, 0.64}, dt = 0.9999999;

    sf::RenderWindow window(sf::VideoMode(szerokosc, wysokosc), "Nasze okno");
    std::vector<sf::CircleShape> shapes(N);
    sf::Text text;

    for (int i = 0; i < N; i++)
    {
        sf::CircleShape shape;
        shape.setRadius(promien);
        shapes[i] = shape;
    }

    while (window.isOpen())
    {
        // dopoki okno jest otwarte...
        // w tym obiekcie klasy sf::Event
        // bedziemy mieli informacje co zrobil uzytkownik
        sf::Event event;
        while (window.pollEvent(event))
        {
            // uzytkownik kliknal zamkniecie okna
            if (event.type == sf::Event::Closed)
                window.close();
            // uzytkownik nacisnal klawisz
            if (event.type == sf::Event::KeyPressed)
            {
                keyonoff = 1 - keyonoff;
            }
            if (event.key.code == sf::Keyboard::Escape)
                window.close();
        }

        for (int i = 0; i < N; i++)
        {
            xkola[i] += vx[i] * dt;
            ykola[i] += vy[i] * dt;
            vy[i] += 0.001 * dt;
            if ((xkola[i] + 2 * promien) > szerokosc || (xkola[i]) < 0)
            {
                vx[i] = -vx[i];
            }
            if ((ykola[i] + 2 * promien) > wysokosc || (ykola[i]) < 0)
            {
                vy[i] = -vy[i];
            }
        }
        // czyszczenie (na czarno)
        window.clear(sf::Color::Black);
        // rysuj kolo w zaleznosci od stanu zmiennej keyonoff
        //if (keyonoff)
        for (int i = 0; i < N; i++)
        {
            window.draw(shapes[i]);
            shapes[i].setPosition(xkola[i], ykola[i]);
            if (vy[i] > 0)
            {
                shapes[i].setFillColor(sf::Color::Red);
            }
            else
            {
                shapes[i].setFillColor(sf::Color::Blue);
            }
        }
        window.display();
    }
    return 0;
}