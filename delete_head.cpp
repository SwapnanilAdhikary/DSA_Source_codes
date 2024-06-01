#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* back;

    
    Node(int data1, Node* next1 = nullptr, Node* back1 = nullptr)
        : data(data1), next(next1), back(back1) {}
};
Node* convertArr2DLL(vector<int>& arr) {
    if (arr.empty()) return nullptr; 

    Node* head = new Node(arr[0]);
    Node* prev = head;

    for (size_t i = 1; i < arr.size(); ++i) {
        Node* temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }

    return head;
}


void print(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node*deleteHead(Node* head){
   if(head == NULL || head->next == NULL){
   	return NULL;
   }
   Node* prev = head;
   head = head->next;

   head->back = nullptr;
   prev->next = nullptr;

   delete prev;
   return head;

}
int main() {
    vector<int> arr = {12, 5, 8, 7};
    Node* head = convertArr2DLL(arr);
    head = deleteHead(head);
    print(head);
    return 0;
}
