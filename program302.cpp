#include<iostream>
using namespace std;

typedef struct Node
{
   int data;
   struct node*next;
} NODE ,*PNODE ,**PPNODE;

class SinglyLL
{
    public;
       PNODE First;       // Charactreistics

       SinglyLL();

       void InsertFirst(int no);
       void InsertLast (int no);
       void InsertAtPos(int no ,int ipos);

       void DeleteFirst();
       void DeleteLast();
       void DeleteAtPos(int iPos);

       void Display();
       void Count();
     
};
int main()
{
    return 0;
}