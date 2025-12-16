#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main(){
    int descend=10;
    int faren,cel=100;
    cout<<"If you descend by 10 at once..."<<endl;
    while(1){
        faren=(9.0/5.0)*cel+32;
        if(faren==cel){
            cout<<"Celsius and Farenheit are the same value at "<<cel;
            break;
        }
        cout<<"Celsius "<<cel<<" equals to Farenheit "<<faren<<endl;
        cel-=descend; 
    }
}