#include<simplecpp>

long int V(int D){
    if(D == 1) return 1;
    else if(D == 2) return 2;
    else{
        long int r1 = V(D-1) + V(D-2);
        return r1;
    }
}

int main(){
    for(int i=1; i<50; i++)
        cout << i <<") "<< V(i) << endl;
}
