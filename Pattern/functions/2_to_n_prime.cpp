#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int n){
    if(n <= 1){
        return false;
    }
    for(int i = 2; i <= sqrt(n);  i++){
        if( n%i == 0){
            return false;
        } 
    }
    return true;
}


void print_prime(int n){
    for(int N = 2 ; N <= n ; N++){
        if( is_prime(N)){
            cout << N << " ";
        }
    }
}



int main(){
    int n;
    cin>>n;
    print_prime(n);
    return 0;
}
