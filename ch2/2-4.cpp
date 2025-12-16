#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    bool prime;
    for(int i=3;i<=100;i++){
        prime=true;
        for(int j=2;j<i-1;j++){
            if(i%j==0){
                prime=false;
                break;
            }
        }
        if(prime==true){
            cout<<i<<" is a prime"<<endl;
        }
    }
}