#include <iostream>
#include <cstdlib>
using namespace std;

class CharPair
{
public:
    CharPair(){
        size=10;
        for(int i=0;i<10;i++){
            data[i]= '#';
        }
    }
    CharPair(int sz){
        size=sz;
        for(int i=0;i<sz;i++){
            data[i]='#';
        }
    }
    CharPair(int sz, char dt[]){
        size=sz;
        for(int i=0;i<size;i++){
            data[i]=dt[i];
        }
    }
    int getSize(){
        return size;
    }

    char& operator[](int index){
        return data[index];
    }
    void output(){
        for(int i=0;i<size;i++){
            cout<<data[i]<<" ";
        }
    }

private:
    char data[100];
    int size;
};

int main( )
{
    int size;
    char sign;
    CharPair default_c;
    cout<<"Default input(10):";
    default_c.output();
    cout<<endl;
    cout<<"Size: "<<default_c.getSize()<<endl;

    cout<<"---clear array---"<<endl;
    cout<<"First sz member of the char array to #:";
    cin>>size;
    CharPair first(size);
    first.output();
    cout<<endl;
    cout<<"Size: "<<first.getSize()<<endl;

    cout<<"---clear array---"<<endl;
    cout<<"First sz member of the char array to ?:";
    cin>>size;
    cin>>sign;
    char data[size];
    for(int i=0;i<size;i++){
        data[i]=sign;
    }
    CharPair second(size,data);
    second.output();
    cout<<endl;
    cout<<"Size: "<<second.getSize()<<endl;
}