#include <stdio.h>
int main(int argc, char const *argv[])
{
    char nombres[5][2][50] = {{"a01", "Carlos"}, {"a02", "David"}, {"a03", "Juan"}, {"a04", "Cris"}, {"a05", "Albert"}};
    FILE *archivo;
    archivo = fopen("nombre", "w+");
    if (archivo == NULL)
    {
        printf("no se puede abrir el archivo");
        return -1;
    }
    for (int i = 0; i < 5; i++)
    {
        fprintf(archivo, "%s %s\n", nombres[i][0], nombres[i][1]);
    }
    fclose(archivo);
    return 0;
}
