#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<climits>

#define 	ll              long long
#define 	size1           1000001
#define 	bm              1000000007   //bigmod
#define		reset(arr,n,i)  fill(arr,arr+n,i)  //cbrt(n) means cube root
#define		rset(arr,x)  	memset(arr,x,sizeof(arr))
#define		_ceil(x,y)      ((x)/(y))+((x)%(y)>0)
#define		INF             1e18 + 10
#define		mod             1e9 + 7//998244353;
#define 	endf            "\n"

#define		_cpy(c,a,n)     for(int i=0;i<n;i++) c[i]=a[i];
#define 	_iin(a,n)       int a[n]; for(int i=0;i<n;i++) cin>>a[i]
#define 	_lin(a,n)       ll a[n]; for(int i=0;i<n;i++) cin>>a[i]
#define 	_in(a,n)        for(int i=0;i<n;i++) cin>>a[i]
#define 	_out(a,n)       for(int i=0;i<n;i++) cout<<a[i]<<" "; cout<<endl
#define		_celi(x,y)      (x+y-1)/(y)  //use this version of _ceil [note: ceil is risky]

#define 	fopr()          freopen("input.txt", "r", stdin)
#define 	fopw()          freopen("output.txt", "w", stdout)
#define 	FastIO          ios_base::sync_with_stdio(false), cin.tie(0)

// Math :
void mns(int *x, int *y)	{if(*x>=*y) *x-=*y, *y=0; else *y-=*x, *x=0;}

// Debuging :
#define		_dbg(_x,_y,_z)  cout<<_x<<" "<<_y<<" "<<_z<<endl
#define		_dbl			cout<<"_________________ "<<endl
#define		_db(_x,_y)      cout<<_x<<" "<<_y<<endl

using namespace std;

// class TwoStack {
//     int *arr;
//     int top1;
//     int top2;
//     int size; 

//     public:
//         TwoStack(int s){
//             this -> size = s;
//             top1= -1;
//             top2 = s;
//             arr = new int(s);

//         }

//     void push1(int num){

//     }
//     void push2(int num){

//     }
//     void pop1(){

//     }
//     void pop2(){

//     }
// };


// int main(){
//     int age;
//     cout << "Enter a number of age:";
//     cin >> age;

//     if(age>= 18){
//         cout <<"You can vote" << endl;
//     }
//     else{
//         cout <<"You can not vote" << endl;
//     }

//     return 0;
// }


// Even or odd number
// int main(){
//     int n;

//     cout <<"Enter a number: ";
//     cin >> n;

//     if(n%2 == 0){
//         cout <<"Even Number"<< endl;
//     }
//     else{
//         cout<<"Odd number"<< endl;
//     }

//     return 0;
// }

//lowercase or uppercase

// int main(){
//     char ch;
//     cin >> ch;

//     if(ch >='a' && ch <='z'){
//         cout <<"Lowecase Letter" << endl;
//     }
//     else{
//         cout <<"Uppercase Letter" << endl;
//     }

//     return 0;
// }



// Ternary Statement

// int main(){
//     int n;
//     cin >> n;

//     cout << (n>=0 ? "Positive" : "Negative");
// }



// Loops 

// Print number 1 to 100
// Print number 1 to n

// int main(){
//     int n;
//     cin >> n;
//     int count = 1;

//     while(count <= n){
//         cout << count <<" ";
//         count++;
//     }
//     cout << endl;
//     return 0;
// }



// Sum of numbers from 1 to n;

/*foor Loop*/
// int main(){
//     int n;
//     cin >> n;

//     int sum =0;
//     for(int i=1;i<=n;i++){

//         sum = sum + i;
//     }

//     cout<<"Sum is = " << sum;
// }

/*while loop*/

// int main(){
//     int n;
//     cout <<"Enter any postive number: ";
//     cin >> n;

//     int sum = 0;
//     int i = 1;

//     while(i<=n){
//         sum = sum + i;
//         i++;
//     }
//     cout << "Sum is = " << sum << endl;
// }

/*do while loop*/

// int main(){
//     int n;
//     cout <<"Enter any positive number : ";
//     cin >> n;

//     int i = 1;
//     int sum = 0;

//     do{
//         sum = sum + i;
//         i++;
//     }while(i<=n);

//     cout <<"Sum is = " << sum << endl;

// }


/*Sum of all Odd number from 1 to n */
// int main(){
//     int n;
//     cin >> n;

//     int oddSum = 0;

//     for(int i=1;i<=n;i++){
//         if(i%2 != 0){
//             oddSum += i;
//         }
//     }

//     cout <<"Odd Sum = " << oddSum << endl;

//     return 0;
// }

// int main(){
//     int n;
//     cin >> n;

//     int oddSum  = 0;
//     int i=1;
//     while(i<=n){
//         if(i%2 !=0){
//             oddSum += i; 
//         }
//         i++;
        
//     }
//     cout <<"Odd Sum = " << oddSum << endl;
    

//     return 0;
// }


// int main(){
//     int n;
//     cin >> n;

//     int oddSum =0;

//     int i = 1;

//     do{
//         oddSum += i;
//         i= i+2;
//     }
//     while(i<=n);


//     cout <<"Odd Sum = " << oddSum << endl;
//     return 0;
// }


// Check prime number or not
// int main(){
//     int n;
//     cin >> n;

//     bool isPrime = true;

//     for(int i=2;i*i <=n;i++){
//         if(n%2==0){
//             // cout <<"Non Prime Number"<<endl;
//             isPrime = false;
//             break;
//         }
//     }

//     if(isPrime== true){
//         cout<<"Prime Number"<< endl;
//     }
//     else{
//         cout<<"Non Prime Number"<<endl;
//     }
// }


// int main(){
//     int n;
//     cout <<"Enter a Number : ";
//     cin >> n;

//     bool isPrime = true;

//     for(int i=2;i*i<=n;i++){
//         if(n%2==0){
//             isPrime = false;
//             break;
//         }
//     }

//     if(isPrime == true){
//         cout<<"Prime number"<<endl;
//     }
//     else{
//         cout <<"Non Prime Number"<< endl;
//     }

//     return 0;
// }


// Nested loops

// int main(){
//     int n;
//     cin >> n;

//     for(int i=1;i<=n;i++){
//         int m = 5;
//         for(int i=1;i<=m;i++){
//             cout<<" * ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// Linked List 

class Node(){
    public:
        int data;
        Node* next;

        Node(int val){
            data = val;
            next = NULL;
        }
}

class List{
    Node* head;
    Node* tail;

public:
    List(){
        head = tail = NULL:
    }
};


int main(){

    return 0;
}



