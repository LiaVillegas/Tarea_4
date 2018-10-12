#include "functions.cpp"
int main()
{
    int b;
    cout << "Enter Vector Size: " << endl;
    cin >> b;
    int* ve=new int[b];
    int*  veresult=new int[b];
    int* vevec=new int[b];
    function(b,ve);
    repetidos(b,ve,veresult);
    print(ve, b);
    contar(z, b,veresult,ve,vevec);
    print(veresult, z);
    asteriscos(z,veresult,vevec);
    cout << endl;
    cin >> b;
}
