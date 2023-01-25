#include <stdio.h>
#include <stdlib.h>

#define LOL_PRINT(str, suffix) printf("%s %s\n", str, suffix)

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        LOL_PRINT(">", " lol try harder");
        exit(1);
    }

    LOL_PRINT(argv[1], " lmao");
    return 0;
}