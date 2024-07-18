#ifdef __MSDOS__
    #include <iostream.h>
    #include <stdlib.h>
#else
    #include <iostream>
    #include <cstdlib>
    using namespace std;
#endif

int main ()
{
    float calorias_consumidas, minutos_durmiendo, minutos_sentado;
    cout << "Ingrese el valor de minutos durmiendo: ";
    cin >> minutos_durmiendo;
    cout << "Ingrese el valor de minutos sentado: ";
    cin >> minutos_sentado;
    calorias_consumidas=minutos_durmiendo*1.08+minutos_sentado*1.66;
    cout << "Valor de calorias consumidas: " << calorias_consumidas << endl;
    cout << endl;
    system ("pause");
    return EXIT_SUCCESS;
}
