#include <iostream>
#include <vector>
#include <cstdlib>
#include <cmath>
#include <iomanip>
using namespace std;
class Vector2D{
    private:
        int x,y;
    public:
        Vector2D(){
            x=0;
            y=0;
        }
        Vector2D(int set_x, int set_y){
            x=set_x;
            y=set_y;
        }
        int getX(){
            return x;
        }
        int getY(){
            return y;
        }
        void setX(int set_x){
            x=set_x;
        }
        void setY(int set_y){
            y=set_y;
        }
        int operator *(const Vector2D &others)const{
            return x*others.x + y*others.y;
        }
};
int main(){
    Vector2D A(9,10),B(17,0),C(10,12),D(0,8),E(10,13),F(7,20);
    cout<< "("<<A.getX() << ", " << A.getY() << ")";
    cout<<" * ";
    cout<< "("<<B.getX() << ", " << B.getY() << ")";
    cout<<" = "<<A*B<<endl;

    cout << "(" << C.getX() << ", " << C.getY() << ")";
    cout << " * ";
    cout << "(" << D.getX() << ", " << D.getY() << ")";
    cout << " = " << C * D << endl;

    cout << "(" << E.getX() << ", " << E.getY() << ")";
    cout << " * ";
    cout << "(" << F.getX() << ", " << F.getY() << ")";
    cout << " = " << E * F << endl;
}