#include <iostream>
using namespace std;
int main(){
    int ch;
    cout << "Enter a character : " ;
    cin >> ch ;
    if (ch>='a' && ch <='z'){
        cout<< "LowerCase Letter"<<endl;
    } else {
        cout<< "UpperrCase Letter"<<endl;
    }
return 0;
}