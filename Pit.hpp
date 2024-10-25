
#ifndef PIT_HPP
#define PIT_HPP

#include "Interactable.hpp"
#include "Helper.hpp"
#include "Explorer.hpp"

class Pit : public Interactable {
private:
    bool covered;

public:
    Pit(int x, int y, int width, int height);
    bool interact(Explorer* player) override;
    InteractableType getType() override;
};

#endif