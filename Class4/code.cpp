#include<iostream>
using namespace std;

// code for extraction of digits from a number
/* First code
int main(){
    int n, lastDigit, W;
    cout<<"Enter a number: ";
    cin>>n;
    while(n>0){
        lastDigit = n%10;
        cout<<"Last digit : "<<lastDigit<<endl;
        n = n/10;
    }
}
*/

//in the second code, we have to count the number of digits in the number so we will place a counter in the loop and increment it as the loop proceeds

//Revesing the number
/*
int main(){
    int n, revNo=0, lastDigit;
    cin>>n;
    while(n>0){
        lastDigit = n%10;
        n = n/10;
        revNo = (revNo*10) + lastDigit;
    }
    cout<<revNo;
}
*/

// Checking the number is palindrome or not -> should match with the original number from front and back ; just add a if check statement 

//Checking the number of times a number can be divided or the factors of the number

//Checking Prime number -> A number that has exactly 2 factors - 1 and the number itself

// GCD/HCF - Greatest Common Divisor/Highest Common Factor -> The largest number that divides both the numbers 

// Ecuiladian Algorithm / Equilateral Algorihtm -> GCD(N1, N2) = GCD(N1-N2, N2)  condition N1>N2