#include <iostream>
using namespace std;

int main(){
    int gender, d_inch ,d_feet ,m_inch ,m_feet;
    int c_height, c_inch, c_feet;
    char repeat='y';
    while(1){
        if(repeat=='y' || repeat=='Y'){
            cout<<"Enter the gender of your future child. Use 1 for female and 0 for male."<<endl;
            cin>>gender;
            cout<<"Enter the height in feet and inch of mom"<<endl;
            cin>>m_feet>>m_inch;
            cout<<"Enter the height in feet and inch of dad"<<endl;
            cin>>d_feet>>d_inch;
            if(gender==0){
                c_height=(((12*m_feet+m_inch)*(13.0/12.0))+(d_feet*12+d_inch))/2;
                c_inch=c_height%12;
                c_feet=c_height/12;
                cout<<"Your future child is estimated to grow to "<<c_feet<<" feet and "<<c_inch<<" inches"<<endl;
            }else if(gender==1){
                c_height=(((12*d_feet+d_inch)*(12.0/13.0))+(m_feet*12+m_inch))/2;
                c_inch=c_height%12;
                c_feet=c_height/12;
                cout<<"Your future child is estimated to grow to "<<c_feet<<" feet and "<<c_inch<<" inches"<<endl;
            }else{
                break;
            }
            cout<<"Enter 'y' or 'Y' to continue while others exit program"<<endl;
            cin>>repeat;
        }else{
            break;
        }
    }



}