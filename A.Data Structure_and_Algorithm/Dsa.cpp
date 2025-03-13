#include <bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define 	ll              long long
#define 	size1           1000001
#define 	bm              1000000007   //bigmod
#define		reset(arr,n,i)  fill(arr,arr+n,i)  //cbrt(n) means cube root
#define		rset(arr,x)  	memset(arr,x,sizeof(arr))2
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


// Linked List Practice

// Singly Linked List 

// class node{
//     public: 
//     int data;
//     node* next;

//     //Constructor
//     node(int val){
//         data = val;
//         next = NULL;
//     }
// };

// void insertAtTail(node* &head, int val){

//     node* n = new node(val);

//     if(head == NULL){
//         head = n;
//         return;
//     }

//     node* temp = head;
//     while(temp->next!=NULL){
//         temp = temp->next;
//     }
//     temp->next = n;
    
// }

// void display(node* head){
//     node* temp = head;
//     while(temp!= NULL){
//         cout << temp->data <<" ";
//         temp = temp->next;
//     }
//     cout <<"NULL"<< endl;

// }


// int main(){
//     // int n;
//     // cin >> n;

//     node* head = NULL;
//     insertAtTail(head,1);
//     insertAtTail(head,2);
//     insertAtTail(head,3);
//     display(head);


// }




// Binary Search

// int binarySearch(vector<int>arr, int tar){

//     int st =0;
//     int end=arr.size() -1;

//     while(st <= end){
//         int mid = st + (end - st ) /2;
//         if(tar > arr[mid]){
//             st = mid + 1;
//         }
//         else if(tar < arr[mid]){
//             end = mid - 1;
//         }

//         else{
//             return mid;
//         }
//     }

//     return -1;
// }

// int main(){
    
//     vector<int> arr1 = {-1,0,2,3,4,6,8,9,12};
//     int tar1 = 4;

//     cout << binarySearch(arr1, tar1) << endl;

// }



// Recursion bainary Search 

// int recBainarySearch(vector<int>arr. int tar, int st, int end){
    
//     if(st<= end){
//         int mid = st + (end - st)/2;

//         if(tar > arr[mid]){
//             //st = mid + 1;
//             return recBainarySearch(arr,tar,mid+1,end);
//         }
//         else if(tar < arr[mid]){
//             //end = mid - 1;
//         }
//         else{
//             return mid;
//         }
//     }
// }

// int main(){
//     vector<int> arr1 = {-1,3,5,6,8,9,13,15};
//     int tar1 = 40;
// }


// int linearSearch(int arr[], int n, int key){

//     for(int i=0;i<n;i++){
//         if(arr[i] == key){
//             return i;
//         }
//     }

//     return -1;
// }
// int main(){
    
//     int n;
//     cin >> n;

//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }

//     int key;
//     cin >> key;

//     cout << linearSearch(arr,n,key) << endl;
//     return 0;
// } 


// int linearSearch(int arr[], int n, int key){

//     for(int i=0;i<n;i++){
//         if(arr[i] == key){
//             return i;
//         }
//     }
//     return -1;
// }


// int main(){
//     int n;
//     cin >> n;
    
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }

//     int key;
//     cin >> key;

//     cout <<linearSearch(arr,n,key);
// }



// int linearSearch(int arr[], int n, int key){

//     for(int i=0;i<n;i++){
//         if(arr[i]==key){
//             return i;
//         }
//     }
//     return -1;
// }


// int main(){

//     int n;
//     cin >> n;

//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }

//     int key;
//     cin >> key;

//     cout << linearSearch(arr,n,key) << endl;

//     return 0;
// }


// factorial nirnoy

// int factIN(int n){
//     int fact = 1;

//     for(int i=1;i<n;i++){
//         fact *= i;
//     }

//     return fact;
// }

// int main(){
    
//     cout << factIN(4) << endl;
//     cout << factIN(5) << endl;
// }




// // Insertion Sort Algorithm 

// int main(){
//     int n;
//     cin >> n;

//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }

//     for(int i =1;i<n;i++){
//         int key = arr[i];
//         int j = i-1;

//         while(arr[j]> key && j>=0){
//             arr[j+1] = arr[j];
//             j--;
//         }
//         arr[j+1] = key;
//     }

//     for(int i=0;i<n;i++){
//         cout << arr[i] <<" ";
//     }
//     cout << endl;
// }


// int main(){
//     int n;
//     cin >> n;

//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }

//     for(int i=1;i<n;i++){
//         int key = arr[i];
//         int j= i-1;


//         while(arr[j]> key && j>=0){
//             arr[j+1] = arr[j];
//             j--;
//         }
//         arr[j+1] = key;
//     }

//     for(int i=0;i<n;i++){
//         cout << arr[i] <<" ";
//     }
//     cout << endl;
// }



// // Bubble Sort Algorithm 

// int main(){
//     int n;
//     cin >> n;

//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }

//     int counter = 1;

//     while(counter<n){
//         for(int i=0;i<n-counter;i++){

//             if(arr[i]> arr[i+1]){
//                 int temp = arr[i];
//                 arr[i] = arr[i+1];
//                 arr[i+1] = temp;
//             }  
//         }
//         counter++;
//     }

//     for(int i=0;i<n;i++){
//         cout << arr[i] <<" ";
//     }
//     cout << endl;
    
// }


// int main(){
//     int n;
//     cin >> n;
    
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }

//     int counter = 1;
//     while(counter<n){
//         for(int i=0;i<n-counter;i++){
//             if(arr[i] > arr[i+1]){
//                 int temp = arr[i];
//                 arr[i]= arr[i+1];
//                 arr[i+1]= temp;
//             }
//         }
//         counter++;
//     }

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout << endl;
// }


// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }

//     int counter = 1;
//     while(counter<n){
//         for(int i=0;i<n-counter;i++){
//             if(arr[i] > arr[i+1]){
//                 int temp = arr[i];
//                 arr[i] = arr[i+1];
//                 arr[i+1]= temp;
//             }
//         }
//         counter++;
//     }

//     for(int i=0;i<n;i++){
//         cout << arr[i]<<" ";
//     }
//     cout << endl;
// }







// Selection Sort Algorithm 


// int main(){
//     int n;
//     cin >> n;

//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }

//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[i]){
//                 int temp = arr[j];
//                 arr[j] = arr[i];
//                 arr[i] = temp;
//             }
//         }
//     }

//     for(int i=0;i<n;i++){
//         cout << arr[i] <<" ";
//     }

//     cout << endl;
// }


int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout << arr[i] <<" ";
    }
    cout << endl;
}



// Merge Sort Algorithm

// void mergeSort(int arr[], int l, int r){
//     if(l<r){
//         int mid = (l + r)/ 2;

//         mergeSort(arr,l,mid);
//         mergeSort(arr. mid+1, r);
        
//     }
// }

// int main(){


//     return 0;
// }












// Linked list 