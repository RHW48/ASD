#include <stdio.h>
#include <stdlib.h>


void tukar(int *a, int *b)
{
    int sementara = *a;
    *a = *b;
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

void cetakArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d, ",arr[i]);
    }
    printf("\n");
}
int main()
{
    int data[] = {23,67,89,5,45,20,15,27};
    int size = sizeof(data)/sizeof(data[0]);

            printf("Before Sorting : \n");
            for(int i = 0; i < size; i++)
            {
                printf("%d, ",data[i]);
            }            printf("\n\nAFTER SELECTION SORTING (ASCENDING) : \n");
            insertionSort(data,size);
            cetakArr(data,size);

}

