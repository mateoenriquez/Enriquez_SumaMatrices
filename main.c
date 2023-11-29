#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Se ingresan las librerias necesarias para el codigo

int main(){

    int n, m;
    int n2, m2;
    int n3, m3;
    srand(time(NULL));

    //Se inicializan las respetivas variables para las matrices a sumar
    //Se pide al usuario ingresar el numero de filas y columnas de cada una de las matrices

    printf("Ingresar el numero de filas de la primera matriz: ");
    scanf("%d", &n);
    printf("Ingresar el numero de columnas de la primera matriz: ");
    scanf("%d", &m);
    printf("Ingresar el numero de filas de la segunda matriz: ");
    scanf("%d", &n2);
    printf("Ingresar el numero de columnas de la segunda matriz: ");
    scanf("%d", &m2);

    int matriz[n][m];
    int matriz2[n2][m2];

    //Se inicializan las dos matrices con los datos dados por el usuario
    
    if (n!=n2 || m!=m2)
    {
        printf("La suma no puede ser dada por las matrices no son iguales entre si \n");
        return 0;
    }

    //Se ingresa un condicional donde si el numero de filas o columnas no es el mismo entre matrices
    //no se ejecute el codigo, esto debido a que para una suma de matrices ambas deben de tener las mismas
    //dimensiones

    n3=n2=n;
    m3=n2=n;
    int matriz3[n3][m3];

        for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matriz[i][j]=rand()%100+1;
        }
        
    }

        printf("\nMatriz 1\n");
        for (int i = 0; i < n; i++)
    {
        printf("\n");
        for (int j = 0; j < m; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        
    }

    //Se asignan entradas con numeros aleatorios del 1 al 100 a la matriz y se la escribe
    
        for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matriz2[i][j]=rand()%100+1;
        }
        
    }

        printf("\n\nMatriz 2\n");
        for (int i = 0; i < n; i++)
    {
        printf("\n");
        for (int j = 0; j < m; j++)
        {
            printf("%d ", matriz2[i][j]);
        }
        
    }

    //Se asigna de igual forma entradas con numeros aleatorios a la segunda matriz y se escribe la misma.

        for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matriz3[i][j]=matriz[i][j]+matriz2[i][j];
        }
        
    }

        printf("\n\nSuma de matriz 1 y matriz 2\n");
        for (int i = 0; i < n; i++)
    {
        printf("\n");
        for (int j = 0; j < m; j++)
        {
            printf("%d ", matriz3[i][j]);
        }
        
    }

    //Por ultimo se suman ambas matrices en una matriz 3 la cual posteriormente se escribe como la totalidad de la suma
    //entre matriz 1 y 2    

    return 0;
}