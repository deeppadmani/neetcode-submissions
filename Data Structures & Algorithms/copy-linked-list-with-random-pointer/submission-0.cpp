/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node* , Node*> copy;
        copy[nullptr] = nullptr;

        Node *cur = head;
        while(cur)
        {
            if(copy.find(cur) == copy.end())
                copy[cur] = new Node(0);
            copy[cur]->val = cur->val;

            if(copy.find(cur->next) == copy.end())
                copy[cur->next] = new Node(0);
            copy[cur]->next = copy[cur->next];

            if(copy.find(cur->random) == copy.end())
                copy[cur->random] = new Node(0);
            copy[cur]->random  = copy[cur->random];
            cur=cur->next;

            printMap(copy);
            cout << "---------------" << endl;
        }
        return copy[head];
    }
    void printMap(const unordered_map<Node*, Node*>& copy) {
        cout << "Original -> Copy Mapping:\n";
        for (const auto& pair : copy) {
            Node* original = pair.first;
            Node* copied = pair.second;
            if (original) {
                cout << "Original: " << original->val << " -> Copy: " << copied->val;
                if (copied->next) cout << " | Next: " << copied->next->val;
                if (copied->random) cout << " | Random: " << copied->random->val;
                cout << "\n";
            }
        }
    }
};
