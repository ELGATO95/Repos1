#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

void Smooth1(float *,int);

int main()
{
setlocale(0,"");
int i,n,j;
float *a,*b;
printf("\n\tЗадача №3\n");
printf("\n\tНаписать функцию Smooth1(A, N), выполняющую сглаживание"
       "\n\tвещественного массива A размера N следующим образом:"
       "\n\tK-тый элемент заменяется на среднее арифметическое первых K"
       "\n\tисходных элементов массива A. Сглаженный массив остаётся на"
       "\n\tместе исходного. С помощью этой функции выполнить пятикратное"
       "\n\tсглаживание данного массива A размера N, выводя результаты"
       "\n\tкаждого сглаживания.");
printf("\n\n\tВведите размерность массива: ");
scanf("%d",&n);
    a=(float*)malloc(n*sizeof(float));
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("\ta[%d] = ",i);
        scanf("%f",&a[i]);
    }
    printf("\n\tИсходный массив:");
    for(i=0;i<n;i++)
    {
        printf("\n\t%0.3f",a[i]);
    }
    printf("\n");
    b=(float*)malloc(n*sizeof(float));
    for(j=0;j<5;j++)
    {
        printf("\n\tСглаживание №%d:",j+1);
        Smooth1(a,n);
        for(i=0;i<n;i++)
        {
        b[i]=a[i];
        printf("\n\t%0.4f \t",b[i]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}

void Smooth1(float *a, int n)
{
     int i;
     float sum1=0;
     for(i=0;i<n;i++)
     {
        sum1+=a[i];
        a[i]=sum1/(i+1);
     }
}
