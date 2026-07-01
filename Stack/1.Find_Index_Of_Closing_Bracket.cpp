#include<iostream>
using namespace std;

    

// class Solution {
//   public:
//     int closing(string &s, int pos) {
//         int cnt = 0;
//         for (int i = pos; i < s.size(); i++) {
//             if (s[i] == '[') cnt++;
//             else if (s[i] == ']') cnt--;

//             if (cnt == 0) return i;
//         }
//     return -1;
//     }
// };
bool LinearSearch(int arr[] , int target , int n){
    for(int i=0; i<n; i++){
        if(arr[i] == target){
            return true;
        }
    }
    return false;
}

int main(){
    int arr[] = {2,4,6,8,10};
    int target = 6;
    int n=5;
    LinearSearch(arr,target,n);

    return 0;
}



