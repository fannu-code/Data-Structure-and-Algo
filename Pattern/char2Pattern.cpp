#include<iostream>
#include<vector>
using namespace std;

void square(char ch){
    for (char a = 'A'; a <= ch; a++) {
        for(char b='A'; b<=a; b++){
            cout<<a<<" ";
        }
        cout<<endl;
    }
}
int main(){
    square('D');
    return 0;
}