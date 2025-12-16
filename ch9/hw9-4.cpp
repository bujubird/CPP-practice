#include <iostream>
#include <cstdlib>
#include <time.h>
#include <cmath>
#include <iomanip>
#include <string>
#include <cctype>
using namespace std;
int main(){
    int i,j;
    string sentence;
    string word;
    string newsentence;
    cout<<"Enter text(type 'quit' to exit)"<<endl;
    while(1){
        newsentence="";
        word="";
        getline(cin,sentence);
        if(sentence=="quit"){
            break;
        }
        int current_position=0;
        for(i=current_position;i<sentence.length();i++){
            word="";
            for(j=current_position;j<sentence.length();j++){
                if(isalpha(sentence[j])){
                    word+=sentence[j];
                }else{
                    break;
                }
            }
            current_position=j;

            if(word.length()==4){
                if(isupper(word[0])){
                    newsentence+="Love";
                }else{
                    newsentence+="love";
                }
            }else{
                newsentence+=word;
            }
            while(current_position < sentence.length() && !isalpha(sentence[current_position])){
                newsentence += sentence[current_position];
                current_position++;
            }
        }
        cout<<newsentence<<endl;
    }
}