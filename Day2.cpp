/*
Day 2
Valid Parentheses
Type - EASY
Given a strings containing just the characters '(' , ')' , '{' , '}' , '['&']' ,determine if the input string is valid. 
An input string is valid if: 
Open brackets must be closed by the same type of brackets. 
Open brackets must be closed in the correct order. 
Every close bracket has a corresponding open bracket of the same type.


Asked in Google, Amazone, Microsoft, Paypal
*/

#include<bits/stdc++.h>
using namespace std;

string validBrackets(string str){
    stack <char> st;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == '(' || str[i] == '{' || str[i] == '['){
            st.push(str[i]);
        }else{
            if(st.empty() || str[i] == ')' && st.top() != '(' || str[i] == '}' && st.top() != '{' || str[i] == ']' && st.top() != '['){
                return "Not Valid";
            }
            st.pop();
        }
    }
    return "Valid";
}

int main(){
    string str = "{}([])";
    cout << validBrackets(str) << endl;
    str = "{{{{]]]}})";
    cout << validBrackets(str);
    return 0;
}