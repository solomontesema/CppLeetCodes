#include <iostream>

using namespace std;

class ListNode {
public:
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
    /*
    Q: Linked List Cycle: Given a linked list, determine if it has a cycle in it.
    */
public:
    bool hasCycle(ListNode *head) {
        if (head == NULL || head->next == NULL) {
            return false;
        }
        
        ListNode *slow = head;
        ListNode *fast = head->next;
        
        while (slow != fast) {
            if (fast == NULL || fast->next == NULL) {
                return false;
            }
            
            slow = slow->next;
            fast = fast->next->next;
        }
        
        return true;
    }
};

int main() {
    Solution s;
    
    ListNode *head1 = new ListNode(3);
    head1->next = new ListNode(2);
    head1->next->next = new ListNode(0);
    head1->next->next->next = new ListNode(-4);
    head1->next->next->next->next = head1->next; // Create a cycle
    
    cout << s.hasCycle(head1) << endl; // Output: 1
    
    ListNode *head2 = new ListNode(1);
    head2->next = new ListNode(2);
    head2->next->next = new ListNode(3);
    
    cout << s.hasCycle(head2) << endl; // Output: 0
    
    return 0;
}

