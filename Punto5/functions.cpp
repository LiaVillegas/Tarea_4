#include "libraries.h"

void Temporizador(int h, int m, int s){

    int i, j, k;

    for (i=h; i>=0; i--){

        if(j==-1)m=59;


        for (j=m; j>=0; j--){

          if(k==-1)s=59;

                for (k=s; k>=0; k--){

                        Sleep(1000);
                        system("cls");
                        cout << setfill('0') << setw(2) << i << " : "<< setfill('0') << setw(2) << j << " : "<< setfill('0') << setw(2) << k << endl;

          }
        }
       }
     }



void Final(){

    cout << "Finalized Count" << endl;
}
