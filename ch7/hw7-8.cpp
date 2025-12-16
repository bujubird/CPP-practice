#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    int input;
    vector<int> grades;
    //input
    while(1){
        cin >> input;
        if(input==-1){
            break;
        }
        grades.push_back(input);
    }
    //count
    int n=grades.size();
    int count[11];
    for(int i=0;i<11;i++){
        count[i]=0;
    }
    for(int i=0;i<11;i++){
        for(int j=0;j<n;j++){
            if(grades[j]==i){
                count[i]++;
            }
        }
    }
    for(int i=0;i<11;i++){
        cout<<count[i]<<" grade<s> of "<<i<<endl;
    }
}