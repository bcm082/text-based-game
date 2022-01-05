#include "Item.h"

int Item::getValue() const { return value_; }
int Item::getType() const { return type_; }
bool Item::isDefense() const {
  if (type_ == 1)
    return true;
  else
    return false;
}
bool Item::isHP() const {
  if (type_ == 0)
    return true;
  else
    return false;
}

