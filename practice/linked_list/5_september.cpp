#include <iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;

        Node(int data){
            this->data=data;
            next=NULL;
        }

};

Node*Takeinput(){
    int data;
    cin>>data;
    Node *head=NULL;
    while (data!=-1)
    {
        Node*newNode =new Node(data);
        if (head=newNode)
        {
            head=newNode;
        }
        
        else
        {
            Node*temp=head;
            while (temp->next !=NULL    )
            {
                temp=temp->next;
                /* code */
            }temp->next=newNode;

            
        }
    cin>>data;    
    }
    return head;
}

int main()
{

return 0;
}