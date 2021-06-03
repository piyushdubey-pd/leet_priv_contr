#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int z;
    cin>>z;
    vector<char> tasks(z);

    for(int i=0;i<tasks.size();i++)
    {
        int x; cin>>x;
        tasks.push_back(x);
    }
    unordered_map<char, int> m;
    for(int i=0;i<z;i++){
        for (int i = 0; str[i]; i++)
    {
        if (M.find(str[i]) == M.end())
        {
            M.insert(make_pair(str[i], 1));
        }
 
     
        else
        {
            M[str[i]]++;
        }
    }
    }
}