#include <stdio.h>
#include <stdlib.h>

void tukar(int *a, int *b)
{
    int sementara = *a;
    *a=*b;
    *b = sementara;
}

void selectionSort(int arr[],int size)
{
    for(int step = 0; step < size-1; step++)
    {
        int min_idx = step;
        for(int i = step+1; i < size; i++)
        {
            if(arr[i]<arr[min_idx])
                min_idx=i;
        }
        tukar(&arr[min_idx],&arr[step]);
    }
}

int main()
{
    int data[100],n,i,k,size;
    printf("Mau berapa data yang disimpan?\n");
    scanf("%d", &size);

    printf("Masukkan %d data (integer)\n", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &data[i]);
    }

    selectionSort(data,size);
    printf("\nASCENDING : \n");
    for(int i=0; i<size; i++)
    {
        printf("%d, ",data[i]);
    }
    printf("\n");
}

