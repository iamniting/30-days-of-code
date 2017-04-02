#include <iostream>
using namespace std;
class Node
{
    public:
        int data;
        Node * next;
        Node(int d)
        {
            data=d;
            next=NULL;
        }
};

class Solution
{
    public:
        Node * insert(Node * head, int data)
        {
            Node * ptr = head;
            if(head == NULL)
            {
                Node * nn = new Node(data);
                return nn;
            }
            else
            {
                while(ptr)
                {
                    if(ptr->next == NULL)
                    {
                        Node * nn = new Node(data);
                        ptr->next = nn;
                        break;
                    }
                    ptr = ptr->next;
                }
            }
            return head;
      }
      
      void display(Node * head)
      {
          Node * start = head;
          while(start)
          {
              cout << start->data << " ";
              start = start->next;
          }
      }
};

int main()
{
	Node * head = NULL;
  	Solution mylist;
    int T, data;
    cin >> T;
    while(T-->0)
    {
        cin >> data;
        head=mylist.insert(head, data);
    }	
	mylist.display(head);
    return 0;
}
