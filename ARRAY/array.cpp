//to search an element

// #include <iostream>
// using namespace std;

// int main() {
//     int i, x = 8, index = -1;
//     int arr[5] = {3, 5, 6, 8, 9};

//     for (i = 0; i < 5; i++) {
//         if (arr[i] == x) {
//             index = i;
//             break;
//         }
//     }

//     cout << index;
//     return 0;
// }


//reverse array


// #include <iostream>
// using namespace std;

// int main() {
//   int arr[6] = {1,2,3,4,5,6};

//   int start = 0,end = 5;
//   while(start < end){
//     swap(arr[start],arr[end]);
//     start++;
//     end--;
//   }; 
//   for (int i =0;i<6;i++)
//   cout << arr[i]<< " ";

// }


//second max


// #include <iostream>
// #include <climits>  // for INT_MIN

// using namespace std;

// int main() {
//     int arr[7] = {1, 2, 3, 45, 35, 48, 10};
//     int firstMax = INT_MIN;
//     int secondMax = INT_MIN;

//     for (int i = 0; i < 7; i++) {
//         if (arr[i] > firstMax) {
//             secondMax = firstMax;
//             firstMax = arr[i];
//         } else if (arr[i] > secondMax && arr[i] != firstMax) {
//             secondMax = arr[i];
//         }
//     }

//     cout <<firstMax << endl;
//     cout <<secondMax << endl;

//     return 0;
// }

////////////////////////////////////////
// #include <iostream>
// #include <vector>
// #include <climits>
// using namespace std;

// class Solution {
//   public:
//     int getSecondLargest(vector<int> &arr) {
//         int n = arr.size();
//         if (n < 2) return -1;   // not enough elements

//         // largest element
//         int ans = INT_MIN;
//         for (int i = 0; i < n; i++) {
//             if (arr[i] > ans) {
//                 ans = arr[i];
//             }
//         }

//         // second largest
//         int second = INT_MIN;
//         for (int i = 0; i < n; i++) {
//             if (arr[i] != ans) {
//                 second = max(second, arr[i]);
//             }
//         }

//         // if no second largest found
//         if (second == INT_MIN) return -1;
//         return second;
//     }
// };



   

