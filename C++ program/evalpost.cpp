#include<bits/stdc++.h>
using namespace std;

// Function to evaluate the postfix expression
int evaluatePostfixExpression(string expression) {
    // Defining an stack of integer type.
    stack<int> st;

    // Traversing in the expression from left
    // to right.
    for (int i = 0; i < expression.length(); i++){
        char c = expression[i];

        // If 'c' is a digit (operand)
        if (c >= '0' && c <= '9'){
            // Convert 'c' in integer and
            // push it into the stack.
            int temp = (int)(c - '0');
            st.push(temp);
        }
        // Otherwise it is an operator.
        else{
            // Pop element from the stack.
            int op1 = st.top();
            st.pop();
            // Pop another element from the stack.
            int op2 = st.top();
            st.pop();

            // Use the switch case to deal with
            // the operand accordingly.
            switch(c){
                case '+':
                    st.push(op2 + op1);
                    break;
                case '-':
                    st.push(op2 - op1);
                    break;
                case '*':
                    st.push(op2 * op1);
                    break;
                case '/':
                    st.push(op2 / op1);
                    break;
            }
        }
    }

    // Return the element at the top
    // of the stack.
    return st.top();
}

// Main function
int main() {

    string s;
    cout<<"Enter expression:";
    cin>>s;
    cout <<
        evaluatePostfixExpression(s) << endl;
}
