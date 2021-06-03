#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int> s;
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++){
        if(str[i]=='(')
        {
            s.push(-1);
        }
        else{
            if(s.top()==-1){
                s.pop();
                s.push(1);
            }
            else{
                int score=0;
                while(s.top()!=-1){
                    score+=s.top();
                    s.pop();
                }
                s.pop();
                s.push(2*score);
            }
        }
    }
    int fnl=0;
    while(!s.empty())
    {
        fnl+=s.top();
        s.pop();
    }
    cout<<fnl<<endl;
}