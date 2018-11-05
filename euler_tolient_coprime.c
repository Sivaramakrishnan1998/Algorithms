  #include<stdio.h>
int phi(int n) {
    int result = n,i;
    for( i = 2; i * i <= n; ++i)
        if(n % i == 0) {
            while(n % i == 0)
                n /= i;
            result -= result / i;
        }
    if(n > 1)
        result -= result / n;
    return result;
}
int main()
{
  printf("%d\n",phi(4));
  return 0;
}
