#include <iostream>
using namespace std;

class Pinguino 
{
    string nombre_pringuino; 
public:
    Pinguino(string nombre) : nombre_pringuino(nombre) 
    {
        cout << "creando pinguinito " << nombre_pringuino << endl;
    }

    ~Pinguino() {
        cout << "Liberando a " << nombre_pringuino << endl;
    }
    
    string getNombre() 
    { 
        return nombre_pringuino; 
    }
};

class Alimentar 
{
public:
    void alimentar(Pinguino& pinguinito) 
    {
        cout << "Se esta alimentando a " << pinguinito.getNombre() << endl;
    }
};

class Actividad 
{
public:
    void nadar(Pinguino& pinguinito) 
    {
        cout << pinguinito.getNombre() << " ahora se fue a nadar !..." << endl;
    }
};

int main() {
    Pinguino pinguino("Roberto");
    Alimentar alimentar;
    Actividad nadar;

    alimentar.alimentar(pinguino);
    nadar.nadar(pinguino);

    return 0;
}
