#include<iostream>
#include<vector>
using namespace std;

void square(int num){
    int n=4;
    for (int i = 1; i <= n; i++) {
        for(int j=1; j<=i; j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}
int main(){
    square(1);
    return 0;
}