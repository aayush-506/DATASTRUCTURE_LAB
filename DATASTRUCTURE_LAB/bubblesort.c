#include<stdio.h>
int main()
{
int i,j;
// int n;
// printf("enter the no of elements you eants of enter\t");
// scanf("%d",&n);
// int a[n];
//  printf ("Enter Array Elements:\n");
//     for (i = 0; i < n; i++)
//     {
//         scanf ("%d", &a[i]); //Run time array initialization
//  }
int a[]={89,1,56,-67,0,45};
int n=6;
    printf ("Entered Array Elements are : ");
    for (i = 0; i < n; i++)
    {
        printf ("%d ", a[i]);
    }
    
for ( i = 0; i < n-1; i++)
{
    for ( j = i+1; j < n; j++)
    {
        if (a[i]>a[j])
        {
            //apply the logic of swapping
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        
    }
    
}
// for printing the sorted array
printf("sorted array is\n");
for ( i = 0; i < n; i++)
{
    printf("%d\t",a[i]);
}


return 0;
}