//Prime Number
void prime(int n){
    if (n<=1){
        cout<<"not a prime number"<<endl;
        return;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i == 0){
           cout<<"not a prime number"<<endl;
           return;
        }
    }
            cout<<" prime number"<<endl;  
}
