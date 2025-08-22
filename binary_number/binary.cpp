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
    int a = 4, b = 8;
    cout<<decimal_to_binary(4)<<endl;
    cout<<binary_to_decimal(1010)<<endl;
    cout<<(a&b)<<endl;
    cout<<(a|b)<<endl;
    cout<<(a^b)<<endl;
    cout<<(a<<1)<<endl;
    cout<<(a>>1)<<endl;
    cout<<sizeof(int)<<endl;
    cout<<sizeof(long int)<<endl;
    cout<<sizeof(long long int)<<endl;
    cout<<sizeof(short int)<<endl; 
    return 0;
}