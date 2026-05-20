## 2. README para la sección de Java

Este archivo debe guardarse dentro de la ruta: `APE04-Clases-Objetos-Metodos/java/README.md`.

```markdown
# Componente Java - Sistema de Control de Estudiantes

Este directorio contiene la solución desarrollada en **java** para el sistema básico de control de estudiantes y calificaciones[cite: 7, 9]. La implementación se diseñó separando de manera estricta la definición de la clase molde de la clase conductora principal para respetar los pilares de la Programación Orientada a Objetos (POO)[cite: 10].

## Requisitos del Sistema
Para compilar y ejecutar este programa, asegúrese de contar con:
- **Java Development Kit (JDK)** versión 8 o superior instalado y configurado en sus variables de entorno.
- Una terminal de comandos o un IDE compatible (ej. Apache NetBeans, IntelliJ IDEA o VS Code).

## Estructura de Clases
El proyecto se compone de dos archivos fuentes bajo el paquete `Java`:
1. **`Estudiante.java`**: Define la clase de entidad `public class Estudiante`[cite: 25]. Implementa el encapsulamiento estricto mediante propiedades privadas, un constructor parametrizado y métodos de cálculo que actualizan el estado del objeto de manera automatizada[cite: 27, 28, 30, 31].
2. **`Main.java`**: Contiene el método conductor `public static void main(String[] args)`. Se encarga de la captura interactiva de datos mediante la clase `Scanner`, la validación de tipos numéricos flotantes, el almacenamiento en un `ArrayList` dinámico y el despliegue de los indicadores estadísticos globales[cite: 33, 38, 39, 40].

## Instrucciones de Compilación y Ejecución desde la Terminal

Posiciónese en la raíz de la carpeta `Java/` y ejecute los siguientes comandos:

1. **Compilar todos los archivos fuentes:**
   ```bash
   javac -d . Estudiante.java Main.java