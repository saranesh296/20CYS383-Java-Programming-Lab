#include <iostream>
using namespace std;
int main(){
    int n,m,num[4],mum[4],b=0,c=0;
    cin >> n;
    cin >> m;
    for (int i=4;i>=1;i--){
        num[i]=n%10;
        n=n/10;
    }
    for (int j=4;j>=1;j--){
        mum[j]=m%10;
        m=m/10;
    }
    for (int k=1;k<5;k++){
        for (int a=1;a<5;a++){
            if (mum[a]==num[k]){
                if (a!=k){
                    c=c+1;
                }
                if (a==k){
                    b=b+1;
                }
            }
        }
    }
    cout << "The hint is : " << b << "-" << c << endl;
    
}

