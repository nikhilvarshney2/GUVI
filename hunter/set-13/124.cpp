#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int main(){
    int z;
    cin>>z;
    for(int i=z; i>0; i--){
        for(int j=1; j<i; j++){
            cout<<1<<" ";
        }
        cout<<1<<endl;
    }
    return 0;
}
