#include<iostream>
using namespace std;

typedef struct Node
{
   int data;
   struct node*next;
} NODE ,*PNODE ;

class DoublyCL
{
    private;
       PNODE First; 
       PNODE Last;      // Charactreistics
       int iCount;        // Characteristics
       
    public;               // Behaviours
       DoublyCL();
       ~DoublyCL();

       void InsertFirst(int no);
       void InsertLast (int no);
       void InsertAtPos(int no ,int ipos);

       void DeleteFirst();
       void DeleteLast();
       void DeleteAtPos(int iPos);

       void Display();
       int Count();
     
};




int main()
{ 
  

    return 0;
}