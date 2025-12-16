#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cctype>
#include <cstring>
#include <string>
#include <fstream>
using namespace std;
int main(){
    //input
    ifstream inputfile;
    string filename;
    cout<<"Enter a file name:";
    getline(cin,filename);
    inputfile.open(filename);
    if(inputfile.fail()){
        cout<<"can't open file: "<<filename<<endl;
        return 0;
    }
    //main part
    vector <int>num;
    int value;
    int count=0;
    while(inputfile>>value){
        num.push_back(value);
        count++;
    }
    int j;
    for(int i=0;i<num.size();i++){
        int key=num[i];
        for(j=i-1;j>=0;j--){
            if(num[j]>key){
                num[j+1]=num[j];
            }else{
                break;
            }
        }
        num[j+1]=key;
    }
    if(count%2==0){
        cout<<"Median number: "<<count/2-1<<" & "<<count/2<<", value: "<<(num[count/2-1]+num[count/2])/2;
    }else{
        cout<<"Median number: "<<count/2<<" , value: "<<num[count/2];
    }
    cout<<endl<<"Quartiles: ";
    //initial
    int product,index,remainder;
    //Q1
    product=count*1;
    index=product/4;
    remainder=product%4;
    if(remainder==0){
        cout<<(num[index-1]+num[index])/2<<" ";
    }else{
        cout<<num[index]<<" ";
    }
    //Q2
    product=count*2;
    index=product/4;
    remainder=product%4;
    if(remainder==0){
        cout<<(num[index-1]+num[index])/2<<" ";
    }else{
        cout<<num[index]<<" ";
    }
    //Q3
    product=count*3;
    index=product/4;
    remainder=product%4;
    if(remainder==0){
        cout<<(num[index-1]+num[index])/2<<" ";
    }else{
        cout<<num[index]<<" ";
    }
    cout<<endl;
    //close
    inputfile.close();
}