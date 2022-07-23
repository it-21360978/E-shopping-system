#include<iostream>
#include "Manager.h"
#include "Shopper.h"
#define SIZE4 2
using namespace std;

class InventoryManager;

class Product{
private: 
  string productID;
  string productName;
  string productPrice;
  string productColor;
  string productSize;
  shopper *shppr[SIZE4];
public:
  Product(){
    productID = "p000";
    productName = "pName";
    productPrice = "0000";
    productColor = "pColor";
    productSize = "pSize";
  }
  Product (string prdtID, string prdtName, string prdtPrice, string prdtColor, string prdtSize){
    productID = prdtID;
    productName = prdtName;
    productPrice = prdtPrice;
    productColor = prdtColor;
    productSize = prdtSize;
  }


  void filterProducts()
  {
    
  }

  void displayPrdtDetails() //Display product details
  {
    cout << "Product ID: " << productID << endl;
    cout << "Product Name: " << productName << endl;
    cout << "Product Price: " << productPrice << endl;
    cout << "Product Color: " << productColor << endl;
    cout << "Product Size: " << productSize << endl;

    for(int i = 1; i < 2; i++)
      {
        shppr[i]->displayRinfo();
      }
  }

  void addShopper(shopper *shppr1, shopper *shppr2)
  {
    shppr[0] = shppr1;
    shppr[1] = shppr2;
  }
};