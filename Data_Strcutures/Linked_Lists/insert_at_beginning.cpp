#include <iostream>
using namespace std;

class Node{
public:
  int data;
  Node* next;
};

int main()
{
  Node* head = nullptr;

  Node* first = new Node;
  first->data = 10;
  first->next = nullptr;
  head = first;

  Node* second = new Node;
  second->data = 20;
  second->next = nullptr;
  first->next = second;

  Node* third = new Node;
  third->data = 30;
  third->next = nullptr;
  second->next = third;

  // Insert at beginning
  Node* newnode = new Node;
  newnode->data = 5;
  newnode->next = head;
  head = newnode;

  // Display list
  Node* temp = head;
  while(temp != nullptr)
  {
    cout << temp->data << endl;
    temp = temp->next;
  }

  return 0;
}
