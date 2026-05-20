package java;

public class estudiantes {
    // Atributos con alcance privado
    private String cedula;
    private String nombre;
    private String apellido;
    private double nota1;
    private double nota2;
    private double nota3;
    private double promedio;
    private String estado;

    // Constructor polimórfico por asignación directa
    public estudiantes(String cedula2, String nombre2, String apellido2, double n1, double n2, double n3) {
        //TODO Auto-generated constructor stub
    }

    // Métodos mutadores (Getters y Setters)
    public String getCedula() { return cedula; }
    public void setCedula(String cedula) { this.cedula = cedula; }

    public String getNombre() { return nombre; }
    public void setNombre(String nombre) { this.nombre = nombre; }

    public String getApellido() { return apellido; }
    public void setApellido(String apellido) { this.apellido = apellido; }

    public double getNota1() { return nota1; }
    public void setNota1(double nota1) { this.nota1 = nota1; calcularPromedio(); determinarEstado(); }

    public double getNota2() { return nota2; }
    public void setNota2(double nota2) { this.nota2 = nota2; calcularPromedio(); determinarEstado(); }

    public double getNota3() { return nota3; }
    public void setNota3(double nota3) { this.nota3 = nota3; calcularPromedio(); determinarEstado(); }

    public double getPromedio() { return promedio; }
    public String getEstado() { return estado; }

    // Calcula automáticamente la media aritmética de los parámetros numéricos
    public void calcularPromedio() {
        this.promedio = (this.nota1 + this.nota2 + this.nota3) / 3.0;
    }

    // Compara si el promedio se ajusta a la condición de aprobación base
    public void determinarEstado() {
        if (this.promedio >= 7.00) {
            this.estado = "Aprobado";
        } else {
            this.estado = "Reprobado";
        }
    }

    // Despliega la información formateada en una sola fila de consola
    public void mostrarInformacion() {
        System.out.printf("%-12s %-15s %-15s %-8.2f %-8.2f %-8.2f %-10.2f %-12s\n", 
                cedula, nombre, apellido, nota1, nota2, nota3, promedio, estado);
    }
}