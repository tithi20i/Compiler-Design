#include<iostream>
using namespace std;

int main(){
    int x, y , number;
    cout <<"Enter the Number :" ;

    cin>> number;

    for(x=1 ; x<=number; x++){
        y = y*x ;
    }
    cout << "Factorial of " << number << " is :" << y << endl;
    return 0 ;
}
