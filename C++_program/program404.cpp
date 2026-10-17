#include<iostream>
using namespace std;


#pragma pack(1)
struct node
{
    int data;
    structnode *next;
};
 

typedef struct node NODE;
typedef struct node* PNODE;



class SinlyLL
{
    private:
        PNODE first;
        int iCount;

    public:

        SinglyLL();
        
        void Display();
        int Count();
        

        void InsertFirsr(int iNo)
    
        void InsertLast(int iNo)
    

        void IntAtPose(int iNo, int iPos)
        
        void Deletefirst()
        
        void DeleteLast()
    
        void DeleteAtPose(int iPos)


    }

        

    SinglyLL::SinglyLL()
        {
            cout<<"inside Constructor\n"<<endl
            this->first = NULL;

        }

int SinglyLL::Count()

void Signly Di
ehile(temp != NULL)
{
    cout<<" "<<temp->data<< |->"<<endl;

    temp = remp->next;
}



void  SinglyLL::InsertFirsr(int iNo)
{

}
void SinglyLL::InsertLast(int iNo)
{

}

void SinglyLL::IntAtPose(int iNo, int iPos)
{

}
void SinglyLL::Deletefirst()
{

}
void SinglyLL:: DeleteLast()
{

}
void SinglyLL:: DeleteAtPose(int iPos)
{

}


int main()
{
    SinglyLL sobj;   
    
    return 0;

    
}