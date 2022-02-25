#include <stdio.h>
#include <stdlib.h>

void tukar(int *a, int *b)
{
    int sementara = *a;
    *a = *b;
    *b = sementara;
}

void selectionSort(int arr[], int size)
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

            printf("BEFORE SORTING : \n");
            for(int i = 0; i < size; i++)
            {
                printf("%d, ",data[i]);
            }            printf("\n\nAFTER SELECTION SORTING (ASCENDING) : \n");
            selectionSort(data,size);
            cetakArr(data,size);

}
