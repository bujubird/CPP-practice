#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Player{
    private:
        string name;
        int score;
    public:
        Player(string set_name, int set_score){
            name=set_name;
            score=set_score;
        }
        string getName(){
            return name;
        }
        int getScore(){
            return score;
        }
};
int main(){
    vector<Player> player;
    string name,search_name,remove_name;
    int score;
    char choice;
    while(1){
        bool flag=false;
        cout<<endl;
        cout<<"a. Add new player and score"<<endl;
        cout<<"b. Print all players and scores"<<endl;
        cout<<"c. Search for one player's score"<<endl;
        cout<<"d. Remove a player"<<endl;
        cout<<"e. Quit"<<endl;
        cout<<"Enter an option: ";
        cin>>choice;
        switch(choice){
            case 'a':
                cout<<"Enter new player name: ";
                cin>>name;
                cout<<"Enter new player score: ";
                cin>>score;
                player.push_back(Player(name,score));
                break;
            case 'b':
                for(int i=0;i<player.size();i++){
                    cout<<player[i].getName()<<" with "<<player[i].getScore()<<endl;
                }
                break;
            case 'c':
                cout<<"What player to search for?: ";
                cin>>search_name;
                flag=false;
                for(int i=0;i<player.size();i++){
                    if(search_name==player[i].getName()){
                        flag=true;
                        cout<<"score: "<<player[i].getScore()<<endl;
                        break;
                    }
                }
                if(flag==false){
                    cout<<"Player not found"<<endl;
                }
                break;
            case 'd':
                cout<<"What player to remove?: ";
                cin>>remove_name;
                flag=false;
                for(int i=0;i<player.size();i++){
                    if(remove_name==player[i].getName()){
                        flag=true;
                        player.erase(player.begin()+i);
                        break;
                    }
                }
                if(flag==false){
                    cout<<"Player not found"<<endl;
                }
                break;
            case 'e':
                return 0;
        }

    }
}