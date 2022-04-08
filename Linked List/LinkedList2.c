#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head;

void cetak()
{
    struct node *ptr;
    int item,i=0,flag;
    ptr = head;
    if(ptr ==NULL)
    {
        printf("KOSONG");
    }
    else
    {
        printf("CETAK\n");
        while(ptr != NULL)
        {
            printf("%d->",ptr->data);
            ptr = ptr->next;
        }
        printf("NULL");
    }
    printf("\n\ntekan enter uhtuk kembali\n");
    getch();
}

void hapusAwal()
{
//Koding hapus data awal:
    struct node *ptr;
    if(head == NULL)
    {
        printf("List kosong bro!\n");
    }
    else
    {
        ptr = head;
        head = ptr->next;
        free(ptr);
        printf("\nNODE awal berhasil dihapus!\n");

    }
    printf("tekan enter uhtuk kembali\n");
    getch();
}

void hapusAkhir()
{
//Koding hapus data akhir:
    struct node *ptr,*temp,*dell;

    ptr = (struct node *)malloc(sizeof(struct node *));
    if(ptr == NULL)
    {
        printf("OVERFLOW!");
    }
    else
    {
        temp = head;
        if(head->next == NULL){
                free(head);
        }
        else{
             while(temp->next != NULL)
             {
                 dell = temp;
                 temp = temp->next;
             }
             free(dell->next);
             dell->next=NULL;
             printf("\nNODE akhir berhasil dihapus!\n");
        }
    }

    printf("tekan enter uhtuk kembali\n");
    getch();

}

void hapusSembarang()
{
//Koding hapus data sembarang
    struct node *ptr,*temp;
    int loc,i;

    if(head == NULL)
    {
        printf("Data kosong\n");
    }
    else
    {
        temp=head;
        printf("mau hapus di lokasi berapa : ");
        scanf("%d",&loc);

            for(i=0; i<loc; i++)
            {
                temp=temp->next;
                if (temp==NULL)
                {
                    printf("Tidak bisa simpan data");
                    return;
                }
            }
            // Now temp pointer points to the previous node of the node to be deleted
            struct node *del = temp->next;       // del pointer points to the node to be deleted
            temp->next= temp->next->next;
            printf("\nNODE sembarang berhasil dihapus!\n");
            del->next=NULL;
            free(del);                          // Node is deleted
        }



    printf("tekan enter uhtuk kembali\n");
    getch();
}

void awal()
{
    //isi data di node awal
    struct node *ptr;
    int item;

    ptr = (struct node *)malloc(sizeof(struct node *));
    if (ptr==NULL)
    {
        printf("OVERFLOW!");
    }
    else
    {
        printf("masukkan data : ");
        scanf("%d",&item);
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        printf("\ndata berhasil disimpan di NODE awal\n");
    }
    printf("tekan enter uhtuk kembali\n");
    getch();
}

void sembarang()
{
    //isi data di node sembarang
    struct node *ptr, *temp;
    int item,loc,i;

    ptr = (struct node *)malloc(sizeof(struct node *));
    if (ptr==NULL)
    {
        printf("OVERFLOW!");
    }
    else
    {
        printf("masukkan data : ");
        scanf("%d",&item);
        ptr->data = item;
        printf("mau simpan di lokasi berapa : ");
        scanf("%d",&loc);
        temp = head;
        for(i = 0; i < loc; i++)
        {
            temp = temp->next;
            if (temp==NULL)
            {
                printf("Tidak bisa simpan data");
                return;
            }
        }
        ptr->next = temp->next;
        temp->next = ptr;
        printf("\ndata berhasil disimpan di NODE\n");
    }
    printf("tekan enter uhtuk kembali\n");
    getch();
}

void akhir()
{
    //isi data di node akhir
    struct node *ptr,*temp;
    int item;

    ptr = (struct node *)malloc(sizeof(struct node *));
    if(ptr == NULL)
    {
        printf("OVERFLOW!");
    }
    else
    {
        printf("Masukkan data : ");
        scanf("%d",&item);
        ptr->data = item;
        if(head==NULL)
        {
            ptr->next = NULL;
            head = ptr;
            printf("Berhasil simpan NODE");
        }
        else
        {
            temp = head;
            while(temp -> next != NULL)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next =NULL;
            printf("\ndata berhasil disimpan di NODE akhir\n");

        }
    }

    printf("tekan enter uhtuk kembali\n");
    getch();

}

int inputanUser()
{

    int pilihan=0;
    do
    {
        system("cls");
        printf("Menu Linked List\n");
        printf("1. INPUT DATA DI AWAL\n");
        printf("2. INPUT DATA DI AKHIR\n");
        printf("3. INPUT DATA DI SEMBARANG\n");
        printf("4. DATA DALAM LINKED LIST\n");
        printf("5. HAPUS DATA AWAL\n");
        printf("6. HAPUS DATA AKHIR\n");
        printf("7. HAPUS DATA SEMBARANG\n");
        printf("8. EXIT\n");
        printf("Masukkan Pilihan : ");
        scanf("%d",&pilihan);

        switch(pilihan)
        {
        case 1:
            system("cls");
            awal();
            break;
        case 2:
            system("cls");
            akhir();
            break;
        case 3:
            system("cls");
            sembarang();
            break;
        case 4:
            system("cls");
            cetak();
            break;
        case 5:
            system("cls");
            hapusAwal();
            break;
        case 6:
            system("cls");
            hapusAkhir();
            break;
        case 7:
            system("cls");
            hapusSembarang();
            break;
        case 8:
            system("cls");
            exit(0);
            break;
        default:
            printf("pilihan salah!!");
        }


    }
    while(pilihan !=8);

}

int main()
{
    inputanUser();
}


