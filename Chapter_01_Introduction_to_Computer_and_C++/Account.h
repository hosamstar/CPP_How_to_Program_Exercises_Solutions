#include <string>

class Account
{
public:
    Account(std::string accountName, int intialBalance) : name{accountName}
    {
        if (intialBalance > 0)
            balance = intialBalance;
    }

    void deposit(int depositeAmount){
        if (depositeAmount > 0 )
            balance += depositeAmount;
    }

    int getBalance() const{
        return balance;
    }

    void setName(std::string accountName){
        name = accountName;
    }

    std::string getName() const {
        return name;
    }

private:
    std::string name;
    int balance{0};
};