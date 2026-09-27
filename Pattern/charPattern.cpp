#include<iostream>
#include<vector>
using namespace std;

void square(char ch='A'){
    char originalCh = ch; // Store the original character
    for (int i = 0; i < 4; i++) {
        ch=originalCh; // Reset ch to the original character at the start of each row
        for(int j=1; j<=4; j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}
int main(){
    square('E');
    return 0;
}