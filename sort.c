#include <stdio.h>
#include <stdlib.h>
int main()
{
	int m,a[20],b[20],c[20],i,n,j,temp;
	printf("enter the limit of 1st array\n");
	scanf("%d",&m);
	printf("enter the first elements\n");
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the limit of 2st array\n");
		scanf("%d",&n);
		printf("enter the second elements\n");
		for(i=0;i<n;i++)
		{
			scanf("%d",&b[i]);
		}
for(i=0; i<n+m; i++)
    {
       if(i<m)
       {
          c[i]=a[i];
       }
          else
          {
            c[i]=b[i-m];
          }
    }
for(i=0;i<m+n;i++)
	{
		printf("%d",c[i]);
	}
for(i=0;i<m+n;i++)
{
for(j=i+1;j<m+n;j++)
{
	if(c[i]>c[j])
{
	temp=c[i];
	c[i]=c[j];
	c[j]=temp;
	}

}}
printf("array after sorting is :");
for(i=0;i<=n+m-1;i++)
{
	printf("%d",c[i]);
}

return 0;
}
