#include <stdio.h>
int a[100],i,n,key;
int linear (int a[],int n,int key)
{
for(int i=0;i<n;i++)
{
if(a[i]==key)
{
printf("key found %d ",i);
return 0;
}
}
printf("key not found");
return 0;
}



int  main()
{

printf("enter the number of an array");
scanf("%d",&n);
printf("enter the elements of an array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the key element");
scanf("%d",&key);
linear(a,n,key);
return 0;
}
