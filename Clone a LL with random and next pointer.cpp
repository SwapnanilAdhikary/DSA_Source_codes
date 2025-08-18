/*
Definition of singly linked list:
struct ListNode
{
    int val;
    ListNode *next;
    ListNode *random;
    ListNode()
    {
        val = 0;
        next = NULL;
        random = NULL;
    }
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
        random = NULL;
    }
    ListNode(int data1, ListNode *next1, ListNode* r)
    {
        val = data1;
        next = next1;
        random = r;
    }
};
*/

class Solution {
public:
    ListNode* copyRandomList(ListNode* head) {
        if(!head) return NULL;
        unordered_map<ListNode*,ListNode*>mpp;
        ListNode* temp = head;
        while(temp !=NULL){
            ListNode* newNode = new ListNode(temp->val);
            mpp[temp] = newNode;
            temp=temp->next;
        }
        temp=head;
        while(temp != NULL){
            ListNode* copyNode = mpp[temp];
            copyNode->next = mpp[temp->next];
            copyNode->random = mpp[temp->random];
            temp=temp->next;
        }
        return mpp[head];
    }
};
