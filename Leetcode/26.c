#include <stdio.h>

int removeDuplicates(int *nums, int numsSize)
{
    int *l, *r;
    int t = 1,s = 2;
    l = nums;
    r = nums + 1;
    while (s<=numsSize)
    {
        if (*l != *r)
        {
            l++;
            t++;
            *l = *r;
            r++;
            s++;
        }
        else
        {
            r++;
            s++;
        }
    }
    return t;
}