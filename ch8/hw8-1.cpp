#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
class Money
{
public:
    Money(){
        dollars=0;
        cents=0;
    }
    Money(double amount){
        int all_cents=amount*100;
        dollars=all_cents/100;
        cents=all_cents%100;
    }
    Money(int theDollars, int theCents){
        dollars=theDollars;
        cents=theCents;
    }
    Money(int theDollars){
        dollars=theDollars;
        cents=0;
    }
    double getAmount() const{
        return dollars + cents*0.01;
    }
    int getDollars() const{
        return dollars;
    }
    int getCents() const{
        return cents;
    }
    
    friend const Money operator +(const Money& amount1, const Money& amount2){
        double add_amount = amount1.getAmount() + amount2.getAmount();
        return Money(add_amount);
    }
    friend const Money operator -(const Money& amount1, const Money& amount2){
        double sub_amount = amount1.getAmount() - amount2.getAmount();
        return Money(sub_amount);
    }
    friend bool operator ==(const Money& amount1, const Money& amount2){
        if(amount1.getAmount() == amount2.getAmount()){
            return true;
        }else{
            return false;
        }
    }
    friend bool operator >(const Money& amount1, const Money& amount2){
        return amount1.getAmount() > amount2.getAmount();
    }
    friend bool operator <(const Money& amount1, const Money& amount2){
        return amount1.getAmount() < amount2.getAmount();
    }
    friend bool operator >=(const Money& amount1, const Money& amount2){
        return amount1.getAmount() >= amount2.getAmount();
    }
    friend bool operator <=(const Money& amount1, const Money& amount2){
        return amount1.getAmount() <= amount2.getAmount();
    }
    const Money percent(int percentFigure) const {
        double amount=dollars+cents*0.01;
        return Money(amount * percentFigure/100.0);
    }

private:
    int dollars, cents;

    friend ostream& operator <<(ostream& outputStream, const Money& amount){
        outputStream<<"$"<<amount.getAmount();
        return outputStream;
    }
    friend istream& operator >>(istream& inputStream, Money& amount){
        char money_sign;
        double input_amount;
        inputStream>>money_sign>>input_amount;
        amount.dollars = amount.dollarsPart(input_amount);
        amount.cents = amount.centsPart(input_amount);
        return inputStream;
    }

    int dollarsPart(double amount) const{
        return (int)amount;
    }
    int centsPart(double amount) const{
        return (amount-(int)amount)*100;
    }
    int round(double number) const{
        return (int)floor(number + 0.5);
    }
};

int main()
{
    Money yourAmount, myAmount(10, 9);
    int percent;
    cout << "Enter an amount of money: ";
    cin >> yourAmount;
    cout << "Enter a percent you wish to take of your amount: ";
    cin >> percent;
    cout << "Your amount is " << yourAmount.getAmount() << endl;
    cout << "My amount is " << myAmount.getAmount() << endl;
    cout<< percent <<"%"<<" of your amount is $"<<yourAmount.percent(percent)<<endl;
    cout<< percent <<"%"<<" of my amount is $"<<myAmount.percent(percent)<<endl;

    if(yourAmount==myAmount){
        cout<<"we are the same"<<endl;
    }else{
        cout<<"One of us is richer"<<endl;
    }
    cout<<"$"<<yourAmount.getAmount()<<" + $" <<myAmount.getAmount()<<" equals $"<<yourAmount+myAmount<<endl;
    cout<<"$"<<yourAmount.getAmount()<<" - $" <<myAmount.getAmount()<<" equals $"<<yourAmount-myAmount<<endl;

    if(yourAmount>=myAmount){
        cout<<"Your amount is greater than or equal to my account"<<endl;
    }else{
        cout<<"My amount is greater than or equal to your account"<<endl;
    }

    if(yourAmount>myAmount){
        cout<<"Your amount is greater than my account"<<endl;
    }else{
        cout<<"My amount is greater than your account"<<endl;
    }

    if(yourAmount<=myAmount){
        cout<<"Your amount is lower than or equal to my account"<<endl;
    }else{
        cout<<"Your amount is lower than or equal to my account"<<endl;
    }

    if(yourAmount<=myAmount){
        cout<<"Your amount is lower than my account"<<endl;
    }else{
        cout<<"Your amount is lower than my account"<<endl;
    }

    if(yourAmount+myAmount > yourAmount-myAmount){
        cout<<"The sum of our amount is greater than the difference"<<endl;
    }else{
        cout<<"The sum of our amount is lower than the difference"<<endl;
    }

    if(yourAmount+myAmount >= yourAmount-myAmount){
        cout<<"The sum of our amount is greater than or equal to the difference"<<endl;
    }else{
        cout<<"The sum of our amount is lower than or equal to the difference"<<endl;
    }
}