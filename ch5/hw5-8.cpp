#include <iostream>
#include <time.h>
using namespace std;
int main(){
    srand(time(NULL));
    int birthday[50];
    const double testtime=50000.0;
    bool found;
    for(int i=2;i<=50;i++){
        int test=testtime,count=0;
        while(test>0){
            found=false;
            for(int j=0;j<i;j++){
                birthday[j]=rand()%365+1;
            }
            for(int j=0;j<i;j++){
                for(int k=j+1;k<i;k++){
                    if(birthday[j]==birthday[k]){
                        count++;
                        found=true;
                        break;
                    }
                }
                if(found==true){
                    break;
                }
            }
            test--;
        }
        double prob=count/testtime;
        cout<<"for "<<i<<" people,the probability of two birth is about "<<prob<<endl;
    }
}