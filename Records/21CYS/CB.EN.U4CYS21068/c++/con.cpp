#include<iostream>
using namespace std;

class rectangle{
    public:
        int l,h;
        void area(){
            cout << "The area of the rectangle is " << l*h << endl ;
        }
rectangle(int a, int b); 

};
rectangle::rectangle (int a,int b){
    l=a;
    h=b;
}
int main()
{
rectangle r(5,3);
r.area();
}
