#include <bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* rotateList(ListNode* head, int K) {
    //Complete the function
    if (head == nullptr || head->next == nullptr || K == 0) return head;

    ListNode *temp = head;

    int cnt=0;

    while(temp->next != nullptr) {
        temp = temp->next;
        cnt++;
    }

    if (cnt) cnt++;

    // cout << "count :"<<cnt<<endl;

    // cout << "temp " << temp->val << endl;

    temp->next = head;

    K = K % cnt;

    for(int i=0; i< cnt - K; i++){
        temp = temp->next;
    }

    // cout << "after rotation temp " << temp->val << endl;

    head = temp->next;

    temp->next = nullptr;
    
    return head;
}

ListNode* GetList(vector<int> &num) {
    ListNode* head = nullptr;

    if(num.empty()) {
        return head;
    }

    ListNode* cur = head;
    
    for(int i  = 0; i < (int)num.size(); i++) {
        ListNode* temp = new ListNode(num[i]);
        if(!cur) {
            cur = temp;
            head = cur;
        }
        else {
            cur->next = temp;
            cur = temp;
        }
    }
    
    return head;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
#endif 

    int n;
    cin >> n;

    vector<int> num;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        num.push_back(x);
    }

    int K;
    cin >> K;

    ListNode* head = GetList(num);

    head = rotateList(head, K);

    while(head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << "\n";
    
    return 0;
}