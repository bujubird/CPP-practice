#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    float subject,count=0;
    char score;
    cout<<"Input the number of subject: ";
    cin>>subject;

    for(int i=0;i<subject;i++){
        cout<<"Score received from subject:";
        cin>>score;
        switch(score){
            case 'S':
                count+=10;
                break;
            case 'A':
                count+=9;
                break;
            case 'B':
                count+=8;
                break;
            case 'C':
                count+=7;
                break;
            case 'D':
                count+=6;
                break;
            case 'E':
                count+=5;
                break;
            case 'F':
                count+=0;
                break;
        }
    }
    float avg=count/subject;
    cout<<"The average point: "<<avg<<endl;
}