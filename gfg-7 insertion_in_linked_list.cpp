
struct Node {
  int data;
  struct Node *next;
  Node(int x) { 
    data = x;
    next = NULL;
  }
};

void printList(Node *head) { 
    Node *node = head;
    while (node != NULL) {
      cout << node -> data << ' ';
      node = node -> next;
    }
    cout << endl;
}

Node *insertAtBegining(Node *head, int newData);
Node *insertAtEnd(Node *head, int newData);


int main() {
  int test;
  cin >> test; 
  while (test--) { 
       int n, ch, tmp;
    Node *head = NULL; 
    cin >> n;
    for (int i = 0; i < n; i++) {
      cin >> tmp >> ch; 
      if (ch) head = insertAtEnd(head, tmp); 
      else head = insertAtBegining(head, tmp);
    }
    printList(head);
  }
  return 0;
}

// } Driver Code Ends
/*Structure of the linked list node is as
struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

Node *insertAtBegining(Node *head, int newData)
{ 
            
    
            Node *temp = new Node(newData);
            temp->next = head;
            head =temp;
            return head;
}


Node *insertAtEnd(Node *head, int newData) 
{
    if(head == NULL)
            return new Node(newData);
    else
        {
            Node *temp = new Node(newData);
            Node *x = head;
        while(x->next!= NULL)
            {
                 x = x->next;
            }
            x->next=temp;
            return head;
        }
    
}
