#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv)
{
    char buffer[16];
    strcpy(buffer, argv[1]);

    int * test = new int[16];
    delete test;
    printf("%d", test[4]);

}

