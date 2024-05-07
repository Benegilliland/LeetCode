class Solution {
private:
    int doubleNext(ListNode* node) {
        if (node == nullptr) return 0;
        int num = 2 * node->val + doubleNext(node->next);
        node->val = num % 10;
        return num / 10;
    }
public:
    ListNode* doubleIt(ListNode* head) {
        if (doubleNext(head)) {
            ListNode *next = new ListNode(1, head);
            head = next;
        }

        return head;
    }
};
