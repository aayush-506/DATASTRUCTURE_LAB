#include<stdio.h>
#include<stdlib.h>

typedef struct dnode{
    int data;
    struct dnode *next,*prev;
}dnode;

void main()
{
   int i,n;
   dnode *head=NULL,*A,*P;
   printf("enter the no of nodes");
   scanf("%d",&n);
   for ( i = 1; i <= n; i++)
   {
    if (head==NULL)
    {
        head=(dnode*)malloc(sizeof(dnode));
        A=head;
        printf("enter the data ");
        scanf("%d",&A->data);
        A->prev=NULL;
        A->next=NULL;
    }
    else
    {
        A->next=P;
      P=(dnode*)malloc(sizeof(dnode));
      P=P->next;
      printf("enter the data");
      scanf("%d", P->data);
       P->next=NULL;
        P->prev=A;
        
    }
    printf("the elements of linked list is:");
    //
    

    
   }
   

}