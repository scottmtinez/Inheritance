//SavingAccount.cpp
#include <iostream>
#include <stdexcept>
#include "SavingAccount.h"
using namespace std;

//Function for the balance value
//With if/else statement to find the
SavingAccount::SavingAccount(double balance, double interestValue) : Account(balance)
  {
    if(interestValue >= 0.0)
      {
        interestRate = interestValue;
      }
    else
      {
        throw invalid_argument("Interest Value cannot be a negative number.");
      }
  }

//A function return the interest rate to the account
double SavingAccount::getInterestRate()
  {
    return interestRate;
  }

//A function to return the interest for the Savings account
double SavingAccount::calculateInterest()
  {
    return getInterestRate()*getBalance();
  }
