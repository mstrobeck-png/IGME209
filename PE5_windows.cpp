
#include <iostream>
//#include <pch.h>
#define SFML_STATIC
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

using namespace std;

//Assignment: draw three to five shapes with different colors and placement

int main()
{
    sf::RenderWindow window(sf::VideoMode(500,500), "PE5 Playing With Windows: Shape Edition");  //standard title name and size
    while (window.isOpen())             //creates method to display
    {
        window.clear(sf::Color::White);   //creates white canvas for image


        sf::CircleShape square(30, 4);                      //square
        square.setFillColor(sf::Color(80, 235, 236));
        square.setPosition(10, 30);

        sf::CircleShape circle(40);                          //circle
        circle.setFillColor(sf::Color(194, 223, 255));
        circle.setPosition(150, 0);
        
        sf::CircleShape triangle(45, 3);                     //triangle
        triangle.setPosition(15, 100);
        triangle.setFillColor(sf::Color(237, 81, 81));

        sf::RectangleShape rectangle(sf::Vector2f(120, 50));  //rectangle
        rectangle.setFillColor(sf::Color(176, 72, 181));
        rectangle.setPosition(150, 150);

        sf::CircleShape octagon(30, 8);                      //octagon
        octagon.setFillColor(sf::Color(231, 161, 176));
        octagon.setPosition(150, 250);

        window.draw(square);                                 //printing the shapes
        window.draw(triangle);
        window.draw(circle);
        window.draw(rectangle);
        window.draw(octagon);

    
        window.display();   //display screen
    }

    return 0;
}


