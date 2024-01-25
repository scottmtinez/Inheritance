//CheckingAccount.h
#include "Account.h"

class checkingAccount : public Account
  {
    private:
      double checkingAccountFees;

    public:
      checkingAccount(double, double); // Constructor

      //Redefining Credit & debit
      void credit(double); //Credit
      bool debit(double); //Debit
  };
