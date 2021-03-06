#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STACK 3

typedef struct STACK
{
    int top;
    char data[10][10];
};

struct STACK tumpuk;

void inisialisasi()
{
    tumpuk.top = -1;//inisialisasi top nya buat -1
}

int IsFull()
{
    if(tumpuk.top == MAX_STACK -1)
        return 1;
    else
        return 0;
}

int IsEmpty()
{
    if(tumpuk.top == -1)
        return 1;
    else
        return 0;
}

void Push(char d[10])
{
    tumpuk.top++;
    strcpy(tumpuk.data[tumpuk.top],d);
}

void Pop()
{
    printf("Data yang terambil = %s\n",tumpuk.data[tumpuk.top]);
    tumpuk.top--;
}

void TampilStack()
{
    for(int i=tumpuk.top; i>=0; i--)
    {
        printf("Data : %s\n",tumpuk.data[i]);
    }
}

void Clear()
{
    tumpuk.top=-1;
}

void STACKMENU()
{
    int pil;
    inisialisasi();
    char dt[10];
    do
    {
        system("cls");
        printf("1. push\n2. pop\n3. print\n4. clear\n5. exit\n");
        printf("Pilihan : ");
        scanf("%d",&pil);
        switch(pil)
        {
        case 1:
            system("cls");
            if(IsFull() != 1)
            {
                printf("Data = ");
                scanf("%s",dt);
                Push(dt);
            }
            else printf("\nSudah penuh!\n");
            break;
        case 2:
            system("cls");
            if(IsEmpty() != 1)
                Pop();
            else
                printf("\nMasih kosong!\n");
            break;
        case 3:
            system("cls");
            if(IsEmpty() != 1)
                TampilStack();
            else
                printf("\nMasih kosong!\n");
            break;
        case 4:
            system("cls");
            Clear();
            printf("\nSudah kosong!\n");
            break;
         case 5:
            break;
        default:
            printf("PILIHAN TIDAK ADA!!!");
            break;
        }
        getch();
    }
    while(pil != 5);
    getch();
}
