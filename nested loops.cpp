#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter side of side : ";
    cin>>n;
    for( int i = 1; i <= n ; i++){
        for(int j=0 ; j<=n ; j++){
            if( j<n ){
                cout<<"O";
            }
            else{
                cout<<endl;
            }
        }
    }
    return 0;
}