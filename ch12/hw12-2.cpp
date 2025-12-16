#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ifstream inputfile;
    string filename;
    cout<<"Enter a file name:";
    getline(cin,filename);
    inputfile.open(filename);
    if(inputfile.fail()){
        cout<<"can't open file: "<<filename<<endl;
        return 0;
    }
    int number,count=0;
    int total=0;
    while(inputfile>>number){
        total+=number;
        count++;
    }
    cout<<"Average of "<<count<<" numbers is "<<total/count;
    inputfile.close();
}