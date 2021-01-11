int Solution::solve(int n) {
    if(n==1) return 1;
	if(n==2) return 3;
	
	bool odd = true;
	int ans =0;
	int num_loops=0,i,j,bit_shift,temp;
	i=1;
	while(2*(i-1)<n) { i*=2; num_loops++;}
	int t = i/2;
	if(n - i + 2 > i/2) odd=false;
	num_loops=1;
	while(n>2)	{
	    i=1;
	    bit_shift=0;
	    while(2*(i-1)<n) { 
			i*=2; 
			bit_shift++;
		}
	    temp = odd ? (1<<2*(bit_shift-1)) + 1 : (1<<2*bit_shift -1) + 1;
	    temp*=num_loops;
	    ans+=temp;
	    int x = n - (odd ? 0 : i/2) - i + 1;
	    bit_shift=0; j=1;
	    while(j-1<x) { j*=2; bit_shift++;}
	    while(i!=j) { i/=2; num_loops*=2;}
	    n = i - 2 + (odd ? 0 : i/2) + (x - i/2 + 1);	    
	}
	if(n==1) ans += num_loops;
	if(n==2) ans += 3*num_loops;
	return ans;
}

