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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr = new ListNode(0);
        curr->next = head;
        if(head->next == NULL){
            delete head;
            return NULL;
        }
        ListNode*s = curr;
        ListNode*f = curr;
         for(int i = 0; i <=n; i++){
            f = f->next;
        } 
        while(f !=NULL ){
            s= s->next;
            f= f->next;
        }
       
            ListNode* del = s->next;
            s->next= del->next;
            delete del;
        
        return curr->next;




        
    }
};