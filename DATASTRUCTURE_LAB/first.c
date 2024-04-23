#include<stdio.h>
int main()
{
int n;
int A[n];
int value;
int i;
int ele=10;
printf("enter the elements");
scanf("%d",&n);
for (int i=0;i<n;i++)
{
    scanf("%d",&A[i]);
    

}
int pos;
scanf("%d",&pos);
for (int i=0;i<n;i++)
{
printf("%d",A[i]);
}
//for shifting
for (i=n-1;i<=pos-1;i--)
{
    A[i+1]=A[i];
}
A[pos-1]=ele;
//for deleting
for (i=pos;i<=n-1;i++)
{
    A[i-1]=A[i];
}
for (int i=0;i<n;i++)
{
printf("%d",A[i]);
}

return 0;
}