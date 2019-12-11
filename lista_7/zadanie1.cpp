#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <unistd.h>

using namespace std;
int main()
{
    int keyonoff = 1;
    const float szerokosc=800, wysokosc=600, promien=100;
    float xkola=szerokosc/2, ykola=wysokosc/2;
    float vx=1, vy=1;

    sf::RenderWindow window(sf::VideoMode(szerokosc, wysokosc), "Nasze okno");
    sf::CircleShape shape;
    sf::Text text;
    shape.setFillColor(sf::Color::Red);
    shape.setRadius(promien);
    shape.setPosition(xkola-promien, ykola-promien);
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
            if (event.type == sf::Event::KeyPressed){
                keyonoff = 1 - keyonoff;
            }
            if (event.key.code == sf::Keyboard::Escape)
                window.close();
            
            /*if (event.key.code == sf::Keyboard::Space){
                shape.move(vx, vy);
                xkola+=vx;
                ykola+=vy;
                if ((xkola+promien)>szerokosc || (xkola-promien)<0){
                    vx=-vx;
                }
                if ((ykola+promien)>wysokosc || (ykola-promien)<0){
                    vy=-vy;
                }
            }*/
        }
        for (int i=0; i<100; i++){
            shape.move(vx, vy);
            xkola+=vx;
            ykola+=vy;
            if ((xkola+promien)>szerokosc || (xkola-promien)<0){
                vx=-vx;
            }
            if ((ykola+promien)>wysokosc || (ykola-promien)<0){
                vy=-vy;
            }
            usleep(1000);
        }
        // czyszczenie (na czarno)
        window.clear(sf::Color::Black);
        // rysuj kolo w zaleznosci od stanu zmiennej keyonoff
        if (keyonoff)
            window.draw(shape);
        window.display();
    }
    return 0;
}