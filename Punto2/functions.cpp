#include "libraries.h"

int z = 0;
int vc = 0;

void print(int* ve, int n) {

   for (int y = 0; y<n; y++){
       cout << ve[y];

   }
   cout << endl;
}

void function(int n,int* ve) {


   int num;

   for (int i = 0; i<n; i++) {
       cout << "Enter Number " << i << " : " << endl;
       cin >> num;
       ve[i] = num;
   }

   //print(ve, n);
}

void repetidos(int n, int* vo,int* vi) {

   bool bandera = true;
   int k = 0;
   for (int i = 0; i<n; i++) {
       if (i == 0) {
           vi[k] = vo[i];
           k++;
       }
       else {

           for (int j = 0; j<k; j++) {

               if (vo[i] == vi[j]) {
                   bandera = false;
                   j = k;
               }
           }

           if (bandera == true) {
               vi[k] = vo[i];
               k++;
           }
           bandera = true;
       }
   }

   //print(vi, k);
   z = k;
}


void contar(int n, int m, int* vi, int* vo,int* vvc) {
   for (int y = 0; y<n; y++) {
       for (int w = 0; w<m; w++) {
           if (vi[y] == vo[w]) {
               vc++;
           }
       }
       vvc[y] = vc;
       vc = 0;
   }
}

void asteriscos(int n,int* vi,int* vc) {

   for (int i = 0; i<n; i++) {

       cout << vi[i];

       for(int j=0; j<vc[i]; j++){

       cout << "*";
       }

       cout << endl;
   }

}
