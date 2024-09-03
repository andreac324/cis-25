#include <iostream>
using namespace std;
int main(){
    int num1 = 2;
    int num2 = 1;
    int temp;
    cout<< "before swap"<< endl;
    cout<< " num1 = "<< num1 << " num2 = "<< num2 <<endl;
    temp = num1;
    num1 = num2;
    num2 = temp;
    cout<< " after the swap ";
    cout<< " num1 = " << num1 << " num2 = " << num2 << endl ;


    return 0;
}