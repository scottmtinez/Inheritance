//Account.h
#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
  {
    private:
      double balance; //Data member that stores the balance

    public:
      Account(double);
      void credit(double);
      bool debit(double);
      void setBalance(double);
      double getBalance();

  };

#endif
