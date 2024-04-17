#include "colony.hpp"

void Aquatique::Nager()
{
    std::cout << "Je nage" << std::endl;
}

void Terrestre::Marcher()
{
    std::cout << "Je marche" << std::endl;
}

std::vector<Pingouin*> Pingouin::allPigouins;

void Pingouin::ConstructorBase()
{
    Pingouin::allPigouins.push_back(this);
}

Pingouin::Pingouin(Pingouin& otherPigouin)
{
    Pingouin::ConstructorBase();
    this->vitesseGlisse = otherPigouin.vitesseGlisse;
}

Pingouin::Pingouin()
{
    Pingouin::ConstructorBase();
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

Pingouin::~Pingouin()
{
    std::vector<Pingouin*>::iterator position = std::find(Pingouin::allPigouins.begin(), Pingouin::allPigouins.end(), this);
    Pingouin::allPigouins.erase(position);
}

int main()
{
    Pingouin* pingouin1 = new Pingouin();
    pingouin1->Marcher();
    pingouin1->Nager();
    pingouin1->SePresenter();

    std::cout << Pingouin::allPigouins.size() << std::endl;

    Pingouin* pingouin2 = new Pingouin();
    std::cout << Pingouin::allPigouins.size() << std::endl;

    delete(pingouin1);
    std::cout << Pingouin::allPigouins.size() << std::endl;

    return 0;
}