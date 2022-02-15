#include <stdio.h>
#include <stdlib.h>

int iterativeBinarySearch(int array[], int start_index, int end_index, int element)
{
    while (start_index <= end_index)
    {
        int middle = start_index + (end_index- start_index )/2;
        if (array[middle] == element)
            return middle;
        if (array[middle] < element)
            start_index = middle + 1;
        else
            end_index = middle - 1;
    }
    return -1;
}
int main(void)
{
    int angka[125],element,n,i;
    printf("Mau berapa data yang disimpan? ");
    scanf("%d",&n);
    printf("Masukkan %d integer(s)\n",n);
    for(i=0; i<n; i++)
        scanf("%d",&angka[i]);

    printf("Cari angka berapa? ");
    scanf("%d",&element);
    int found_index = iterativeBinarySearch(angka, 0, n-1, element);
    if(found_index == -1 )
    {
        printf("Angka tersebut TIDAK DITEMUKAN ");
    }
    else
    {
        printf("Angka ditemukan pada lokasi/index : %d",found_index);
    }
    return 0;
}
