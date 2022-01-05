#pragma once
struct Character {
  int hp_;
  int attackPower_;
  virtual void setHP(int hp);
  virtual int getHP() const; 
  virtual void setAttackPower(int ap);
  virtual int getAttackPower() const;
};
