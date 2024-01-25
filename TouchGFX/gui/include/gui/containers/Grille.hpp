#ifndef GRILLE_HPP
#define GRILLE_HPP

#include <gui_generated/containers/GrilleBase.hpp>

class Grille : public GrilleBase
{
public:
    Grille();
    virtual ~Grille() {}

    virtual void initialize();
protected:
};

#endif // GRILLE_HPP
