#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int count=0;
        int maxa=0;
        int size;
        cin>>size;
        int arr[size];
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
        for(int i=0;i<size;i++){
            if(arr[i]==0){
                count++;
                if(count>maxa)
                maxa=count;
            }
            else 
            count=0;
        }
        cout<<maxa<<endl;
    }
}
