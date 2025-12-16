#include <iostream>
using namespace std;
int main(){
    float distance,time,fare;
    cout<<"distance: ";
    cin>>distance;
    cout<<"duration:";
    cin>>time;
    if(distance<=2){
        fare=2+0.2*time;
    }else if(distance>2 && distance<=8){
        fare=2+0.2*time+(distance-2)*0.5;
    }else{
        fare=2+0.2*time+6*0.5+(distance-8)*1;
    }
    cout<<"fare:"<<fare<<endl;
}