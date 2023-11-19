#include <iostream>
#include <SFML/Graphics.hpp>

int main(int argc, char const *argv[]) {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Snake Game");

    while (window.isOpen()){
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::Black);

        // Render game elements

        window.display();
    }
    return 0;
}