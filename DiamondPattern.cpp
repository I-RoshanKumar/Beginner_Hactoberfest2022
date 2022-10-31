#include<bits/stdc++.h>

using namespace std;
int main(){
    int lines = 5;
    //printing the diamond pattern...
    for (int i = 1; i <= lines;i++){
        for (int j = 1; j <= lines - i;j++){
            cout << " ";
        }
        for (int j = 1; j <= 2*i-1;j++){
            cout << "*";
        }
        cout << endl;
    }
    for (int i = lines; i >0; i--)
    {
        for (int j = 1; j <= lines - i;j++){
            cout << " ";
        }
        for (int j = 1; j <= 2*i-1;j++){
            cout << "*";
        }
        cout << endl;
    }

        return 0;
}
