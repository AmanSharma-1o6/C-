#include <iostream>
#include <cmath>
using namespace std;

int factorial(int n){
    int fac = 1;
    for(int i=1; i<=n ; i++){
        fac *= i;
    }
    return fac;
}

int sum_of_digits(int n){
    int sum=0;
    while(n>0){
        sum += n%10;
        n/=10;
    }
    return sum;
}

int nCr(int n, int r){
    int cof;
    cof = factorial(n)/(factorial(r)*factorial(n-r));
    return cof;
}

char is_prime(int n){
    if(n == 1){
        return 'N';
    }
    for(int i = 2; i < sqrt(n);  i++){
        if( n%i == 0){
            return 'N';
        } 
    }
    return 'Y';
}

int main(){
   
}