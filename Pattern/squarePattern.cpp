#include<iostream>
#include<vector>
using namespace std;

void square(int n){
    for (int i = 0; i < n; i++) {
        for(int j=1; j<=n; j++){
            cout<<j;
        }
        cout<<endl;
    }
}
int main(){
    square(4);
    return 0;
}