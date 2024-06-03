/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* val) {
        if(val == NULL || val->next == NULL) return val;
        ListNode* odd=val;
        ListNode* even=val->next;
       ListNode* evenhead = val->next;
        while(even != NULL && even->next!=NULL){
            odd->next = odd->next->next;
            even->next=even->next->next;
            odd = odd->next;
            even=even->next;
        }
        odd->next=evenhead;
        return val;
    }
};
