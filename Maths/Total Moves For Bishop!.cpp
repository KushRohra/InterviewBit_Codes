int Solution::solve(int A, int B)
{
    int n=8;
    int x1, x2, y1, y2;
    x1 = A-1;
    x2 = B-1;
    y1 = n-A;
    y2 = n-B;
    return min(x1,y1)+min(x1,y2)+min(x2,y1)+min(x2,y2);
}

