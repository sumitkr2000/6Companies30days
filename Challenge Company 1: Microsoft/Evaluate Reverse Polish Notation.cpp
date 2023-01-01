class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        stack<long> st;
        
        for(auto it: tokens) {
            if(it == "+" || it == "-" || it == "*" || it == "/") {
                long num1 = st.top();
                st.pop();
                long num2 = st.top();
                st.pop();
                
                if(it == "+") {
                    st.push(num2 + num1);
                }
                else if(it == "-") {
                    st.push(num2 - num1);
                }
                else if(it == "*") {
                    st.push(num2*num1);
                }
                else {
                    st.push(num2/num1);
                }
            }
            else {
                st.push((long)stoi(it));
            }
        }
        return (int)st.top();
    }
};
