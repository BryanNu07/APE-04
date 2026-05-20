# Componente C++ - Sistema de Control de Estudiantes

[cite_start]Este directorio contiene la solución desarrollada en **C++** para el sistema básico de control de estudiantes y calificaciones[cite: 7, 9]. [cite_start]La implementación se diseñó utilizando programación orientada a objetos en un único entorno modularizado para facilitar su compilación[cite: 10].

## Requisitos del Sistema
Para compilar y ejecutar este programa, asegúrese de contar con:
- Un compilador que soporte el estándar **C++11** o superior (como `g++` de la suite GCC).
- Un entorno de ejecución de terminal o consola.

## Estructura del Código
El archivo `main.cpp` incluye:
1. [cite_start]**Clase `Estudiante`**: Contiene los atributos privados (`cedula`, `nombre`, `apellido`, `nota1`, `nota2`, `nota3`, `promedio`, `estado`) [cite: 23, 27][cite_start], métodos de acceso *Getters* y *Setters* [cite: 29][cite_start], y funciones miembro para el cálculo automático del promedio y el estado académico[cite: 30, 31].
2. [cite_start]**Validación de Entradas**: Una función modular que limpia el búfer de la consola (`cin.clear()`) en caso de ingresos de datos erróneos y restringe las notas al rango de $[0, 10]$.
3. [cite_start]**Función Principal (`main`)**: Controla el ciclo iterativo para procesar un mínimo de 5 estudiantes, almacena los objetos en un contenedor dinámico (`std::vector`) y genera el reporte tabular[cite: 34, 37].

## Instrucciones de Compilación y Ejecución

Si utiliza la terminal de comandos (Consola), ejecute los siguientes pasos:

1. **Compilar el código fuente:**
   ```bash
   g++ -std=c++11 main.cpp -o SistemaEstudiantes