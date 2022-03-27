Code : Staircase using Dp
A child runs up a staircase with 'n' steps and can hop either 1 step, 2 steps or 3 steps at a time. Implement a method to count and return all possible ways in which the child can run-up to the stairs.
Input format :
The first and the only line of input contains an integer value, 'n', denoting the total number of steps.
Output format :
Print the total possible number of ways.
 Constraints :
0 <= n <= 10 ^ 4

Time Limit: 1 sec
Sample Input 1:
4
Sample Output 1:
7
Sample Input 2:
10
Sample Output 2:
274
  // Solution
  long staircase(int n)
{
    /* // using recursion -> it increases time complexity ...
    if(n == 0)
    {
        return 1;
    }
    if(n < 0)
    {
        return 0;
    }
    int op1=staircase(n-1);
    int op2=staircase(n-2);
    int op3=staircase(n-3);
    return op1+op2+op3;
	//Write your code here
    */
    long *ans = new long[n+1] ; // dynamically we created an array of size n+1;
    
    ans[0] = 1 ; // for step 1
    ans[1] = 1 ; // for step 2
    ans[2] = 2 ; // for step 3
    
    
    for(int i=3  ;i<=n ;i++){
    	
        ans[i] = ans[i-1] + ans[i-2] + ans[i-3] ;
    }
    
    return ans[n] ;
}
