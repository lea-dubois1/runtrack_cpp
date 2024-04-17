#include <iostream>
#include <vector>
#include <algorithm>

#ifndef COPY
#define COPY

class Aquatique
{
    protected:
    int vitesseNage;

    public:
    virtual void Nager();
};

class Terrestre
{
    protected:
    int vitesseMarche;

    public:
    virtual void Marcher();
};

class Pingouin : public Aquatique, public Terrestre
{
    private:
    double vitesseGlisse;

    public:
    static std::vector<Pingouin*> allPigouins;

    void ConstructorBase();
    Pingouin(Pingouin& otherPigouin);
    Pingouin();

    void SePresenter();
    void AddVitesseGlisse(double num);
    void SubstractVitesseGlisse(double num);

    ~Pingouin();
};

#endif