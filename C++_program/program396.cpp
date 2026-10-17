#include<iostream>
using namespace std;


#pragma pack(1)
struct node
{
    int data;
    structnode *next;
};
typedef struct node NODE;
typedef struct node* NODE;
typedef struct node* NODE;

int main()
{
    NODE obj;

    cout<<sizeof(NODE)<<endl;

    return 0;
}


