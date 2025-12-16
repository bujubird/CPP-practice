#include <iostream>
using namespace std;
int main(){
    char sentence[100];
    cin.getline(sentence,50);
    int vowel[5]={0};
    for(int i=0;i<50;i++){
        if(sentence[i]=='A' || sentence[i]=='a'){
            vowel[0]++;
        }else if(sentence[i]=='E' || sentence[i]=='e'){
            vowel[1]++;
        }else if(sentence[i]=='I' || sentence[i]=='i'){
            vowel[2]++;
        }else if(sentence[i]=='O' || sentence[i]=='o'){
            vowel[3]++;
        }else if(sentence[i]=='U' || sentence[i]=='u'){
            vowel[4]++;
        }
    }
    cout<<"Vowel   "<<"Count"<<endl;
    cout<<"a       "<<vowel[0]<<endl;
    cout<<"e       "<<vowel[1]<<endl;
    cout<<"i       "<<vowel[2]<<endl;
    cout<<"o       "<<vowel[3]<<endl;
    cout<<"u       "<<vowel[4]<<endl;
    
}