#include <iostream>
using namespace std;

int main(){
    float kilobit,duration,megabytes;
    cout<<"Input bit rate: ";
    cin>>kilobit;
    cout<<"Duration in minutes of video clip in megabytes:";
    cin>>duration;
    megabytes=(kilobit/8000.0)*duration*60;
    cout<<"The file size of the video clip in megabytes: "<<megabytes<<endl;
}
