#ifndef CASE_H
#define CASE_H

#include <SFML/Graphics.hpp>


#define TAILLE_CASE 40

class Plateau;
class Pion;

class Case
{
    public:
        Case(int indX=-1, int indY=-1, sf::Color color=sf::Color::Blue);
        virtual ~Case();

        void init(int indX, int indY, sf::Color color);


    protected:

    private:
        sf::Color _color;
        int _indX, _indY;
        sf::Vector2f _position;

        Pion* _pionSurCase;

        typedef enum{
            vide,
            pionBlanc,
            pionNoir
        }EtatCase;
        EtatCase _etatCase;
};

#endif // CASE_H
