#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <iomanip>
#include <cstring>
#include <fstream>
#include <cctype>
using namespace std;
int main(){
    //input
    char sentence[80];
    cout<<"Enter a string less than 80 characters long."<<endl;
    cin.getline(sentence,80);
    //pointers parameters
    int length=strlen(sentence);
    char *head=sentence;
    char *tail=&sentence[length-1];
    //counting parameters
    int count_head=0, count_tail=0;
    bool word_start=false;
    //head increment
    while(*head!='\0'){
        if(isspace(*head)){
            word_start=false;
        }else{
            if(word_start==false){
                count_head++;
                word_start=true;
            }
        }
        head++;
    }

    //tail decrement
    word_start=false;
    char *head_address=sentence;
    while(tail>=head_address){
        if(isspace(*tail)){
            word_start=false;
        }else{
            if(word_start==false){
                count_tail++;
                word_start=true;
            }
        }
        tail--;
    }
    //output
    tail=&sentence[length-1];
    cout<<"Your string reverse is: ";
    while(tail>=head_address){
        cout<<*tail;
        tail--;
    }
    cout<<endl;
    if(count_head==count_tail){
        cout<<"And your number of word is: "<<count_head<<endl;
    }
    
}