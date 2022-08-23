#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    char *buf = (char *) malloc(argc);
    if (argc > 2) {
        buf[0] = argc;
        free(buf);
    }
    
    free(buf);
    
    return 0;
}
