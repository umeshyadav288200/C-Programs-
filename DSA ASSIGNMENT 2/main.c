#include <stdio.h>
int main()
{
int i,j, n,m,a[10][10];
printf("Enter the value for row:\n");
scanf("%d",&n);
printf("Enter the value for column:\n");
scanf("%d",&m);
printf("\n Please Enter the Array Elements \n");
for(i = 0; i<n; i++)
{
for(j= 0;j<m; j++)
{
scanf("%d",&a[i][j]);
}
}
printf("Display 2D array with nxm arrangement \n");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
printf("Display 2D array with mxn arrangement \n");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
printf("%d\t",a[j][i]);
}
printf("\n");
}
return 0;
}
