#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int>suitors;
    int n;
    cout<<"Enter the number of suitors: ";
    cin>>n;
    for(int i=1;i<n+1;i++){
        suitors.push_back(i);
    }
    int current_position=0;
    while(suitors.size()>1){
        for(int i=0;i<suitors.size();i++){
            cout<<suitors[i]<<" ";
        }
        cout<<endl;
        int elimination_position = (current_position+2) % suitors.size();
        suitors.erase(suitors.begin()+elimination_position);
        current_position = elimination_position % suitors.size();
    }
    if (suitors.size() == 1) {
        cout <<suitors[0];
    }
}