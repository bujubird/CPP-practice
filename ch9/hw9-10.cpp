#include <iostream>
#include <cstdlib>
#include <time.h>
#include <cmath>
#include <iomanip>
#include <string>
#include <cctype>
#include <vector>
using namespace std;
class Trivia{
    private:
        string question;
        string answer;
        int reward;
    public:
        Trivia(){
            question="";
            answer="";
            reward=0;
        }
        Trivia(string q, string a, int r){
            question=q;
            answer=a;
            reward=r;
        }
        int getReward(){
            return reward;
        }
        string getQuestion(){
            return question;
        }
        string getAnswer(){
            return answer;
        }
};
int main(){
    vector<Trivia> game;
    game.push_back(Trivia("Year that Amelia Earhart disappear?", "1938", 5));
    game.push_back(Trivia("Which season that children will grow faster?", "spring", 5));
    game.push_back(Trivia("Capital of France?", "Paris", 5));
    game.push_back(Trivia("Which element has the chemical symbol of 'O'?", "Oxygen", 10));
    game.push_back(Trivia("How many continent are there on earth?", "7", 5));

    cout<<"Trivia game!"<<endl;
    int total_reward=0;
    string your_answer;
    for(int i=0;i<5;i++){
        cout<<"You have $"<<total_reward<<endl;
        cout<<game[i].getQuestion()<<endl;
        getline(cin,your_answer);
        if(your_answer==game[i].getAnswer()){
            cout<<"That's right! You win $"<<game[i].getReward()<<endl;
            total_reward+=game[i].getReward();
        }else{
            cout<<"Sorry, the correct answer is: "<<game[i].getAnswer()<<endl;
        }
    }
    cout<<"Game Over. Your total winnings are: $"<<total_reward<<endl;
}