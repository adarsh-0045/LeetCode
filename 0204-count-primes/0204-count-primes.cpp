// class Solution {
// public:
//     int countPrimes(int n) {
//         int cnt=0;
//         if(n==0 || n==1) return 0;
//         for(int i=2;i<n;i++){
//         bool isPrime=true;
//         for(int j=2;j*j<=i;j++){
//             if(i%j==0){
//                 isPrime=false;
//                 break;
//             }
//         }
//         if(isPrime) cnt++;
//         }
//         return cnt;
//     }
// };
//Sieve of Eratosthenes.

class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2)
            return 0;
        vector<bool> isPrime(n, true);
        int cnt = 1;
        for (int i = 3; i < n; i += 2) {
            if (isPrime[i]) {
                cnt++;
                if ((long long)i * i < n) {
                    for (long long j = (long long)i * i; j < n; j += 2 * i) {
                        isPrime[j] = false;
                    }
                }
            }
        }
        return cnt;
    }
};;