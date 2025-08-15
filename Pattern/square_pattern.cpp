#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 1 ; i <= n ; i++ ){
        char aa = 'A'; 
        int asi = int(aa);
        for(int  j=0 ; j < n ;  j++){
            cout<<char(aa+j);
        }
        cout<<endl;
    }
    return 0;
}