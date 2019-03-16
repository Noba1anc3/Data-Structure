public static int Fibonacci(int n)
{
        if(n <= 0)
            return n;
        int []memo = new int[n+1];        
        for(int i = 0; i <= n; i++)
            memo[i] = -1;
        return fib(n, memo);
}
    
public static int fib(int n,int []memo)
{
        if(memo[n] != -1)
            return memo[n];
        //如果已经求出了fib(n)的值直接返回，否则将求出的值保存在memo备忘录中
        
        if(n <= 2)
            memo[n] = 1;
        else 
            memo[n] = fib(n-1, memo) + fib(n-2, memo);  
        
        return memo[n];
}
