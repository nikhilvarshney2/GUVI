#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n,temp,sum=0,z;
    bool flag=false;
    cin>>n;
    vector<int> v,prefix_sum;
    for(int i=0; i<n; i++){
        cin>>temp;
        sum+=temp;
        v.push_back(temp);
        prefix_sum.push_back(sum);
    }
    for(int i=1; i<n; i++){
        z=prefix_sum[n-1]-prefix_sum[i];
        if(prefix_sum[i]+v[i]==z){
            flag=true;
            break;
        }
    }
    if(flag==true){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }
    return 0;
}
