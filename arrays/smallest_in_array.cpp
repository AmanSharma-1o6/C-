#include <iostream>
using namespace std;
int main(){
    int marks[6]={1,23,-2,3,6,345};
    int s =6 ;
    int smallest = __INT_MAX__ ;
    for(int i =0; i<s ; i++){
       // if( smallest > marks[i]){
        //    smallest = marks[i];
       // }
         smallest = min(marks[i], smallest);
    }
    cout<<smallest<< endl; 
    return 0;
}