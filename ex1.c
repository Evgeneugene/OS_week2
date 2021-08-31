
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    int i;
    float f;
    double d;

    i = INT_MAX;
    f = FLT_MAX;
    d = DBL_MAX;
    printf("Sizes(bytes): %lu %lu %lu\n", sizeof(i), sizeof(f), sizeof(d));
    printf("Values: %i %f %lf", i, f, d);

    return 0;
}
