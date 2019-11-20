// Perry Holloway
// Dr_T
//Fundamental CompII
//November 19,2019
#include <iostream>
#include <iomanip>
#include <vector>
#include "Inventory Item.h"



int main() 

{

//Instatiate an inventory item, item1, using default constructor
InventoryItem item1;// default constructor is call no arguments passed
//instantiate an inventory item desc, item2, Hammer with one parameter constructor
InventoryItem item2("Hammer"); // Uae

item1.setDescription("Saw");
item1.setCost(25.99);
item1.setUnit(8);


InventoryItem item3("Flathead Screwdriver",5,63);
// Array of Objects. Goal store and efficiently dilplay the items on the list(array)
const int NUM_ITEMS = 3;
InventoryItem InventoryArray[NUM_ITEMS];
InventoryArray[0] = item1;
InventoryArray[1]= item2;
InventoryArray[2]= item3;

cout<<"Items in the Inventory list:" << endl;
cout<< setw(20) << "Inventorty Item" 
    << setw(8) << "Cost" 
    << setw(16) << "Units on Hand";
cout<< "*************************";
for(int i = 0;i < NUM_ITEMS; i++)
{
  cout << setw(20) << InventoryArray[i].getDescription();
  cout << setw(8) << InventoryArray[i]. getCost();
  cout << setw(16) << InventoryArray[i].getUnits();
  cout << endl;
}

//output 

vector<InventoryItem> InventoryVector;//22 23
InventoryVector.push_back(item1);//14
InventoryVector.push_back(item2);//25
InventoryVector.push_back(item3);//26

cout<<"Items in the Inventory list:" << endl;
cout<< setw(20) << "Inventorty Item" 
    << setw(8) << "Cost" << setw(8)
    << setw(16) << "Units on Hand";
cout<< "*************************";
for(InventoryItem x :  InventoryVector)
{
  cout << setw(20) << x.getDescription();//35
  cout <<setw(8) << x.getCost();
  cout <<setw(16)  << x.getUnits();
}

  return 0;
  
}