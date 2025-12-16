#include <iostream>
#include <ctime>
using namespace std;

int humanTurn(int humanTotalScore);
int computerTurn(int computerTotalScore);

int main(){
    srand(time(NULL));
    int c_score=0, h_score=0;
    while(1){
        cout<<endl<<"It's your turn! Enter 'r' to roll"<<endl;
        h_score=humanTurn(h_score);
        if(h_score >=100){
            break;
        }
        cout<<endl<<"It's computer's turn!"<<endl;
        c_score=computerTurn(c_score);
        if(c_score>=100){
            break;
        }
    }
    if(h_score>c_score){
            cout<<"You win the game with "<<h_score<<" against "<<c_score<<endl;
    }else{
            cout<<"You lose the game with "<<h_score<<" against "<<c_score<<endl;
    }
}

int humanTurn(int humanTotalScore){
    char choice='r';
    int roundscore,tempscore=0;
    while(1){
        cin>>choice;
        if(choice=='r'){
            roundscore=rand()%6+1;
            cout<<"You rolled a "<<roundscore<<endl;
            if(roundscore!=1){
                tempscore=tempscore+roundscore;
            }else{
                cout<<"No points added this round"<<endl;
                return humanTotalScore;
            }
            cout<<"If you hold, your total score would be: "<<tempscore+humanTotalScore<<endl;

        }else if(choice=='h'){
            return humanTotalScore+tempscore;
        }
        cout<<"Press 'h' to hold or 'r' to roll again"<<endl;
    }
}

int computerTurn(int computerTotalScore){
    int flag=1;
    int roundscore,tempscore=0;
    while(1){
        roundscore=rand()%6+1;
        cout<<"Computer rolled a "<<roundscore<<endl;
        if(roundscore==1){
            flag=0;
            break;
        }else{
            tempscore=tempscore+roundscore;
            cout<<"Computer gets points in this round: "<<tempscore<<", continue rolling"<<endl;
        }
        if(tempscore>20){
            cout<<"Computer gets "<<tempscore<<" points this round"<<endl;
            break;
        }
    }
    if(flag==1){
        return tempscore+computerTotalScore;
    }else{
        return computerTotalScore;
    }

}