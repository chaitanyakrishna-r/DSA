#include<iostream>
using namespace std;

void triplet(int arr[],int n, int m){
    bool found=false;
    for(int i=0; i<n;i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                if(arr[i]+arr[j]+arr[k] == m){
                    cout<<arr[i]<<" + "<<arr[j]<<" + "<<arr[k]<<" = "<<m<<endl;
                    found=true;
                }
            }
        }
    }
    if(!found){
        cout<<"-1";
    }
}

int main(){
    int arr[6]={1,2, 3, 1, 2, 3};
    triplet(arr,6,6);
    return 0;
}
// by doing sort we can fing unquie numbers

// #include <iostream>
// #include <algorithm> // For std::sort
// using namespace std;

// Function to find all distinct triplets in the array that add up to the given sum
// void findTriplets(int arr[], int n, int K) {
//     bool found = false;

//     // Sort the array
//     sort(arr, arr + n);

//     // Iterate through each triplet combination
//     for (int i = 0; i < n - 2; i++) {
//         // Skip duplicates of arr[i]
//         if (i > 0 && arr[i] == arr[i - 1]) {
//             continue;
//         }
//         for (int j = i + 1; j < n - 1; j++) {
//             // Skip duplicates of arr[j]
//             if (j > i + 1 && arr[j] == arr[j - 1]) {
//                 continue;
//             }
//             for (int k = j + 1; k < n; k++) {
//                 // Skip duplicates of arr[k]
//                 if (k > j + 1 && arr[k] == arr[k - 1]) {
//                     continue;
//                 }
//                 if (arr[i] + arr[j] + arr[k] == K) {
//                     // Print the triplet
//                     cout << "{" << arr[i] << ", " << arr[j] << ", " << arr[k] << "}" << endl;
//                     found = true;
//                 }
//             }
//         }
//     }

//     if (!found) {
//         cout << "-1" << endl;
//     }
// }

// int main() {
//     int arr[] = {1, 2, 3, 1, 2, 3};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int K = 6;
    
//     findTriplets(arr, n, K);

//     return 0;
// }
