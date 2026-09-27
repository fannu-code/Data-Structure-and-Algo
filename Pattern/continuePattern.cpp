#include<iostream>
#include<vector>
using namespace std;

void square(char st){ 
    int n=3; // Size of the square;
    for (int i = 0; i < n; i++) {
        for(int j=1; j<=n; j++){
            cout<<st<<" ";
            st++;
        }
        cout<<endl;
    }
}
int main(){
    square('A');
    return 0;
}