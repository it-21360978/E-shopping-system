#include <iostream>
#include "RegisteredCustomer.h"
using namespace std;

class Designer : public RegisteredCustomer
{
protected:
    string designerID;
public:

    Designer(int cPhone,string cEmail,string cAddress,string cDOB,string DID):RegisteredCustomer(cPhone,cEmail,cAddress,cDOB){
        designerID = DID;
       
    }
    
    void sellDesigns(){

    }
    void displayRinfo(){
        cout<< "Designer ID = " << designerID << endl<<endl;;

    }
    ~Designer(){
        cout<<"Designer details deleted"<<endl;
    }
};
