#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int viewer[4][6]={{3,1,5,2,1,5},{4,2,1,4,2,4},{3,1,2,4,4,1},{5,1,5,2,4,2}};
    int yourscore[6]={0};
    int choose_movie;
    int count_distance[4]={0};
    for(int i=0;i<3;i++){
        cout<<"Enter a movie to rate(100-105)"<<endl;
        cin>>choose_movie;
        cout<<"Enter rating(1-5) for this movie"<<endl;
        cin>>yourscore[choose_movie-100];
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<6;j++){
            if(yourscore[j]!=0){
                count_distance[i]+=sqrt(pow((yourscore[j]-viewer[i][j]),2));
            }
        }
    }
    int least_distance=1000;
    int closest_viewer;
    for(int i=0;i<4;i++){
        if(count_distance[i]<least_distance){
            least_distance=count_distance[i];
            closest_viewer=i;
        }
    }
    cout<<"Thev closest viewr is number "<<closest_viewer<<endl;
    cout<<"Predictions for movie you have not yet seen:"<<endl;
    for(int i=0;i<6;i++){
        if(yourscore[i]==0){
            cout<<"Movie "<<i+100<<": Predict rating = "<<viewer[closest_viewer][i]<<endl;
        }
    }

}