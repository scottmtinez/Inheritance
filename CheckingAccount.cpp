//CheckingAccount.cpp
#include <iostream>
#include <stdexcept>
#include "CheckingAccount.h"
using namespace std;

//Function that check if or else the program should charge a fee
checkingAccount::checkingAccount(double balance, double fees) : Account(balance)
  {
    if(fees*balance >= balance)
      {
        checkingAccountFees = fees;
      }
    else
      {
        throw invalid_argument("Fees cannot be a negative.");
      }
  }

//Credit Function
void checkingAccount::credit(double amount)
  {
    int newBalance = (getBalance() + amount) - checkingAccountFees;
    setBalance(newBalance);
  }

//Debit Function
bool checkingAccount::debit(double debitAmount)
  {
    if(debitAmount > getBalance())
      {
        cout<<"Debit amount cannot be more than the Account Balance."<<endl;
        return false;
      }
    else
      {
        setBalance(getBalance() - checkingAccountFees);
        return true;
      } 
  }


