#include <stdio.h> // Incluye el archivo stdio del Standard Library. Nos aporta cositas de I/O

/* This is a comment. */
int main(int argc, char *argv[]) // Funcion main que admite argumentos como int y como string
{
    int distance = 100; // definimos un entero
    char *s = "Hello World"; // definimos un string pointer
    float f = 100.00; // definimos un float
    char c = 'c'; // definimos un char

    // this is also a comment
    printf("You are %d miles away.\n", distance);
    printf("You are %f miles away.\n", f);
    printf("You are %s miles away.\n", s);
    printf("You are %p miles away.\n", s);
    printf("You are %c miles away.\n", c);


    return 0;
}
