#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter A number : ";
    cin >> n;
    int factorial = 1;
    for(int i = 1; i<=n ; i++){
        factorial = factorial * i ;
    }
    cout << "Factorial of n numbers is : "<< factorial << endl;
return 0 ;
}