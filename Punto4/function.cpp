#include "libraries.h"

char letras[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

void Function(string pp, int n)
{

    for(char a : pp)
    {
        for(int i=1; i<=26; ++i)
        {
            if (a==letras[i]){
              cout<< letras[i+n];

            }
        }
        if (a == ' ')
           {
       cout<<" ";
    }
  }
}
