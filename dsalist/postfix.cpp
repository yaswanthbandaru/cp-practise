/*
Link: https://www.geeksforgeeks.org/stack-set-4-evaluation-postfix-expression/

INPUT: "2 3 1 * + 9 -"
OUTPUT: "-4"
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif 
//     char str[] = "2 3 1 * + 9 -";
//    // int n = str.length();
    string str;
    getline(cin, str);
    stack<int> s;
    for(int i=0; i<str.length(); i++){
        if(str[i] <= '9' && str[i] >= '0') {
            s.push(str[i]-'0');
            cout<<s.top()<<" ";
        }else {
            int val1, val2;
            
            switch (str[i])
            {
            case ' ':
                break;
                
            case '+':
                val1 = s.top();s.pop();
                val2 = s.top();s.pop();
                /* code */
                s.push(val2+val1);
                break;

            case '-':
                val1 = s.top();s.pop();
                val2 = s.top();s.pop();
                /* code */
                s.push(val2-val1);
                break;

            case '*':
                val1 = s.top();s.pop();
                val2 = s.top();s.pop();
                /* code */
                s.push(val2*val1);
                break;
            
            case '/':
                val1 = s.top();s.pop();
                val2 = s.top();s.pop();
                /* code */
                s.push(val2/val1);
                break;
            
            default:
                break;
            }
        }
    }

    cout<<s.top()<<endl;

  
}

