#include<iostream>
using namespace std;

template <class T>
T Max(T no1, T no2, T no3)
{
    T ans;

    if(no1 > no2 && no1 > no3)
    ans = no1;

    else if(no2 > no1 && no2 > no3)
    ans = no2;

    else
    ans = no3;

    return ans;
}
int main()
{
    int iRet = Max(10, 20, 15);
    cout<< "Largest = "<< iRet << endl;

    float fRet = Max(10.5f, 20.7f, 15.2f);
    cout<< "Largest = " << fRet << endl;

    return 0;


}