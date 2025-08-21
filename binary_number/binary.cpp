#include <iostream>
#include <string>
using namespace std;
long decimal_to_binary(long n){
    long ans = 0;
    long pow = 1;
    while(n > 0){
        long rem;
        rem = n % 2;
        n = n/2;
        ans = ans + rem*pow ;
        pow = pow*10;
    }
    return ans;
}

long binary_to_decimal(long n){
    long ans = 0;
    long pow = 1;
    while( n>0 ){
        int rem = n % 10;
        ans = ans + pow*rem ;
        pow = pow*2;
        n = n/10 ;
    }
    return ans;
}

int main(){
    cout<<binary_to_decimal(1111)<<endl;
    return 0;
}