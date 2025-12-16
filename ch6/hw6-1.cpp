#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
struct employee{
    int employee_num;
    double core;
    double performance;
    double ideation;
};
int main(){
    employee total_employee[5];
    ifstream inputfile;
    string name;
    inputfile.open("data.txt");
    for(int i=0;i<4;i++){
        inputfile>>name;
    }
    for(int i=0;i<5;i++){
        inputfile>>total_employee[i].employee_num>>total_employee[i].core>>total_employee[i].performance>>total_employee[i].ideation;
    }
    inputfile.close();
    double total[5];
    int point[5];
    for(int i=0;i<5;i++){
        total[i]=((total_employee[i].core/10)*30+(total_employee[i].ideation/10)*20+(total_employee[i].performance/30)*50);
        if(total[i]>=80){
            point[i]=1;
        }else if(total[i]<=79 && total[i]>=60){
            point[i]=2;
        }else if(total[i]<=59 && total[i]>=50){
            point[i]=3;
        }else if(total[i]<50){
            point[i]=4;
        }
    }
    cout<<"Number   "<<"Total   "<<"Point"<<endl;
    for(int i=0;i<5;i++){
        cout<<i+1<<setw(14)<<total[i]<<setw(6)<<point[i]<<endl;
    }
}