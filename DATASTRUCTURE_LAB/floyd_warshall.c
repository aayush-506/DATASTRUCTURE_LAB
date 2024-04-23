#include<stdio.h>
#define n 4 
#define INF 999
int main()
{
int i,j,k;
int Q[n][n];
for ( i = 0; i < n; i++)
{
 for ( j = 0; j < n; j++)
  {
   scanf("%d",&Q[i][j]);
  }
}
for ( i = 0; i < n; i++)
{
 for ( j = 0; j < n; j++)
  {
  printf("%d",Q[i][j]);
  }
  printf("\n");
}

for ( k = 0; k < n; k++)
{
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            if (Q[i][j] >Q[i][k] + Q[k][j])
                   {
                    Q[i][j] = Q[i][k] + Q[k][j];
                   }  
        }
        
    }
    
}
printf("te updatede matrix is");
for ( i = 0; i < n; i++)
{
 for ( j = 0; j < n; j++)
 {
    printf("%d",Q[i][j]);
 }
 printf("\n");
}


return 0;
}