#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

string str;
int longestPalindrome(int centers, int n, int i){
    if(centers-i==-1 || centers+i==n || str[centers-i]!=str[centers+i]){
        return 0;
    }
    if(str[centers-i]=='|'){
        return longestPalindrome(centers, n, i+1);
    }
    return 1+longestPalindrome(centers, n, i+1);
}

int main(){
    string input;
    cin>>input;
    int n,max_length=0,length;
    n = input.length();
    str="";
    for(int i=0; i<n-1; i++){
        str.push_back(input[i]);
        str.push_back('|');
    }
    str.push_back(input[n-1]);
    for(int i=0; i<str.length(); i++){
        length = longestPalindrome(i,str.length(),1);

        if(str[i]=='|')
            length = length*2;
        else
            length = length*2 + 1;

        if(max_length<length)
            max_length=length;
    }

    cout<<input.size() - max_length;
    return 0;
}
