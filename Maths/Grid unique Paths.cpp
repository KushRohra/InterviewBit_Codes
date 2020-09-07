int Solution::uniquePaths(int A, int B) {
    if(A==1 || B==1)
        return 1;
    long long ans = 1;
    for (int i = B; i < (A + B - 1); i++) {
        ans *= i;
        ans /= (i - B + 1);
    }
    return (int)ans;
}

