#include "libraries.h"

void Function(int Mat[0][0], int p, int q){

   int num;

   for(int fil=0; fil < p; fil++){

       for(int col=0; col < q; col++){

           cout << "Enter element [" <<fil <<"] ["<< col << "] : ";
           cin >> num;

            Mat[fil][col] = num;
       }
    }
}


void Print(int Mat[0][0], int p, int q){

    for(int fil=0; fil < p; ++fil){

           for (int col=0; col < q; ++col)
              cout << Mat[fil][col] << "\t";
               cout << "\n";
       }
}

void Hadamard(int arrayC[0][0], int p, int q){



    cout << "Enter First Array: " << endl;
    Function(arrayA, p,q);

    cout << endl;
    cout << "Enter Second Array: "<< endl;
    Function(arrayB, p,q);

    for (int i=0; i < p; ++i){

        for (int j=0;  j < q; ++j){

           arrayC[i][j] = arrayA[i][j] * arrayB[i][j];

        }
      }
    cout << endl;
    cout << "Hadamard Product Between Two Bidimensional Array is: " << endl;
    Print(arrayC, p, q);
    cout << endl;
}
