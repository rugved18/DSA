// check if number is palindrom
void isPalindrom(int n){
    int original =n;
         int result =0;
    while(n>0){
        int lastdigit =n%10;
        n=n/10;
         result =(result*10)+lastdigit;
    }
    if(result == original){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }

}
