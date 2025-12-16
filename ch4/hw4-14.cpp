#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int calculateTime(int start_time, int end_time){
    bool logic=true;
    int hour_of_start,hour_of_end,min_of_start,min_of_end;
    int total_min_start,total_min_end;
    hour_of_start=start_time/100;
    min_of_start=start_time%100;
    hour_of_end=end_time/100;
    min_of_end=end_time%100;
    int difference_of_min;
    if(hour_of_start<0 || hour_of_start>23 || hour_of_end<0 || hour_of_end>23 || min_of_start<0 || min_of_start>59|| min_of_end<0 || min_of_end>59){
        return -1;
    }
    if(logic==false){
        cout<<"time format error"<<endl;
    }else{
        total_min_start=hour_of_start*60+min_of_start;
        total_min_end=hour_of_end*60+min_of_end;
        if(total_min_end>=total_min_start){
            difference_of_min=total_min_end-total_min_start;
            return difference_of_min;
        }else{
            return (1440-total_min_start)+total_min_end;
        }
    }
}
void driver_program(){
    string start_time_str,end_time_str;
    int start_time,end_time;
    int difference_time;
    cout<<"Please input start time and end time:";
    while(cin>>start_time_str>>end_time_str){
        if(start_time_str.length()!=4 || end_time_str.length()!=4){
            cout<<"time format error"<<endl;
        }else{
            
            start_time=stoi(start_time_str);
            end_time=stoi(end_time_str);
            difference_time=calculateTime(start_time,end_time);
            if(difference_time==-1){
                cout<<"time format error"<<endl;
            }else{
                cout<<"The time differnce between "<<start_time_str<<" and "<<end_time_str<<" is "<<difference_time<<" minutes."<<endl;
            }
        }
        cout<<"Please input start time and end time:";
    }
}
int main(){
    driver_program();
}