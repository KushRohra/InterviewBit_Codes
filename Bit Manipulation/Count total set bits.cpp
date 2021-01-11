#define mod 1000000007
int Solution::solve(int A)
{   
    A++;
    int power=2, cnt=(A/2)%mod;
    while(power<=A)
    {
        int pairs=A/power;
        cnt=(cnt%mod+((pairs/2)*power)%mod)%mod;
        if(pairs%2==1)
        {
            cnt=(cnt%mod+(A%power)%mod)%mod;
        }
        power*=2;
    }
    return cnt%mod;
}

