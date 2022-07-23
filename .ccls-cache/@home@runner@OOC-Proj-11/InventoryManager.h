#include<iostream>
#include "Product.h"
#include "Employee.h"
using namespace std;
#define SIZE2 2

class Product;

class InventoryManager : public Employee
{
private:
  string inventoryManagerID;
  string inventoryManagerEmail;
  Product *prdts[SIZE2];

public:
  InventoryManager()
  {
    inventoryManagerID = "0000";
    inventoryManagerEmail = "@gmail.com";
  }

  InventoryManager(string pID, string pEmail, string EID, string name, float salary, int attent, string contact, int hrs, float rate) : Employee(EID, name, salary, attent, contact, hrs, rate)
  {
    inventoryManagerID = pID;
    inventoryManagerEmail = pEmail;
  }

  void addProducts(Product *pra1,Product *pra2)
  {
    prdts[0] = pra1;
    prdts[1] = pra2;
  }

  void updateProducts()
  {
    
  }

  void deleteProducts()
  {
    
  }

  float calcSalary()
  {
      return(employeeBasicSalary + otHrs * otRate);
  }

  void displayinfo() //Display inventory manager details
  {
    cout << "Inventory manager ID: " << inventoryManagerID << endl;
    cout << "Inventory manager Email: " << inventoryManagerEmail << endl;
  }

  ~InventoryManager()
    {
      cout << "Inventory Manager deleted" << endl;
    }
};