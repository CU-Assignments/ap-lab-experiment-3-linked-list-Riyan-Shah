class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode();
        ListNode* current = dummy;  
        ListNode* p1 = list1;
        ListNode* p2 = list2;
                while (p1 != nullptr && p2 != nullptr) {
            if (p1->val <= p2->val) {
                current->next = p1; 
                p1 = p1->next;       
            } else {
                current->next = p2;  
                p2 = p2->next;       
            }
            current = current->next;  
        }
        if (p1 != nullptr) {
            current->next = p1;
        }
        if (p2 != nullptr) {
            current->next = p2;
        }
        return dummy->next;
    }
};
