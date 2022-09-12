#include "Account.h"
#include <iostream>
using namespace std;

int main() {
  Account account1{"Jane Green", 50};
  Account account2{"John Blue", -7};
  
  cout << "account1: " << account1.getName() << " balance is $" << account1.getBalance() << endl;
  cout << "\naccount2: " << account2.getName() << " balance is $" << account2.getBalance() << endl;
  
  cout << "\n\nEnter witdraw amount for account1: ";
  int witdrawAmount;
  cin >> witdrawAmount;
  if (witdrawAmount <= account1.getBalance()) {
    cout << "Witdrawing $" << witdrawAmount << " to account1 balance" << endl;
    account1.witdraw(witdrawAmount);
    }
  else {
    cout << "Witdrawal amount exceeded account balance." << endl;
  }
  
  cout << "account1: " << account1.getName() << " balance is $" << account1.getBalance() << endl;
  cout << "\naccount2: " << account2.getName() << " balance is $" << account2.getBalance() << endl;

  cout << "\n\nEnter witdraw amount for account2: ";
  cin >> witdrawAmount;
  if (witdrawAmount <= account2.getBalance()) {
    cout << "Witdrawing $" << witdrawAmount << " to account2 balance" << endl;
    account2.witdraw(witdrawAmount);
    }
  else {
    cout << "Witdrawal amount exceeded account balance." << endl;

  cout << "account1: " << account1.getName() << " balance is $" << account1.getBalance() << endl;
  cout << "\naccount2: " << account2.getName() << " balance is $" << account2.getBalance() << endl;
  };
}