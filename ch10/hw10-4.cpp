#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <iomanip>
#include <string>
#include <fstream>
#include <cctype>
using namespace std;
class Subscriber{
    private:
        string name;
        int numChannels;
        string *channelList;
    public:
        Subscriber(){
            name="";
            numChannels=0;
            channelList=nullptr;
        }
        Subscriber(const Subscriber& others){
            name=others.name;
            numChannels=others.numChannels;
            if(numChannels>0){
                channelList = new string[numChannels];
                for(int i=0;i<numChannels;i++){
                    channelList[i]=others.channelList[i];
                }
            }else{
                channelList=nullptr;
            }
        }
        void inputInfo(){
            reset();
            cout<<"Enter user name:";
            getline(cin,name);
            cout<<"Enter the number of subscribed channels:";
            cin>>numChannels;
            cout<<"Enter the list of channel names"<<endl;
            channelList = new string [numChannels];
            for(int i=0;i<numChannels;i++){
                cout<<i+1<<": ";
                cin>>channelList[i];
            }
        }
        void outputInfo(){
            cout<<"User name: "<<name<<endl;
            cout<<"Number of subscribed channels: "<<numChannels<<endl;
            cout<<"List:"<<endl;
            for(int i=0;i<numChannels;i++){
                cout<<channelList[i]<<endl;
            }
        }
        void reset(){
            if(channelList!=nullptr){
                delete[] channelList;
            }
            channelList=nullptr;
            numChannels=0;
        }
        Subscriber& operator=(Subscriber& others){
            if(this==&others){
                return *this;
            }
            if(channelList!=nullptr){
                delete[] channelList;
            }
            name=others.name;
            numChannels=others.numChannels;
            channelList= new string [numChannels];
            for(int i=0;i<numChannels;i++){
                channelList[i]=others.channelList[i];
            }
            return *this;
        }
        ~ Subscriber(){
            if(channelList!=nullptr){
                delete[] channelList;
                channelList=nullptr;
            }
        }
};
int main(){
    Subscriber u1,u2;
    u1.inputInfo();
    u1.outputInfo();
    u2=u1;
    cout<<"----------------"<<endl;
    cout<<"Assignment from user1"<<endl;
    u2.outputInfo();
    cout<<"----------------"<<endl;
    cout<<"Reset user1"<<endl;
    u1.reset();
    u1.outputInfo();
    cout<<"----------------"<<endl;
    cout<<"User2 should still have original classes"<<endl;
    u2.outputInfo();
}