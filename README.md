# APE 04 - Sistema Básico de Control de Estudiantes y Calificaciones

[cite_start]Este repositorio contiene el desarrollo de la Guía Práctica **APE 04** para la asignatura **Algoritmos y Lógica de Programación** de la carrera de **Software** en la **Universidad Técnica de Ambato**[cite: 2, 3].

[cite_start]El objetivo principal de este proyecto es implementar un sistema informático funcional que permita registrar, gestionar y validar las calificaciones de un grupo de estudiantes, aplicando los fundamentos del paradigma de **Programación Orientada a Objetos (POO)** mediante el uso de clases, objetos, encapsulamiento y métodos en dos lenguajes de programación distintos: **C++** y **Java**[cite: 9, 10, 20].

##  Descripción del Problema

[cite_start]El sistema permite el registro de información de los estudiantes de la asignatura[cite: 9]. [cite_start]Cada estudiante cuenta con las siguientes propiedades privadas[cite: 11, 27]:
- [cite_start]Cédula [cite: 12]
- [cite_start]Nombre [cite: 13]
- [cite_start]Apellido [cite: 14]
- [cite_start]3 Notas Parciales [cite: 15, 16, 17]
- [cite_start]Promedio (Calculado automáticamente) [cite: 18, 36]
- [cite_start]Estado: **Aprobado** o **Reprobado** (Un estudiante aprueba si su promedio es mayor o igual a 7.00)[cite: 19, 43].

### Funcionalidades Implementadas
- [cite_start]**Registro Mínimo:** Entrada de datos para al menos 5 estudiantes[cite: 34].
- [cite_start]**Validación de Datos:** Restricción iterativa para asegurar que las notas ingresadas estén estrictamente en el rango de $0$ a $10$[cite: 40].
- [cite_start]**Procesamiento Estadístico:** Cálculo global de la cantidad total de estudiantes aprobados y reprobados en el grupo[cite: 38, 39].

---

## 📁 Estructura del Repositorio

[cite_start]El proyecto se encuentra estructurado de acuerdo con la distribución sugerida por el docente, dividiendo de forma limpia los componentes de software de la documentación y evidencias[cite: 44, 45]:

```text
APE04-Clases-Objetos-Metodos/
│
├── c++/
│   ├── main.cpp         # Código fuente con la clase Estudiante y lógica en C++
│   └── README.md        # Manual de compilación y ejecución para C++
│
├── java/
│   ├── Estudiante.java  # Definición de la clase entidad encapsulada en Java
│   ├── Main.java        # Clase principal y control de flujos en Java
│   └── README.md        # Manual de compilación y ejecución para Java
│
├── capturas/
│   ├── ejecucion_cpp.png   # Evidencia de ejecución y pruebas en C++
│   ├── ejecucion_java.png  # Evidencia de ejecución y pruebas en Java
│   └── commits_github.png  # Evidencia del historial de commits en Git
│
└── README.md            # Documentación general del proyecto (Este archivo)