#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("output.txt", "w"); //apertura de archivo
    if (fp != NULL)
    {
        fprintf(fp, "Hola Jackeline Aguilar\n");
        fclose(fp); //cerrando el archivo
    }
    else
    {
        printf("Error al abrir el archivo\n");
    }
    
    return 0;
}