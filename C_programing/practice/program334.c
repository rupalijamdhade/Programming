
//accept number and position from user and toggle 4th bit 
#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo, UINT iPos)
{
    UINT iValue = 0, iRet = 0, iLocation =0;
    UINT iMask =0x1;
    UNIT iResult = 0;

    iMask = iMask <<( pos-1);

    iResult = iNo ^ iMask;
}

int main()
{
    
    UINT iValue = 0, iRet = 0, iLocation =0;

    printf("Enter nuber:\n");
    scanf("%d",&iValue);

    printf("Enter the bot position:\n");
    scanf("%d",&iLocation);

    iRet = ToggleBit(iValue,iLocation);

    
    printf("Updated number:%d\n",&iRet);
    
    return 0;
    
}
