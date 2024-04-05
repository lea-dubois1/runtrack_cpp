#include "copy.hpp"

void Aquatique::Nager()
{
    std::cout << "Je nage" << std::endl;
}

void Terrestre::Marcher()
{
    std::cout << "Je marche" << std::endl;
}

Pingouin::Pingouin(Pingouin& otherPigouin)
{
    this->vitesseGlisse = otherPigouin.vitesseGlisse;
}

void Pingouin::SePresenter()
{
    std::cout << "Je suis un pingouin" << std::endl;
}

void Pingouin::AddVitesseGlisse(double num)
{
    this->vitesseGlisse += num;
}

void Pingouin::SubstractVitesseGlisse(double num)
{
    this->vitesseGlisse -= num;
}

int main()
{

}