#include "function.cpp"

int main(){
   string p;
   int num;

   cout<<"Phrase to enter : "<<endl;
   getline(cin,p);
   cout << "Enter number of trips : "<< endl;
   cin >> num;

   cout << "\nDecoded Message : " << endl;
   cout << p << endl;
   cout << "\nEncoded Message : "<< endl;
   Function(p, num);
   cout << "\n";

}

