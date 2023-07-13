class Solution {
public:
    int evalRPN(vector<string>& tokens) {
       stack<int>s;
        for( string it:tokens){
           
            if(it=="+"){
                 int a=s.top();
                s.pop();
                int b=s.top();
                 s.pop();
                s.push(b+a);
            }
            else if(it=="-"){
                 int a=s.top();
            s.pop();
            int b=s.top();
            s.pop();
                s.push(b-a);
            }
            else if(it=="*"){
                 int a=s.top();
            s.pop();
            int b=s.top();
            s.pop();
                s.push(b*a);
            }
            else if(it=="/"){
                 int a=s.top();
            s.pop();
            int b=s.top();
            s.pop();
                s.push(b/a);
            }
            else 
                s.push(stoi(it));
        }
        return s.top();
    }
};