#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <unistd.h>

using namespace std;
int main()
{
    int keyonoff = 1;
    const float szerokosc=800, wysokosc=600, promien=100, N=3;
    float xkola[3]={250,350,450}, ykola[3]={250,350,450};
    float vx[3]={0.5,0.3,0.8}, vy[3]={0.5,0.3,0.8};

    sf::RenderWindow window(sf::VideoMode(szerokosc, wysokosc), "Nasze okno");
    sf::CircleShape shape;
    sf::Text text;
    for (int i=0;i<N;i++){
    shape.setFillColor(sf::Color::Red);
    shape.setRadius(promien);
    shape.setPosition(xkola[i]-promien, ykola[i]-promien);
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
            if (event.type == sf::Event::KeyPressed){
                keyonoff = 1 - keyonoff;
            }
            if (event.key.code == sf::Keyboard::Escape)
                window.close();
            
            
            
        }
        for(int i=0;i<N;i++){
        shape.move(vx[i], vy[i]);
            xkola[i]+=vx[i];
            ykola[i]+=vy[i];
            if ((xkola[i]+promien)>szerokosc || (xkola[i]-promien)<0){
                vx[i]=-vx[i];
            }
            if ((ykola[i]+promien)>wysokosc || (ykola[i]-promien)<0){
                vy[i]=-vy[i];
            }
        }
        // czyszczenie (na czarno)
        window.clear(sf::Color::Black);
        // rysuj kolo w zaleznosci od stanu zmiennej keyonoff
        //if (keyonoff)
            window.draw(shape);
        window.display();

    }
    return 0;
}