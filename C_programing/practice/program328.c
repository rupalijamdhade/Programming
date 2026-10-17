#include<stdio.h>

typedef unsigned int UINT;
int main()
{
    UINT iMask = 0x00000000;
    int iCnt = 0;

    //smallest value of int
        printf("%d:%X\n",iMask, iMask);
        iMask = iMask >> 1;
    
    return 0;
    
}
