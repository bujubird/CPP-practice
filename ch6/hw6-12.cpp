#include <iostream>
#include <time.h>
#include <cmath>
#include <fstream>
#include <string>
#include <cstdlib>
#include <vector>
using namespace std;

class BoxOfProduce{
    private:
        vector<string> contain;
    public:
        void setContain(vector<string> set_contain){
            contain=set_contain;
        }
        vector<string> getContain(){
            return contain;
        }
        void output(){
            cout<<"The box contains:(1)"<<contain[0]<<" (2)"<<contain[1]<<" (3)"<<contain[2]<<endl;
        }
};

int main(){
    srand(time(NULL));
    BoxOfProduce box;
    ifstream inputfile;
    string fruit;
    vector<string> pre_contain;
    vector<string> process_contain;
    int random;
    //input file
    inputfile.open("produce.txt");
    while(inputfile>>fruit){
        pre_contain.push_back(fruit);
    }
    inputfile.close();
    //prepare variable
    char keepgoing='c';
    int index;
    string item;
    //set random item
    int N=pre_contain.size();
    for(int i=0;i<3;i++){
        random=rand()%N;
        process_contain.push_back(pre_contain[random]);
    }
    //initialize item
    box.setContain(process_contain);
    //run until quit
    while(1){
        box.output();
        cout<<"Enter 'c' to change a bundle"<<endl;
        cout<<"Enter 'q' to quit "<<endl;
        cin>>keepgoing;
        if(keepgoing=='q'){
            return 0;
        }else if(keepgoing=='c'){
            cout<<"Enter index to substitute: ";
            cin>>index;
            cout<<"Enter item to substitute: ";
            cin>>item;
            process_contain[index-1]=item;
            box.setContain(process_contain);
        }
    }
}