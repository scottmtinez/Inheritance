//SavingAccount.h
#include "Account.h"
class SavingAccount : public Account
  {
    private:
      double interestRate;

    public:
      void setInterestRate(double); //set interest rate
      double getInterestRate(); // getter 
      double calculateInterest(); //calculate the interest amount
      SavingAccount(double, double); // constructors
  };
