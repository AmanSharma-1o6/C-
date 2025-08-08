#include <iostream>
using namespace std;
int main(){
    int N;
    cout<<"Enter the number : ";
    cin>>N;
    for(int i = 2; i<N ; i++){
        if (N%i == 0 ){
            cout<<"Not Prime";
            break;
        }
        else{
            cout<<"Prime";
            break;
        }
    }
return 0;
}

