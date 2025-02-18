#include<iostream>
using namespace std;
/* Printing N times using recursion
void print(int i, int n){
    if(i>=n){
        return;
    }
    cout<<"Prabhjeet"<<endl;
    print(i+1, n);
}
int main(){
    int n;
    cin>>n;
    print(1, n);
    return 0;
}
    Time complexity - O(n)
*/
/* printing the nmbers from 1 to n using recursion
void print(int i, int n){
    if(i>=n){
        return;
    }
    cout<<i<<endl;
    print(i+1, n);
}

int main(){
    int n;
    cin>>n;
    print(1, n);
    return 0;
}
*/

/* printing the numbers from n to 1 using recursion -> use i-1 */

/*Printing from N to 1 using backtracking */
/*
void print(int i, int n){
    if(i>n){
        cout<<"hello"<<endl;
        return;
    }
    print(i+1, n);
    cout<<i<<endl;
}

int main(){
    int n;
    cin>>n;
    print(1, n);
}
*/
// printing sum of n numbers using recursion
void print(int i, int sum){
    if(i<1){
        cout<<sum<<endl;
        return;
    }
    print(i-1, sum+i);
}

int main(){
    int n;
    cin>>n;
    print(n, 0);
    return 0;   
}