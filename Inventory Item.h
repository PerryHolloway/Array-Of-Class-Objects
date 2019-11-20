//This class has overload construtos, but will become an array of objects.
#ifndef INVENTORYITEM_H
#define INVENTORYITEM_H
#include <iostream>
#include <string>
using namespace std;

class InventoryItem{

  private:
  string description;
  double cost;
  int units;
  public:
 InventoryItem() //Default construtor
 {
 description = "";//Calling in the H File afeter
 double cost=0.0;
 int  units=0;
 }
 InventoryItem(string desc) //Constructor#2 paramertized
 {
   description = desc;
   cost =0.0;
   units =0;
 }
InventoryItem(string desc,double c, int u)
{
  description =desc;
  cost = c;
  units = u;
}
//Mutators functions
void setDescription(string desc) {description = desc;}
void setCost(double c) {cost = c;}
void setUnit(int u) {units =u;}

//Accessor funtions
string getDescription() const {return description;}
double getCost() const {return cost; }
int getUnits() const {return units;}


};
#endif