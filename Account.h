#include <string>

class Account {
public:
  Account(std::string accountName, int initialBalance) : name{accountName} {
    if (initialBalance > 0) {
      balance = initialBalance;
    }
  }

  void witdraw(int witdrawAmount) {
    if (balance - witdrawAmount >= 0) {
      balance = balance - witdrawAmount;
    }
  }

  int getBalance() const { return balance; }

  void setName(std::string accountName) { name = accountName; }
  std::string getName() const { return name; }

private:
  std::string name;
  int balance{0};
};