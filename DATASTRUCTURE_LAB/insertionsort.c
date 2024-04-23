#include<stdio.h>
int main()
{
int i,j;
int n=9;
int a[]={678,4546,543267,6,56,32,0,-5678,-2345};
// for printing the input Array
for ( i = 0; i < n; i++)
{
    printf("%d\t",a[i]);
}
int key;
for ( i = 1; i < n; i++)
{
    key=a[i];
    j=i-1;
    while (a[j]>key && j>=0)
    {
        a[j + 1] = a[j];
            j = j - 1;
    }
    
}


return 0;
}