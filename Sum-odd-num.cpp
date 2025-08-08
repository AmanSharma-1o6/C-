#include <iostream>
using namespace std ;
int main (){
    int n, sum = 0 ;
    cout<<"Enter the number :";
    cin>>n;
    for (int i = 1; i<=n; i=i+2){\
     sum = sum + i;
    }
    cout << "Sum of oddd numbers from 1 to n is : "<< sum << endl;
    return 0;
}