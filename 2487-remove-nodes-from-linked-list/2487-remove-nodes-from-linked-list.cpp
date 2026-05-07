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
    ListNode* reverse(ListNode* head){
        ListNode* prev = NULL;
        ListNode* curr = head;
        curr = head;
        // ListNode* after = curr->next;

        while(curr != NULL){
                    ListNode* after = curr->next;

            curr->next = prev;
            prev = curr;
            curr = after;
        } 
        return prev;
    }

    ListNode* removeNodes(ListNode* head) {
        
        head = reverse(head);
        int maxi = head->val;
        ListNode* curr = head;
        curr = head;
        while(curr->next != NULL ){
            if(curr->next->val < maxi){
               ListNode* del =  curr->next;
               curr->next = del->next;
               
            }
            else{
                curr= curr->next;
                maxi = curr->val;
            }
        }
        head = reverse(head);
    return head;
    }  
};