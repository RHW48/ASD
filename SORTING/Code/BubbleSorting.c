#include <stdio.h>
#include <stdlib.h>


void tukar(int *a, int *b)
{
    int sementara = *a;
    *a=*b;
    *b = sementara;
}

void bubbleSort(int arr[], int size)
{

    for(int i = 0; i < size; i++)
    {
        for(int j = size - 1 ; j > i; j--)
        {
            if(arr[j] < arr[j-1])
            {
                int tukar   = arr[j];
                arr[j]      = arr[j-1];
                arr[j-1]    =tukar;
            }
        }
    }
}
void cetakArr(int arr[],int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%d, ",arr[i]);
    }
    printf("\n");
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

    bubbleSort(data,size);
    printf("\nASCENDING : \n");
    cetakArr(data,size);
}
