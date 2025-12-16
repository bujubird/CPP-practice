#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float mill;
    float limit=10000;
    cin>>mill;
    int bottle;
    bottle=ceil(limit/mill);
    cout<<"over "<<bottle<<" is overdose of caffeine"<<endl;
    
}