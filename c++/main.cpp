#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

// Clase Estudiante con atributos privados
class Estudiante {
private:
    string cedula;
    string nombre;
    string apellido;
    double nota1;
    double nota2;
    double nota3;
    double promedio;
    string estado;

public:
    // Constructor de la clase
    Estudiante(string _cedula, string _nombre, string _apellido, double _n1, double _n2, double _n3) {
        cedula = _cedula;
        nombre = _nombre;
        apellido = _apellido;
        nota1 = _n1;
        nota2 = _n2;
        nota3 = _n3;
        calcularPromedio();
        determinarEstado();
    }

    // Métodos Get y Set para el acceso seguro a atributos (Encapsulamiento)
    string getCedula() { return cedula; }
    void setCedula(string _cedula) { cedula = _cedula; }

    string getNombre() { return nombre; }
    void setNombre(string _nombre) { nombre = _nombre; }

    string getApellido() { return apellido; }
    void setApellido(string _apellido) { apellido = _apellido; }

    double getNota1() { return nota1; }
    void setNota1(double _n1) { nota1 = _n1; calcularPromedio(); determinarEstado(); }

    double getNota2() { return nota2; }
    void setNota2(double _n2) { nota2 = _n2; calcularPromedio(); determinarEstado(); }

    double getNota3() { return nota3; }
    void setNota3(double _n3) { nota3 = _n3; calcularPromedio(); determinarEstado(); }

    double getPromedio() { return promedio; }
    string getEstado() { return estado; }

    // Método interno para calcular el promedio de las 3 notas
    void calcularPromedio() {
        promedio = (nota1 + nota2 + nota3) / 3.0;
    }

    // Método para determinar si aprueba o reprueba (Condición >= 7.00)
    void determinarEstado() {
        if (promedio >= 7.00) {
            estado = "Aprobado";
        } else {
            estado = "Reprobado";
        }
    }

    // Método para mostrar la información individual del estudiante de manera tabular
    void mostrarInformacion() {
        cout << left << setw(12) << cedula 
             << setw(15) << nombre 
             << setw(15) << apellido 
             << fixed << setprecision(2)
             << setw(8) << nota1 
             << setw(8) << nota2 
             << setw(8) << nota3 
             << setw(10) << promedio 
             << setw(12) << estado << endl;
    }
};

// Función modular para validar que las notas estén estrictamente entre 0 y 10
double ingresarNotaValidada(string nombreNota) {
    double nota;
    while (true) {
        cout << "Ingrese " << nombreNota << " (0 - 10): ";
        cin >> nota;
        if (cin.fail() || nota < 0 || nota > 10) {
            cin.clear(); 
            cin.ignore(10000, '\n');
            cout << "Nota inválida. Intente nuevamente.\n";
        } else {
            return nota;
        }
    }
}

int main() {
    vector<Estudiante> listaEstudiantes;
    int aprobados = 0;
    int reprobados = 0;
    
    cout << "=== REGISTRO DE ESTUDIANTES (C++) ===\n\n";

    // Registrar el mínimo solicitado de 5 estudiantes
    for (int i = 0; i < 5; i++) {
        string cedula, nombre, apellido;
        double n1, n2, n3;

        cout << "Estudiante #" << (i + 1) << endl;
        cout << "Cédula: "; cin >> cedula;
        cout << "Nombre: "; cin >> nombre;
        cout << "Apellido: "; cin >> apellido;
        
        n1 = ingresarNotaValidada("Nota 1");
        n2 = ingresarNotaValidada("Nota 2");
        n3 = ingresarNotaValidada("Nota 3");
        cout << "-----------------------------------\n";

        Estudiante est(cedula, nombre, apellido, n1, n2, n3);
        listaEstudiantes.push_back(est);

        if (est.getEstado() == "Aprobado") {
            aprobados++;
        } else {
            reprobados++;
        }
    }

    // Imprimir el listado general en consola
    cout << "\n================================ LISTA DE ESTUDIANTES ================================\n";
    cout << left << setw(12) << "Cédula" << setw(15) << "Nombre" << setw(15) << "Apellido" 
         << setw(8) << "Nota 1" << setw(8) << "Nota 2" << setw(8) << "Nota 3" 
         << setw(10) << "Promedio" << setw(12) << "Estado" << endl;
    cout << "--------------------------------------------------------------------------------------\n";
    
    for (size_t i = 0; i < listaEstudiantes.size(); i++) {
        listaEstudiantes[i].mostrarInformacion();
    }
    cout << "======================================================================================\n";

    // Impresión de métricas estadísticas solicitadas
    cout << "\n=== ESTADÍSTICAS DEL GRUPO ===" << endl;
    cout << "Total de estudiantes aprobados:  " << aprobados << endl;
    cout << "Total de estudiantes reprobados: " << reprobados << endl;

    return 0;
}