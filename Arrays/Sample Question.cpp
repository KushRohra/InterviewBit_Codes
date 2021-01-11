int Solution::solve(int A, int B) {
    long long int mod = 10000000;
    return ((A%mod) + (B%mod))%mod;
}

