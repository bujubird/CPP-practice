#include <iostream>
using namespace std;

int main(){
    float deposit,rate,withdraw,month;
    cout<<"Deposit:";
    cin>>deposit;
    cout<<"Interest rate:";
    cin>>rate;
    cout<<"fixed withdrawn:";
    cin>>withdraw;
    cout<<"Fixed month:";
    cin>>month;
    float interestmade,newdeposit;
    cout<<"Withdrawn first then add interest as one status report"<<endl;
    for(int i=0;i<month;i++){
        interestmade=(deposit-withdraw)*rate;
        deposit=(deposit-withdraw)+interestmade;
        if(interestmade>withdraw){
            cout<<"Interest: "<<interestmade<<" is greater than withdrawn"<<endl;
            return 0;
        }else{
            cout<<i+1<<" month status"<<endl;
            cout<<"Interest make from previous deposit: "<<interestmade<<endl;
            cout<<"current deposit: "<<deposit<<endl;
            cout<<endl;
        }
    }

}