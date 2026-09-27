#include<iostream>
#include<vector>
using namespace std;

void square(int n){
    for (int i = 1; i <= n; i++) {
        for(int j=i; j>=1; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
int main(){
    square(4);
    return 0;
}