#include <bits/stdc++.h>
using namespace std;

struct Node
{
    public:
    int data;
    Node* next;

    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
};

//  function to delete the tail
Node* deleteTail(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* temp = head;
    while(temp->next->next != nullptr){
        temp = temp->next;
    }
    free(temp->next);
    temp->next = nullptr;
    return head;
}

int main(){
    Node* head = nullptr;
    Node* current = nullptr;

    for (int i=0; i<5; i++){
        int x;
        cout << "Enter a value: " ;
        cin >> x;
        Node* temp = new Node(x, nullptr);

        if(head == nullptr){
            head = temp;
        }else{
            current->next = temp;
        }
        current = temp;
    }

    head = deleteTail(head);

    current = head;
    while(current != nullptr){
        cout << current->data << "\n";
        current = current->next;
    }
    return 0;
}
