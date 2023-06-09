#include <iostream>
#include "monster.h"
#include "character.h"
#include "item.h"
#include <cstdlib>
using namespace std;


Monster::Monster() : Entity(), item(nullptr){}

Monster::Monster(double h, double d, Item* i, int s) : Entity(h, d), item(i), speed(s){}

Monster::~Monster() { delete item;}

int Monster::getSpeed(){ return speed; }
void Monster::printMonsterDescription(){
    cout << "           Monster health: " << getHealth() << endl;
}

void Monster::monsterItemDrop(Character* player){
    // int dropChance = rand() % 100 + 1;
    // if(dropChance >= 50) {  
    //     item = new healthPack("Health Pack", 20);
    //     cout << "Monster dropped a health pack." << endl;
    //     cin.ignore();
    //     player->addItemToInventory(item);
    // } 
    // else {  
    //     int currencyAmount = rand() % 50 + 1;  
    //     cout << "The monster dropped a currency pack." << endl;
    //     player->addCurrency(currencyAmount);
    // }
    player->addItemToInventory(item);
}
