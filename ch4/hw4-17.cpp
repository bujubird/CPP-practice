#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

int getPlayerScore(string player_name){
    vector<string> allplayer;
    vector<int> allscores;
    string inputplayer;
    int inputscore;
    ifstream inputfile;
    bool found=false;
    int foundIndex;
    inputfile.open("scores.txt");
    while(inputfile>>inputplayer>>inputscore){
        allplayer.push_back(inputplayer);
        allscores.push_back(inputscore);
    }
    for(int i=0;i<allplayer.size();i++){
        if(player_name==allplayer[i]){
            found=true;
            foundIndex=i;
        }
    }
    if(found==false){
        cout<<"the player is not found"<<endl;
        return -1;
    }
    inputfile.close();
    return allscores[foundIndex];
}
void compareScore(int player_score){
    if(player_score>9483){
        cout<<player_score<<" the player is above average"<<endl;
    }else if(player_score==9483){{
        cout<<player_score<<" equal"<<endl;
    }}else{
        cout<<player_score<<" below"<<endl;
    }
}
int main(){
    string name;
    int score;
    cout<<"Please enter player's name: ";
    while(cin>>name){
        score=getPlayerScore(name);
        if(score!=-1){
            compareScore(score);
        }
        cout<<"Please enter player's name: ";
    }
}