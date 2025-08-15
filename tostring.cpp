#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if( n<0 ){
        n=-n;
    }
    string aa;
    aa = to_string(n);
    cout<<aa[0]<<endl;
    cout<<aa.length()<<endl;
}