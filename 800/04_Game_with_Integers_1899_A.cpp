#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int num;
        cin>>num;
        if(num%3==0){
            cout<<"Second"<<'\n';
        }else{
            cout<<"First"<<'\n';
        }
    }
    return 0;
}
