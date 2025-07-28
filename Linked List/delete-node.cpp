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

    int pos;

    cout << "Which position do you want to delete: ";
    cin >> pos;
    pos = pos-1;

    