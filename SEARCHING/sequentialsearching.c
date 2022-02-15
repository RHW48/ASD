#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i,Data[125],cari, jumlah=0;

    printf("Mau berapa data yang disimpan? ");
    scanf("%d",&n);
    printf("Masukkan %d integer(s)\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&Data[i]);

    printf("Data yang mau dicari? ");
    scanf("%d",&cari);

    for(i=0;i<n;i++){
        if (Data[i]==cari)
        {
            printf("Angka %d ketemu, dan tersimpan di posisi %d\n",cari,i+1);
            jumlah++;
            //break;
        }
    }
        if (jumlah==0){
            printf("\nangka %d tidak ketemu\n", cari);
        }
        else{
            printf("\nangka %d ketemu, dan tampil sebanyak %d \n", cari, jumlah);
        }



return 0;
}
