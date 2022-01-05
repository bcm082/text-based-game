
Simple text based game in c++

---
g++ *.cpp -o LolosAdventure

There is a monster in room B2, it is stronger than Hero, so you should 
first pick up item in room E1, and than you can beat the monster in B2.

There is a monster in room D2, which you can kill easily.

Room D3 is destination. If you reach it, Congratulations will be printed.

If monster kills you, Game over will be printed.

---
If a user wants to change some settings, like new Monster, Item, etc.
In file Game.cpp
Example: Item* it3 = new Item(0, 5);
And to add it in some room:
room2->SetRoomItem(it3);

Same procedure can be used for adding new monsters

