#include "CCO.h"
#include "Designs.h"
#include "GuestUser.h"
#include "InventoryManager.h"
#include "Order.h"
#include "Payment.h"
#include "Shopper.h"
#include "Technician.h"
#include <iostream>

int main() {
  Employee *e1 = new Employee();
  e1->displayEmpDetails();
  Employee *e2 =
      new Employee("E001", "Kamal", 30000.0, 40, "0412226155", 5, 8.5);
  e2->displayEmpDetails();

  RegisteredCustomer *r1 = new RegisteredCustomer(123456789, "123reg@yahoo.com",
                                                  "asdadaasda", "1212/12/21");
  r1->displayRDetails();

  Feedback *f1 = new Feedback();
  f1->assginFeedback("FE212", "djahdjahja", "qjhajda");
  f1->addFeedback(r1);
  Feedback *f2 = new Feedback();
  f2->assginFeedback("FE312", "jfdsjfsk", "fksfkfks");
  f2->addFeedback(r1);
  f1->displayFeedback();

  CCO *co1 = new CCO("CC01", "pissa@gmail.com", "E002", "sunil", 40000.0, 50,
                     "2147483647", 4, 5.5);
  co1->reviewFeedback(f1, f2);
  co1->displayEmpDetails();

  UserProfile *user = new UserProfile();
  user->assignDetails("PID001", "Gihan", "dpaspdam", 26627);
  user->displayDetails();

  Technician *t1 = new Technician("T001", "TEch@gmail.com", "E005", "gota",
                                  57000.0, 43, "0714354675", 2, 3.5);
  t1->displayEmpDetails();

  Designer *d1 = new Designer(879875678, "lolo@gmail.com", "kascubikasc",
                              "3333/33/33", "DID02");
  d1->displayRDetails();

  Designs *de1 = new Designs();
  de1->assignDetails("D123", "Adddsa", "Black", "Female");
  de1->addDesigns(d1);
  de1->displayDsgnDetail();

  GuestUser *gu1 = new GuestUser("wdwff");
  gu1->displayDetails();

  shopper *s1 = new shopper("SID33", 686576546, "lol@gmail.com", "djkbsvjbkjb",
                            "2333/22/33");
  s1->displayRinfo();

  Order *o1 = new Order();
  o1->assignOrderdetails("Od9089");
  o1->displayOrderDetails();

  Product *p1 = new Product("p001", "miyna", "42445", "blue", "xl");
  p1->displayPrdtDetails();

  Payment *pa1 = new Payment("P004", "hgddddxf", 3457.8, "4557/11/30");
  pa1->displayPaymentDetails();

  Manager *m1 = new Manager("MID121", "lokusir@gmail.com", "sid212", "Ashen",
                            1212.0, 23, "021245343", 4, 5.3);
  m1->displayEmpDetails();

  Report *re1 = new Report();
  re1->assignRpDetails("Rid8876", "sjkajka");
  re1->displayRpDetails();

  InventoryManager *co2 =
      new InventoryManager("IM01", "gg@gmail.com", "E003", "namal", 42000.0, 20,
                           "2147483647", 4, 5.5);
  co2->displayEmpDetails();

  delete e1;
  delete e2;
  delete r1;
  delete f1;
  delete f2;
  delete co1;
  delete user;
  delete t1;
  delete d1;
  delete de1;
  delete gu1;
  delete s1;
  delete o1;
  delete p1;
  delete pa1;
  delete m1;
  delete re1;
  delete co2;
}