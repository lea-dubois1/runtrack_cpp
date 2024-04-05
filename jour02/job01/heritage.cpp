#include "heritage.hpp"

class Aquatique
{
    protected:
    int vitesse;

    public:
    virtual void Nager()
    {
        std::cout << "Je nage" << std::endl;
    }
};

class Terestre
{
    protected:
    int vitesse;

    public:
    virtual void Marcher()
    {
        std::cout << "Je marche" << std::endl;
    }
};

class Pingouin : public Aquatique, public Terestre
{
    void SePresenter()
    {
        std::cout << "Je suis un pingouin" << std::endl;
    }
};

int main()
{

}