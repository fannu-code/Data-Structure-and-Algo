#include<iostream>
#include<vector>
using namespace std;

void square(int n){
    for (int i = 0; i < n; i++) {
        for(int k=0; k<i; k++){
            cout<<" ";
        }
        for(int j=0; j<n-i; j++){
            cout<<i+1;
        }
        cout<<endl;
    }
}
int main(){
    square(4);
    return 0;
}