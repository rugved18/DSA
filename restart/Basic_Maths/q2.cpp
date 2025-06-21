//factorial of any number 
int factorialOfANumber(int n){
    // Itterative solution of factorial of any number 
int result = 1;
for(int i=2;i<=n;i++)
    result = result*i;
    return result;
}

int factorial(int n ){
// recursive solution of factorial of any number 
if (n==0) 
return 1;

return n*factorial(n-1);
}
