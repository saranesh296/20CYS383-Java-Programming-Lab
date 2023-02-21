#include <iostream>
using namespace std;
class complex{
    float real,img;
    public:
        void getinfo();
        void putinfo();
        void showinfo(complex a,complex b);
};
void complex :: getinfo(){
    cin >> real;
    cin >> img;
}
void complex :: putinfo(){
    if (img >=0){
        cout << real << "+" << img << "i";
    }
    else{
        cout << real << img << "i";
    }
}
void complex :: showinfo(complex inp1,complex inp2){
    real=inp1.real+inp2.real;
    img=inp1.img+inp2.img;
}
int main(){
    complex X,Y,Z;
    X.getinfo();
    Y.getinfo();
    Z.showinfo(X,Y);
    Z.putinfo();
    return 0;
}