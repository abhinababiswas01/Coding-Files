#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i, j, len, flag=1;

    printf("Enter the string: ");
    scanf("%s", &str);

    len=strlen(str);

    for ( i = 0, j = len - 1; i < j; i++, j--)
    {
        if (str[i] != str[j])
        {
            flag = 0;
            break;
        }
        
    }

    if (flag == 1)
    {
        printf("This str is palindrome");
    }
    else
    {
        printf("This str is not palindrome");
    }
    
    

    return 0;
}