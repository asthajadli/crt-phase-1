#include <iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void print_node(node* head)
{
    node* current = head;
    while(current != NULL)
    {
        cout << current->data << " ";
        current = current->next;
    }
}

int main()
{
    node* n1 = new node(5);
    node* n2 = new node(10);

    n1->next = n2;
    print_node(n1);
    return 0;
}