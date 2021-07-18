
long int reverse(long int x)
{
    long int rem = 0;
    long int val;
    while(x > 0)
    {    
        val = x % 10;
        rem = val + rem*10;
        x /= 10;
    }
    return rem;
}

bool isPalindrome(int x){
    bool flag = false;
    // printf("%ld",reverse(x));
    if (x == 0)
    {
        flag = true;
    }
    else if  ((x > 0)&&(reverse(x) == x)) 
    {
        flag = true;
    }
    return flag;
        
}
