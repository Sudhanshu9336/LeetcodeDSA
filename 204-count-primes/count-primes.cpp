class Solution {
public:
    int countPrimes(int n) {
        if(n<=2)return 0;
        int count=0;
        vector<int>arr(n+1,1);
        arr[0]=0;
        arr[1]=0;
        for(int i=2;i<n;i++){
            if(arr[i]==1){
                for(int j=i;j<=n;j+=i){
                    arr[j]=0;
                }
                count++;
            }
        }
        return count;
    }
};
// class Solution {
// public:

// bool isPrime(int num) {
//     if (num < 2) return false;
    
//     for (int i = 2; i < num; i++) {  // har ek divisor check
//         if (num % i == 0) {
//             return false;
//         }
//     }
//     return true;
// }
  
//     int countPrimes(int n) {
//         int count=0;
//         for(int i=2;i<n;i++){
//             if(isPrime(i)){
//                 count++;
//             }
//         }
//         return count;
//     }
// };