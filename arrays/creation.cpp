#include <iostream>
using namespace std;
int main(){
    int marks[] = {99, 100, 65, 67, 57, 78};
    cout<< marks[0] <<endl;
    cout<< marks[1] <<endl;
    cout<< marks[2] <<endl;
    marks[5] = 100 ;
    cout<< marks[5] <<endl;
    cout<<"Size of array : "<< sizeof(marks)/sizeof(int) << endl;

    int size = 5;
    int news[size];
    for (int i = 0 ; i<size ; i++){
        cin>>news[i];
    }
    for(int i = 0 ; i< size ; i++){
        cout<<news[i]<<endl;
    }
    return 0;
}
