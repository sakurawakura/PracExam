
#ifndef EXIT_HPP
#define EXIT_HPP

#include "Interactable.hpp"
#include "Helper.hpp"

class Exit : public Interactable {
public:
    Exit(int width, int height);
    bool interact(Explorer* player) override;
    InteractableType getType() override;
};

#endif