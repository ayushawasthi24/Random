#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

char consec(string s){
    int n = s.length();
    if(n==0){
        return '0';
    }
    for(int i=0; i<n-1; i++){
        if(s[i]==s[i+1]){
            return s[i];
        }
    }
    return '0';
}

string rem(string s, char c){
    string s2="";
    int count=0;
    for(char i:s){
       if(i!=c || count==2){
        s2+=i;
       }
       else count++;
    }   
    return s2;
}

int main()
{
    string s;
    cin >> s;
    int turn = 0;
    while(consec(s)!='0'){
        s = rem(s, consec(s));
        turn = !turn;
    }
    if(turn==0){
        cout << "No" << endl;
    }
    else 
        cout << "Yes" << endl;
    return 0;
}