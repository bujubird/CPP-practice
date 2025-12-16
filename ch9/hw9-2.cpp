#include <iostream>
#include <cstdlib>
#include <time.h>
#include <cmath>
#include <iomanip>
#include <string>
#include <cctype>
using namespace std;
int main(){
    int i;
    string sentence;
    cout<<"When enter a single \"-l\" in one line this program wikl end"<<endl;
    while(1){
        getline(cin,sentence);
        if(sentence=="-l"){
            break;
        }
        string newsentence="";
        for(int i=0;i<sentence.length();i++){
            if(isalpha(sentence[i])){
                if(isupper(sentence[i])){
                    int position = (sentence[i] - 65 + 3)% 26;
                    char change = (char)(position+65);
                    newsentence+=change;
                    
                }else{
                    int position = (sentence[i] - 97 + 3)% 26;
                    char change = (char)(position+97);
                    newsentence+=change;
                }
            }else if(isdigit(sentence[i])){
                int position = ((sentence[i] - '0')+5)%10;
                newsentence+=(char)(position+'0');
            }else if(ispunct(sentence[i])){
                newsentence+=' ';
            }
        }
        cout<<newsentence<<endl;
    }
}