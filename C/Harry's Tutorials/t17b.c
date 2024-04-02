#include <stdio.h>

int main()
{
// PART-2
label:
    printf("We are inside label\n");

    printf("Hello World\n");
    goto end;
    goto label;

end:
    printf("We are outside label\n");

    return 0;
}