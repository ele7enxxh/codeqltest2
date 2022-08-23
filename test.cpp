#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *osi_malloc(int size)
{
    return malloc(size);
}

void osi_free(void *buf)
{
    free(buf);
}

int main(int argc, char **argv)
{
    char *buf = (char *) osi_malloc(argc);
    if (argc > 2) {
        buf[0] = argc;
        osi_free(buf);
    }
    
    osi_free(buf);
    
    return 0;
}
