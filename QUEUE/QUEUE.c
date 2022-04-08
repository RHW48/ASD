#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 3

//QUEUE

typedef struct Queue
{
    int data[MAX];
    int head;
    int tail;
} Queue;

Queue antrian;

int IsEmptyQ()
{
    if (antrian.tail==-1)
        return 1;
    else
        return 0;
}

int IsFullQ()
{
    if(antrian.tail==MAX-1) return 1;
    else return 0;
}

void Enqueue(int data)
{
    if(IsEmptyQ()==1)
    {
        antrian.head=antrian.tail=0;
        antrian.data[antrian.tail]=data;
        printf("%d masuk!",antrian.data[antrian.tail]);
    }
    else if(IsFullQ ()==0)
    {
        antrian.tail++;
        antrian.data[antrian.tail]=data;
        printf("%d masuk!",antrian.data[antrian.tail]);
    }
}

int Dequeue()
{
    int i;
    int e = antrian.data[antrian.head];
    for(i=antrian.head; i<=antrian.tail-1; i++)
    {
        antrian.data[i] = antrian.data[i+1];
    }
    antrian.tail--;
    return e;
}

void clearQ()
{
    antrian.head=antrian.tail=-1;
    printf("data clear");
}

void awal()
{
    antrian.head=antrian.tail=-1;
}

void TampilQ()
{
    if(IsEmptyQ()==0)
    {
        for(int i = antrian.head; i <= antrian.tail; i++)
        {
            printf("%d ",antrian.data[i]);
        }
    }
    else printf("data kosong!\n");
}

void QUEUEMENU()
{
    int pil;
    int dt;
    awal();
    do
    {
        system("cls");
        printf("1. ENQUEUE\n2. DEQUEUE\n3. PRINT\n4. CLEAR\n5. EXIT\nPilihan : ");
        scanf("%d",&pil);
        switch(pil)
        {
        case 1:
            system("cls");
            if(IsFullQ() != 1)
            {
                printf("Data = ");
                scanf("%d",&dt);
                Enqueue(dt);
            }
            else printf("\nSudah penuh!\n");
            break;
        case 2:
            system("cls");
            if(IsEmptyQ() != 1)
                printf("Data yang keluar %d ",Dequeue());
            else
                printf("\nMasih kosong!\n");
            break;
        case 3:
            system("cls");
            if(IsEmptyQ() != 1)
                TampilQ();
            else
                printf("\nMasih kosong!\n");
            break;
        case 4:
            system("cls");
            clearQ();
            printf("\nSudah kosong!\n");
            break;
        case 5:break;
        }
        getch();
    }
    while(pil != 5);
    getch();
}

int main(){
    QUEUEMENU();
}

