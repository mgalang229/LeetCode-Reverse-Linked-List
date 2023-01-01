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
    ListNode* reverseList(ListNode* head) {
        temp_head = head;
        ListNode* trav = temp_head;
        if(trav != nullptr && trav->next != nullptr) {
            recurse(trav);
            trav->next = nullptr;
        }
        head = temp_head;
        return head;
    }
private:
    ListNode* temp_head;
    
    void recurse(ListNode* trav) {
        if(trav->next->next != nullptr) {
            recurse(trav->next);
        } else {
            temp_head = trav->next;
        }
        trav->next->next = trav;
    }
};
