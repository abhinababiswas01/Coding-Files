#include <stdio.h>

int main()
{

// PART-1
label:
    printf("We are inside label");
    goto end;
    printf("Hello World");
    goto label;

end:
    printf("We are outside label");

    return 0;
}