#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    public:
    //use when next is not null
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
    public:
    //use when next is null
    Node(int data1){
        data = data1;
        next = nullptr;
    }
    //its  a multi-constructor`
};

Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp; //now mover has to go ahead
        mover = temp;
    }
    return head;
}


int main(){
    vector<int> arr = {2,5,8,7};
    Node* head = convertArr2LL(arr);
    cout<<head->data;
}
