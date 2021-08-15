#include<bits/stdc++.h>

using namespace std;

int main()
{

    string s[] = {"a","a","a"};

    string word = "ab";
    int counter = 0;

    int ans = INT_MAX;

    for(int i = 0; i < 3; i++){
        int p = word.find(s[i]);
        if(p < ans && p != -1){
            counter++;
        }
    }
    cout << counter << endl;
}
