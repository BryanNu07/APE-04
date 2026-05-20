package java;

import java.util.ArrayList;
import java.util.Scanner;

import java.estudiantes;

public class main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<estudiantes> listaEstudiantes = new ArrayList<>();
        int aprobados = 0;
        int reprobados = 0;

        System.out.println("=== REGISTRO DE ESTUDIANTES (JAVA) ===\n");

        // Entrada interactiva para 5 estudiantes
        for (int i = 0; i < 5; i++) {
            System.out.println("Estudiante #" + (i + 1));
            System.out.print("Cédula: ");
            String cedula = sc.next();
            System.out.print("Nombre: ");
            String nombre = sc.next();
            System.out.print("Apellido: ");
            String apellido = sc.next();

            double n1 = ingresarNotaValidada(sc, "Nota 1");
            double n2 = ingresarNotaValidada(sc, "Nota 2");
            double n3 = ingresarNotaValidada(sc, "Nota 3");
            System.out.println("-----------------------------------");

            estudiantes est = new estudiantes(cedula, nombre, apellido, n1, n2, n3);
            listaEstudiantes.add(est);

            if (est.getEstado().equals("Aprobado")) {
                aprobados++;
            } else {
                reprobados++;
            }
        }

        // Presentación de la tabla consolidada
        System.out.println("\n================================ LISTA DE ESTUDIANTES ================================");
        System.out.printf("%-12s %-15s %-15s %-8s %-8s %-8s %-10s %-12s\n", 
                "Cédula", "Nombre", "Apellido", "Nota 1", "Nota 2", "Nota 3", "Promedio", "Estado");
        System.out.println("--------------------------------------------------------------------------------------");
        
        for (estudiantes est : listaEstudiantes) {
            est.mostrarInformacion();
        }
        System.out.println("======================================================================================");

        // Bloque estadístico final
        System.out.println("\n=== ESTADÍSTICAS DEL GRUPO ===");
        System.out.println("Total de estudiantes aprobados:  " + aprobados);
        System.out.println("Total de estudiantes reprobados: " + reprobados);
        
        sc.close();
    }

    // Lógica recursiva/iterativa de control numérico en rango [0,10]
    private static double ingresarNotaValidada(Scanner sc, String nombreNota) {
        double nota;
        while (true) {
            System.out.print("Ingrese " + nombreNota + " (0 - 10): ");
            if (sc.hasNextDouble()) {
                nota = sc.nextDouble();
                if (nota >= 0 && nota <= 10) {
                    return nota;
                }
            } else {
                sc.next();
            }
            System.out.println("Nota inválida. Debe estar en el rango de 0 a 10.");
        }
    }
}