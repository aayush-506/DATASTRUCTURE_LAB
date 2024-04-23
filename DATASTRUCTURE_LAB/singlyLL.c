#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node* next;
}node;

int main()
{
    int i,n;
    struct node*P,*head=NULL,*Q,*A;
    printf("enter the no of nodes");
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
            P=(node*)malloc(sizeof(node));
            P=A->next;
            printf("enter the value of new node");
            scanf("%d",&P->data);
            P->next=NULL;
        }
    }
    printf("the entered linkedlist is :");
   A=head;
    while (A!=NULL)
    {
        printf("%d\t",A->data);
        A=A->next;
    }
    
    

return 0;
}