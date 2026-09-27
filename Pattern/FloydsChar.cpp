#include<iostream>
#include<vector>
using namespace std;

void square(char ch){
    int n=4;
    for (int i = 1; i <= n; i++) {
        for(int j=1; j<=i; j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}
int main(){
    square('A');
    return 0;
}