#include<stdio.h>

typedef unsigned int UINT;
int main()
{
    UINT iMask = 0xFFFFFFFF;
    int iCnt = 0;

    //smallest value of int
        printf("%u:%X\n",iMask, iMask);
        iMask = iMask >> 1;
    
    return 0;
    
}
