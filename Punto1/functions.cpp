#include "libraries.h"

int ve[]={};
int veresult[]={};

void print(int ve[],int n){

    for(int y=0;y<n;y++)
        cout << ve[y];
        cout << endl;
}

void function(int n){


    int num;

    for(int i=0; i<n;i++){
            cout << "Enter Number " << i << " : " << endl;
            cin >> num;
            ve[i]=num;
    }

    print(ve,n);
}

void repetidos(int n){
    int k=0;
    bool bandera=true;

    for(int i=0; i<n; i++){
        if(i==0){
            veresult[k]=ve[i];
            k++;
        } else {

            for(int j=0; j<k; j++){
                if(ve[i]==veresult[j]){
                    bandera=false;
                    j=k;
                }
            }

            if(bandera==true){
                veresult[k]=ve[i];
                k++;
            }
           bandera=true;
        }
    }

   print(veresult,k);
 }

