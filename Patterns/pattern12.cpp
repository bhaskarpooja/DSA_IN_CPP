#include<iostream>
using namespace std;

//hollow star pattern
// * * * * * * * * * 
// * * * *   * * * * 
// * * *       * * * 
// * *           * * 
// *               * 
// *               * 
// * *           * * 
// * * *       * * * 
// * * * *   * * * * 
// * * * * * * * * *

int main(){         
    int n;
    cout<<"enter n :"; 
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
          cout<<"* "; 
        }
        for(int j=1;j<=2*i-1;j++){
            if (j==1 || j==2*i-1){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        for(int j=1;j<=n-i;j++){
          cout<<"* ";
        }
        cout<<endl;
    }

    for(int i=n;i>=1;i--){
        for(int j=1;j<=n-i;j++){
          cout<<"* "; 
        }
        for(int j=1;j<=2*i-1;j++){
            if (j==1 || j==2*i-1){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        for(int j=1;j<=n-i;j++){
          cout<<"* ";
        
    }
   cout<<endl;
}
 return 0;
}   