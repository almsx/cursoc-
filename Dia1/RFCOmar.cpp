#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    std::string nombreCompleto = "";
    std::string apellidoPaterno = "";
    std::string apellidoMaterno = "";
    std::string anioNacimiento = 0;
    std::string mesNacimiento = 0;
    std::string diaNacimiento = 0;
    std::string homoclave = "XXX";

    char input[100];

    std::string rfc = "";

    cout << "Ingresar nombre completo: " << endl;
    //cin >> nombreCompleto;
    cin.getline(input,sizeof(input));
    nombreCompleto = input;

    cout << "Ingresar nombre paterno: " << endl;
    //cin >> apellidoPaterno;
    cin.getline(input,sizeof(input));
    apellidoPaterno = input;

    cout << "Ingresar nombre materno: " << endl;
    //cin >> apellidoMaterno;
    cin.getline(input,sizeof(input));
    apellidoMaterno = input;

    cout << "Ingresar año de nacimieno:" << endl;
    cin >> anioNacimiento;

    cout << "Ingresar mes de nacimiento:" << endl;
    cin >> mesNacimiento;

    cout << "Ingresar dia de nacimieno:" << endl;
    cin >> diaNacimiento;


    rfc = apellidoPaterno.substr(0,2);
    rfc = rfc + apellidoMaterno.substr(0,1);
    rfc = rfc + nombreCompleto.substr(0,1);
    rfc = rfc + anioNacimiento.substr(2,2);
    rfc = rfc + mesNacimiento;
    rfc = rfc + diaNacimiento;
    rfc = rfc + homoclave;

    cout << "\n------------RFC------------\n " << rfc;





    return 0;
}
