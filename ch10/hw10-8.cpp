#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <iomanip>
#include <string>
#include <fstream>
#include <cctype>
using namespace std;
class Television{
    private:
        string displayType;
        double dimension;
        string *connectivitySupport;
        int connectivityCount;
    public:
        Television(){
            displayType="";
            dimension=0;
            connectivitySupport=nullptr;
            connectivityCount=0;
        }
        Television(string type, double dime, string *support, int count){
            displayType=type;
            dimension=dime;
            connectivityCount=count;
            connectivitySupport = new string[connectivityCount];
            for(int i=0;i<connectivityCount;i++){
                connectivitySupport[i]=support[i];
            }
        }
        Television(const Television& other){
            displayType=other.displayType;
            dimension=other.dimension;
            connectivityCount=other.connectivityCount;
            connectivitySupport=new string[connectivityCount];
            for(int i=0;i<connectivityCount;i++){
                connectivitySupport[i]=other.connectivitySupport[i];
            }
        }
        ~ Television(){
            if(connectivitySupport!=nullptr){
                delete[] connectivitySupport;
                connectivitySupport=nullptr;
            }
        }
        void setType(string type){
            displayType=type;
        }
        void setDime(double dime){
            dimension=dime;
        }
        void setSupport(string *support, int count){
            delete[] connectivitySupport;
            connectivityCount=count;
            connectivitySupport=new string [connectivityCount];
            for(int i=0;i<connectivityCount;i++){
                connectivitySupport[i]=support[i];
            }
        }
        string getType(){
            return displayType;
        }
        double getDime(){
            return dimension;
        }
        void outputInfo(){
            cout<<"Display type: "<<displayType<<endl;
            cout<<"Dimention: "<<dimension<<endl;
            cout<<"Connectivity support types:"<<endl;
            for(int i=0;i<connectivityCount;i++){
                cout<<connectivitySupport[i]<<", ";
            }
            cout<<endl;
        }
};
int main(){
    //parameters
    string type;
    double dimention;
    int c_count;
    string *c_support;
    //default tv
    cout<<"Enter default TV display type: ";
    cin>>type;
    cout<<"Enter default TV dimention:";
    cin>>dimention;
    cout<<"Enter the number of connectivity modes: ";
    cin>> c_count;
    cout<<"Enter default TV connectivity support types:"<<endl;
    c_support=new string[c_count];
    for(int i=0;i<c_count;i++){
        cin>>c_support[i];
    }
    Television default_tv;
    default_tv.setType(type);
    default_tv.setDime(dimention);
    default_tv.setSupport(c_support,c_count);
    cout<<"Default TV details:"<<endl;
    default_tv.outputInfo();
    cout<<"------------------------------"<<endl;

    //second part
    int tv_num,index;
    cout<<"Enter TV numbers:";
    cin>>tv_num;
    cout<<"Enter index of TVs required of customization(input -1 to end): ";
    cin>>index;
    if(index==-1){
        return 0;
    }
    //reset pointer
    delete[] c_support;
    c_support=nullptr;
    //part2
    cout<<"Enter TV display type: ";
    cin>>type;
    cout<<"Enter TV dimention:";
    cin>>dimention;
    cout<<"Enter the number of connectivity modes: ";
    cin>> c_count;
    cout<<"Enter TV connectivity support types:"<<endl;
    c_support=new string[c_count];
    for(int i=0;i<c_count;i++){
        cin>>c_support[i];
    }
    Television tv2;
    tv2.setType(type);
    tv2.setDime(dimention);
    tv2.setSupport(c_support,c_count);
    cout<<"TV details:"<<endl;
    tv2.outputInfo();
    cout<<"------------------------------"<<endl;
    cout<<"Final TV details:"<<endl;
    cout<<"tv0:"<<endl;
    default_tv.outputInfo();
    cout<<"tv1:"<<endl;
    tv2.outputInfo();
    

}