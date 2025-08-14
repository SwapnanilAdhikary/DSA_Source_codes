/*
Definition of singly linked list:
struct ListNode
{
    int val;
    ListNode *next;
    ListNode()
    {
        val = 0;
        next = NULL;
    }
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
    }
    ListNode(int data1, ListNode *next1)
    {
        val = data1;
        next = next1;
    }
};
*/

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*> nodes_set;
        while(headA != NULL){
            nodes_set.insert(headA);
            headA = headA->next;
        }
        while(headB != NULL){
            if(nodes_set.find(headB)!= nodes_set.end()){
                return headB;
            }
            headB = headB->next;
        }
        return NULL;
    }
};
