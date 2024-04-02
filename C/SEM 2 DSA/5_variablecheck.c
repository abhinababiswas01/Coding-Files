#include <stdio.h>             
int main()                       
{
	int *a[50],n,m,c=0,i;
	printf("Enter size of an Array : \n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter %d address Element: \n",i);
        scanf("%d",&a[i]);
    }
    printf("Enter a Element which search an Array : \n");
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
       if(m==a[i])
        {
            c++;
            break;
        }
    }
    if(c==1)
    {
        printf("%d is Found in %d Location ",m,i);
    }
    else
    {
       printf("%d is Not Found in the Array ",m);
       }
}