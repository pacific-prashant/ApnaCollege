#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int prec(char c){

    if(c == '^'){
        return 3;

    }
    else if(c == '/' || c == '*'){
        return 2;
    }
    else if(c == '+' || c == '-'){
        return 1;
    }
    else{
        return -1;
    }
}

string infixtoPrefix(string s){

    reverse(s.begin(),s.end());
    stack<char> st;
    string res;

    for(int i=0;i<s.length();i++){

        if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z'){

            res+=s[i];
        }
        else if(s[i]==')'){   // opening ko closing // change from infixto postfix se
            st.push(s[i]);
        }
        else if(s[i]=='('){   //  closing ko openning // change from infixto postfix se

            while (!st.empty() && st.top()!=')'){  //  closing ko openning // change from infixto postfix se
               res+=st.top();
               st.pop(); 
            }
            if(!st.empty()){
                st.pop();
            }
           
        }
        else{
            while(!st.empty() && prec(st.top())>prec(s[i])){
                res+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }

    while (!st.empty()){
        res+=st.top();
        st.pop();
    }
    
    reverse(res.begin(), res.end());
    return res;
}

int main(){ 

    cout<<infixtoPrefix("(a-b/c)*(a/k-l)")<<endl;
    return 0;
}

// "(a-b/c)*(a/k-l)"