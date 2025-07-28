#include <bits/stdc++.h>
using namespace std;
 
struct Node{
    public:
    int data;
    Node* next;

    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
};

Node* deleteHead(Node* head){
    Node* temp = head;
    head = head->next;
    free(temp);
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

    head = deleteHead(head);

    current = head;
    while(current != nullptr){
        cout << current->data << "\n";
        current = current->next;
    }

    return 0;
}