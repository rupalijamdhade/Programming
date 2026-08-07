//write a program which accept string from user and
//  copy the contents of that string into another string
//(Implement strcpy()function)

//Input:"hello every one"
 //       10
//output:hello ever
//note: if third parametr is greter than the size of source string
//  then copywhole string into destination
//

#include <stdio.h>

void StrNCpyX(char *src, char *dest, int iCnt)
{
    //filter

    while((*src != '\0')&&(iCnt != 0))
    {
        *dest = *src;
        src++;
        dest++;
        iCnt--;
    }
    *dest ='\0';
}
int main()
{
    char arr[30]="Hello everyone";
    char brr[30];//empty string
    StrNCpyX(arr, brr, 10);

    printf("%s\n", brr);
    return 0;
}
