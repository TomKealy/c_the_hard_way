/*TODO Refeactor into a Class*/

#include <iostream>

struct Node{
  int data;
  Node *next;
};

int main(){
  Node *root;
  root = new Node;
  root->next = 0;
  root->data = 5;
  return 0;
}
