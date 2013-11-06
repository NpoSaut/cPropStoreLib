#include "cpropstorelib.h"
#include <stdio.h>

int main (int argc, char **argv)
{
    int key = atoi(argv[1]);
    int val;
    int res;
    res = getProperty(key, &val);
    printf("%03i: %i\n", key, val);
    if (res != 0)
        printf("error: %i", res);
}
