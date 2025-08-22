#include <iostream>
#include <limits.h>
using namespace std;
int main(){
    int marks[6]={1,23,-2,3,6,345};
    int s =6 ;
    int largest = INT_MIN  ;
    for(int i =0 ; i<s ; i++){
       // if(largest < marks[i]){
        //    largest = marks[i];
        //}
        largest = max(marks[i], largest);
    }
    cout<<largest<<endl;
    return 0;
}