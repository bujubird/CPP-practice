#include <iostream>
#include <ctime>
using namespace std;

int main(){
    srand(time(NULL));
    int winner[4];
    int flag=1;
    while(1){
        for(int i=0;i<4;i++){
            winner[i]=rand()%25+1;
        }
        for(int i=0;i<4;i++){
            for(int j=i+1;j<4;j++){
                if(winner[i]==winner[j]){
                    flag=0;
                    break;
                }
            }
        }
        if(flag==1){
            cout<<"The hour winners are: "<<endl;
            for(int i=0;i<4;i++){
                cout<<winner[i]<<" ";
            }
            break;
        }else{
            continue;
        }
    }
    
}