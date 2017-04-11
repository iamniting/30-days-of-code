#include <iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node *next;
        Node(int d)
        {
            data = d;
            next = NULL;
        }
};

class Solution
{
    public:
        Node* removeDuplicates(Node *head)
        {
            if (head == NULL)
                  return NULL;
              Node *ptr = head;
              Node *save = NULL;
              while(ptr)
              {
                  Node * ptr1 = ptr->next;
                  save = ptr;
                  while(ptr1)
                  {
                      if(ptr->data == ptr1->data)
                      {
                          save->next = ptr1->next;
                          delete ptr1;
                          ptr1 = save->next;
                      }
                      else
                      {
                          save = ptr1;
                          ptr1 = ptr1->next;
                      }
                  }
                  ptr = ptr->next;
              }
              return head;
              
          }
          
             Node* insert(Node *head,int data)
          {
               Node* p=new Node(data);
               if(head==NULL){
                   head=p;  

               }
               else if(head->next==NULL){
                   head->next=p;

               }
               else{
                   Node *start=head;
                   while(start->next!=NULL){
                       start=start->next;
                   }
                   start->next=p;   

               }
                    return head;
                
            
          }
          void display(Node *head)
          {
                  Node *start=head;
                    while(start)
                    {
                        cout<<start->data<<" ";
                        start=start->next;
                    }
           }
};
			
int main()
{
	Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }	
    head=mylist.removeDuplicates(head);

	mylist.display(head);
		
}
