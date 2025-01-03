// Function to calculate power of a number recursively
double power(double base, int exponent) {
   
    if (exponent == 0) {
        return 1;
    }
   
    else {
       
        if (exponent < 0) {
            base = 1 / base;
            exponent = -exponent;
        }
        double result = power(base, exponent / 2);
       
        if (exponent % 2 == 0) {
            return result * result;
        }
     
        else {
            return base * result * result;
        }
    }
}
