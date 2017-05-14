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
printf("\n\t������ �3\n");
printf("\n\t�������� ������� Smooth1(A, N), ����������� �����������"
       "\n\t������������� ������� A ������� N ��������� �������:"
       "\n\tK-��� ������� ���������� �� ������� �������������� ������ K"
       "\n\t�������� ��������� ������� A. ���������� ������ ������� ��"
       "\n\t����� ���������. � ������� ���� ������� ��������� �����������"
       "\n\t����������� ������� ������� A ������� N, ������ ����������"
       "\n\t������� �����������.");
printf("\n\n\t������� ����������� �������: ");
scanf("%d",&n);
    a=(float*)malloc(n*sizeof(float));
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("\ta[%d] = ",i);
        scanf("%f",&a[i]);
    }
    printf("\n\t�������� ������:");
    for(i=0;i<n;i++)
    {
        printf("\n\t%0.3f",a[i]);
    }
    printf("\n");
    b=(float*)malloc(n*sizeof(float));
    for(j=0;j<5;j++)
    {
        printf("\n\t����������� �%d:",j+1);
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
