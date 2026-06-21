#include <iostream>
#include <conio.h>

using namespace std;

void funcioncajero()
{
    int saldo = 1000;
    int opcion;
    int retiro;
    int deposito;

    cout << "Bienvenido al cajero automatico" << endl;
    cout << "1. Consultar saldo" << endl;
    cout << "2. Retirar dinero" << endl;
    cout << "3. Depositar dinero" << endl;
    cout << "4. Salir" << endl;

    do
    {
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "Su saldo es: " << saldo << endl;
            break;
        case 2:
            cout << "Ingrese la cantidad a retirar: ";
            cin >> retiro;
            if (retiro > saldo)
            {
                cout << "Saldo insuficiente" << endl;
            }
            else
            {
                saldo -= retiro;
                cout << "Retiro exitoso. Su nuevo saldo es: " << saldo << endl;
            }
            break;
        case 3:
            cout << "Ingrese la cantidad a depositar: ";
            cin >> deposito;
            saldo += deposito;
            cout << "Deposito exitoso. Su nuevo saldo es: " << saldo << endl;
            break;
        case 4:
            cout << "Gracias por usar el cajero automatico" << endl;
            break;
        default:
            cout << "Opcion invalida, por favor intente de nuevo" << endl;
        }
    } while (opcion != 4);
};

int main()
{

    funcioncajero();
    _getch();
    return 0;
}