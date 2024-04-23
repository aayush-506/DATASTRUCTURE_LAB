#include<stdio.h>
int main()
{
int a[10][10],m,n,i,j;
printf("enter the no of rows and columns ");
scanf("%d%d",&m,&n);
printf("input the array elements");
for ( i = 0; i < m; i++)
{
 for ( j = 0; j < n; j++)
 {
   scanf("%d",&a[i][j]);
 }
}

printf("your entered array is :\n");
for ( i = 0; i < m; i++)
{
 for ( j = 0; j < n; j++)
 {
   printf("%d ",a[i][j]);
 }
 printf("\n");
}
return 0;
}