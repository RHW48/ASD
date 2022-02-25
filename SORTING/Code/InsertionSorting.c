#include <stdio.h>
#include <stdlib.h>

void tukar(int *a, int *b)
{
    int sementara = *a;
    *a=*b;
    *b = sementara;
}

void insertionSort(int arr[], int size)
{
    for(int i = 1; i < size; i++)
    {
        int tukar = arr[i];
        int j = i -1;
        while(arr[j]> tukar && j>=0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = tukar;
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

    insertionSort(data,size);
    printf("\nASCENDING : \n");
    for(int i=0; i<size; i++)
    {
        printf("%d, ",data[i]);
    }
    printf("\n");
}


