#include<iostream>
using namespace std;

//if n=4 , output:-
// 1  2  3  4  
// 1  2  3  
// 1  2  
// 1 

int main(){
    int n;
    cout<<"enter n :";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            cout<<j<<"  ";
        }
        cout<<endl;
    }
    return 0;
}
