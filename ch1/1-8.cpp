#include <iostream>
#include <time.h>
using namespace std;

int main(){
    srand(time(NULL));
    double n,guess,r;
    cout<<"n:";
    cin>>n;
    guess=rand()%10;
    for(int i=0;i<100;i++){
        r=n/guess;
        guess=(guess+r)/2;
    }
    cout<<"square root:"<<guess<<endl;
}