#include <iostream>

using namespace std;


const int p =4;
const int q=4;

int Function(float Mat[p][q]){

   int num;

   for(int fil=0; fil < p; fil++){

       for(int col=0; col < q; col++){

           cout << "Enter element [" <<fil <<"] ["<< col << "] : ";
           cin >> num;

           Mat[fil][col] = num;
       }
    }
}

void Print(float Mat[p][q]){

    for(int fil=0; fil < p; ++fil){

           for (int col=0; col < q; ++col)
              cout << Mat[fil][col] << "\t";
               cout << "\n";
       }
}

void Hadamard(float arrayA[p][q],float arrayB[p][q],float arrayC[p][q]){

    cout << "Enter First Array: " << endl;
    Function(arrayA);

    cout << endl;
    cout << "Enter Second Array: "<< endl;
    Function(arrayB);

    for (int i=0; i<4; ++i){

        for (int j=0;  j <4; ++j){

           arrayC[i][j] = arrayA[i][j] * arrayB[i][j];

        }
      }

}

int main(){
    const int a=4;
    const int b=4;

    float arrayD[a][b];
    float arrayE[a][b];
    float arrayR[a][b];

    cout << "Hadamard Product" << endl;
    cout << endl;
    Hadamard(arrayD,arrayE, arrayR);
    cout << endl;
    cout << "Hadamard Product Between Two Bidimensional Array is: " << endl;
    Print(arrayR);
    cout << endl;

 return 0;

}
