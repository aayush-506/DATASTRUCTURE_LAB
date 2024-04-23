#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node* next;
    
}node;

void main()
{
    int i , n;
    node *A, *head = NULL;
    printf("Enter the no, of elements");
    scanf("%d",&n);

    for ( i = 0; i < n; i++)
    {
        if (head==NULL)
        {
           A=(node*)malloc(sizeof(node));
           head=A;
           printf("enter the value of new node");
           scanf("%d",&A->data);
           A->next=NULL;
        }
        
        else{
            A->next=(node*)malloc(sizeof(node));
            A=A->next;
            printf("enter the value of new node");
            scanf("%d",&A->data);
            A->next=NULL;
        }
    }
    printf("elements of linkedlist are");
    A=head;
    while (A!=NULL)
    {
        printf("%d\t",A->data);
        A=A->next;
    }
    //for insertion of elements

    // int loc;

    // printf("enter the loc");
    // scanf("%d",&loc);
//      A=head;
//      node*P;
//      P=(node*)malloc(sizeof(node));
//      printf("enter the value of P");
//      scanf("%d",&P->data);
//     for ( i = 0; i < n-1; i++)
//     {
//         A=A->next;
//     }
    
//    P->next=A->next;
//    A->next=P;
//      printf("elements of linkedlist are");
//     A=head;
//     while (A!=NULL)
//     {
//         printf("%d\t",A->data);
//         A=A->next;
//     }
    
    //for deletion of elements

    // for ( i = 0; i < loc-1; i++)
    // {
    //     A=A->next;
    // }
    // node*temp=A->next;
    // A->next=temp->next;
    // free(temp);
    //  printf("elements of linkedlist are");
    // A=head;
    // while (A!=NULL)
    // {
    //     printf("%d\t",A->data);
    //     A=A->next;
    // }

    
}
