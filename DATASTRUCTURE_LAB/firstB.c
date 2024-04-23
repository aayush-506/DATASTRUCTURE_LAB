// C Program to Insert an element
// at a specific position in an Array

#include <stdio.h>

int main()
{
	int arr[100] = { 0 };
	int i, x, pos, n ;

	// initial array of size 10
    printf("enter the size of the array? ");
    scanf("%d",&n);
    printf("enter the elements of array");
	for (i = 0; i < n; i++)
		
        scanf("%d",&arr[i]);

	// print the original array
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	// element to be inserted
    printf("enter the ele,ent which is to be inserted?" );
    scanf("%d",&x);
	

	// position at which element
	// is to be inserted
     printf("enter the position at which the element is to be inserted?" );
    scanf("%d",&pos);
	

	// increase the size by 1
	n++;

	// shift elements forward
	for (i = n - 1; i >= pos; i--)
		arr[i] = arr[i - 1];

	// insert x at pos
	arr[pos - 1] = x;

	// print the updated array
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");

//for deleting
for (i=pos;i<=n-1;i++)
{
    arr[i-1]=arr[i];
}
for (int i=0;i<n;i++)
{
printf("%d",arr[i]);
}
	return 0;
}
