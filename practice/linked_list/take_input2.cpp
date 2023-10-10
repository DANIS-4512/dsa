#include <iostream>
using namespace std;
#include "class_Node.cpp"
void print(Node*head){
    Node*temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
    
}
int main()
{

return 0;
}