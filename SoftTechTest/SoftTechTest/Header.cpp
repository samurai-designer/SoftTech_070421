#include "Header.h"

int suma(int a[], int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
        s += a[i];
    return s;
}

int max(int a[], int n)
{
    int m = a[0];
    for (int i = 1; i < n; i++)
        if (m < a[i]) m = a[i];
    return m;
}
