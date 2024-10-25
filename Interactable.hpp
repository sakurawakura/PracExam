// Interactable.hpp
#ifndef INTERACTABLE_HPP
#define INTERACTABLE_HPP

#include "GridItem.hpp"
#include "Explorer.hpp"

enum InteractableType { EXIT, PIT };

class Interactable : public GridItem {
private:
    static int activeInteractableCount;

public:
    Interactable(int x = 0, int y = 0, int width = 0, int height = 0);
    virtual bool interact(Explorer* player) = 0;
    virtual InteractableType getType() = 0;
    static int getActiveInteractableCount();
    virtual ~Interactable();
};

#endif