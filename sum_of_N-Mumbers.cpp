#include <iostream>
using namespace std ; 
int main (){
    int N;
    int sum = 0;
    cout<<"Enter the number :";
    cin>>N;
    for (int i = 1; i<=N ; i++ ){
        sum = sum + i ;
}
cout<<"Sum of N numbers is : ";
cout<<sum;
return 0;
}