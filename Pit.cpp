
#include "Pit.hpp"

Pit::Pit(int x, int y, int width, int height) : Interactable(x, y, width, height), covered(false) {}

bool Pit::interact(Explorer* player) {
  if (Helper::absoluteSquaredDistance(getCoordinates(), player->getCoordinates()) == 0 && !covered) {
      player->jumpPit();
      covered = true;
      return player->getStamina() == 0;  // Return true if stamina becomes 0
  }
  return false;
}

InteractableType Pit::getType() {
    return PIT;
}