#include <bits/stdc++.h>
using namespace std;

// int revInt(int n){
//     int ans = 0;
//     while(n!=0){
//         int last = n%10;
//         ans = ans * 10 +last;
//         n = n/10;
//     }
//     return ans;

// }
// int main(){
//     int n = revInt(747923940);
//     cout << n;
// }

// int main(){
//     int arr[]  = {2,54,1,76,32};
//     int n = 6;
//     int small = INT_MAX;
//     int idx = -1;
//     for(int i=0; i<n; i++){
//         if(arr[i]<small){
//             small = arr[i];
//             idx = i;
//         } else{
//             continue;
//         }
//     }
//     cout << idx << endl;
// }
// int linearSearch(int arr[], int size, int target){
//     for(int i = 0; i<size; i++){
//         if(arr[i] == target){
//             return i;
//             break;
//         } else{
//             continue;
//         }
//         return -1;
//     }
// }
// int main(){
//     int arr[6] = {2,3,6,7,8,2};
//     int n = 6;
//     int target = 6;
//     cout << linearSearch(arr, n, target);
// }

// int reverseArr(int arr[], int size){
//     int start = 0;
//     int end = size-1;
//     while(start<end){
//         swap(arr[start], arr[end]);
//         start ++;
//         end --;
//     }

// }

// int sumProd(int arr[], int size){
//     int sum = 0;
//     int prod = 1;
//     for(int i = 0; i<size; i++){
//         sum = sum+arr[i];
//         prod = prod*arr[i];
//     }
//    cout << sum << endl;
//    cout << prod;
// }

// int swapMaxMin(int arr[], int n){
//     int max = INT_MIN;
//     int min = INT_MAX;
//     int min_idx = -1;
//     int max_idx = -1;
//     for(int i = 0; i<n; i++){
//         if(arr[i] < min) {
//             min = arr[i];
//             min_idx = i;
//         }
//         if(arr[i] > max){
//             max = arr[i];
//             max_idx = i;
//         }
//     }
//     swap(arr[min_idx], arr[max_idx]);
// }
// int main(){
//     int arr[6] = {2,45,57,73,1,4};
//     int n = 6;
//     // reverseArr(arr, n);
//     swapMaxMin(arr, n);
//     for(int i = 0; i<n; i++){
//         cout << arr[i] << " ";
//     }
//     // sumProd(arr, n);
// }

// int uniqueVal(int arr[], int size) {
//     int new_arr[size];
//     int new_size = 0;
//     for (int i = 0; i < size; i++) {
//         int num = arr[i];
//         bool found = false;
//         for (int j = 0; j < new_size; j++) {

//             if (new_arr[j] == num) {
//                 found = true;
//                 break;
//             }
//         }
//         if (found == false) {
//             new_arr[new_size] = num;
//             new_size++;
//         }
//     }
//     for (int i = 0; i < new_size; i++) {
//         cout << new_arr[i] << " ";
//     }
//     return new_size;
// }

int commonVal(int a[], int an, int b[], int bn){
    
}
int main(){
    int a[6] = {2,54,7,4,79,7};
    int an = 6;
    int b[4] = {2,6,4,52};
    int bn = 4;
}

