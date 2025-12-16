#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

typedef int* IntArrayPtr;
class TwoD{
    private:
        int MaxRows, MaxCols;
        double *array_ptr;
    public:
        TwoD(){
            MaxRows=5;
            MaxCols=5;
            array_ptr = new double[MaxRows*MaxCols];
            for(int i=0;i<MaxRows * MaxCols;i++){
                array_ptr[i]=0;
            }
        }
        TwoD(int input_maxrow, int input_maxcol){
            MaxRows=input_maxrow;
            MaxCols=input_maxcol;
            array_ptr = new double[MaxRows*MaxCols];
            for(int i=0;i<MaxRows * MaxCols;i++){
                array_ptr[i]=0;
            }
        }
        TwoD(const TwoD& other){
            MaxRows=other.MaxRows;
            MaxCols=other.MaxCols;
            array_ptr = new double[MaxRows * MaxCols];
            for (int i = 0; i < MaxRows * MaxCols; i++) {
                array_ptr[i] = other.array_ptr[i];
            }
        }
        void setRow(int set_row){
            MaxRows=set_row;
        }
        void setCol(int set_col){
            MaxCols=set_col;
        }
        void setNum(int row,int col, double set_num){
                array_ptr[row*MaxCols+col]=set_num;
        }
        int getRow(){
            return MaxRows;
        }
        int getCol(){
            return MaxCols;
        }
        double getNum(int row, int col){
            return array_ptr[row*MaxCols+col];
        }
        TwoD& operator=(const TwoD& others){
            if(this==&others){
                return *this;
            }
            delete[] array_ptr;
            MaxRows=others.MaxRows;
            MaxCols=others.MaxCols;
            array_ptr = new double[MaxRows*MaxCols];
            for(int i=0;i<MaxRows*MaxCols;i++){
                array_ptr[i]=others.array_ptr[i];
            }
            return *this;
        }
        friend TwoD operator+(TwoD& matrix1, TwoD& matrix2){
            TwoD result(matrix1.MaxRows,matrix1.MaxCols);
            for(int i=0;i<matrix1.MaxRows;i++){
                for(int j=0;j<matrix1.MaxCols;j++){
                    double sum=matrix1.getNum(i,j)+matrix2.getNum(i,j);
                    result.setNum(i,j,sum);
                }
            }
            return result;
        }
        ~TwoD() {
            delete[] array_ptr;
        }
};
int main(){
    int row,col;
    double value;
    cout<<"Enter the row and column dimentions of matrix1"<<endl;
    cin>>row>>col;
    TwoD m1(row,col),m2(row,col);
    //matrix1
    cout<<"Enter the "<<row<<" rows of "<<col<<" doubles each:"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>value;
            m1.setNum(i,j,value);
        }
    }
    cout<<"Echoing the 2D array, matrix1: "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<m1.getNum(i,j)<<" ";
        }
        cout<<endl;
    }
    //matrix2
    cout<<"Enter the "<<row<<" rows of "<<col<<" doubles each:"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>value;
            m2.setNum(i,j,value);
        }
    }
    cout<<"Echoing the 2D array, matrix2: "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<m2.getNum(i,j)<<" ";
        }
        cout<<endl;
    }
    //assigning
    TwoD m3;
    m3=m2;
    cout<<"assigning matrix2 to matrix3 and display:"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<m3.getNum(i,j)<<" ";
        }
        cout<<endl;
    }
    //result:
    TwoD m4;
    cout<<"Display 2d array of sum of matrix1 and matrix2:"<<endl;
    m4 = m1+m2;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<m4.getNum(i,j)<<" ";
        }
        cout<<endl;
    }
}