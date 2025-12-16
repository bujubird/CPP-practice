#include <iostream>
#include <time.h>
#include <cmath>
#include <fstream>
#include <string>
#include <cstdlib>
#include <vector>
using namespace std;

class BoxOfProduce{
    private:
        vector<string> contain;
    public:
        BoxOfProduce(){}
        BoxOfProduce(vector<string> new_contain){
            contain=new_contain;
        }
        void setContain(vector<string> set_contain){
            contain=set_contain;
        }
        vector<string> getContain(){
            return contain;
        }
        friend ostream& operator<<(ostream& output, const BoxOfProduce box){
            for(int i=0;i<box.contain.size();i++){
                output<<"("<<i+1<<")"<<box.contain[i]<<" ";
            }
            output<<endl;
            return output;
        }
        BoxOfProduce operator+(const BoxOfProduce &others)const{
            vector<string> mix_contain;
            mix_contain=contain;
            for(int i=0;i<others.contain.size();i++){
                mix_contain.push_back(others.contain[i]);
            }
            return BoxOfProduce(mix_contain);
        }
};

int main(){
    vector <string>b1={"Kiwi","Kale"};
    vector <string>b2={"Tomato","Kiwi","Tomato","Tamatillo"};
    srand(time(NULL));
    BoxOfProduce box,box2,mixbox;
    box.setContain(b1);
    box2.setContain(b2);
    mixbox=box+box2;
    cout<<box;
    cout<<box2;
    cout<<mixbox;
}