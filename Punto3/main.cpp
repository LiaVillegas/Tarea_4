#include "functions.cpp"

int main(){

    int a;
    int b;

    int result[0][0]={};

    cout << "Hadamard Product" << endl;
    cout << endl;
    cout << "Enter Row Size Array: " << endl;
    cin >>a;
    cout << "Enter Column Size Array: "<< endl;
    cin>>b;

    Hadamard(result,a, b);
    cout << endl;


 return 0;

}
