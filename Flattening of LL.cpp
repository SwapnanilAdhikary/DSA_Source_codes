/*
Definition of special linked list:
struct ListNode
{
    int val;
    ListNode *next;
    ListNode *child;
    ListNode()
    {
        val = 0;
        next = NULL;
        child = NULL;
    }
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
        child = NULL;
    }
    ListNode(int data1, ListNode *next1, ListNode* next2)
    {
        val = data1;
        next = next1;
        child = next1;
    }
};
*/

class Solution {
public:
    ListNode* convertArrToLinkedList(vector<int>& arr){
        ListNode* dummyNode = new ListNode(-1);
        ListNode* temp = dummyNode;

        for(int i=0;i<arr.size();i++){
            temp->child = new ListNode(arr[i]);
            temp = temp->child;
        }
        return dummyNode->child;
    }
    ListNode* flattenLinkedList(ListNode* &head) {
        vector<int> arr;
        while(head != nullptr){
            ListNode* t2 = head;
            while(t2 !=nullptr){
                arr.push_back(t2->val);
                t2 = t2->child;
            }
            head = head->next;
        }
        sort(arr.begin(),arr.end());
        return convertArrToLinkedList(arr);
    }
};
