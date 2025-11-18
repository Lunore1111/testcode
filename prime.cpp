#include <iostream>
#include <math.h>
using namespace std;
//lets write a prime function which will determine prime or not 

bool prime(long long int n) {
    if (n < 2) return false;
    for (long long int i = 2 ; i * i <= n ; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

//prime function 
//prime is 
bool primes(int n){
    if(n<2) return false;

    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
int main() {

for(int i=2;i<100;i++){
    cout<<i<<" "<<
    primes(i)<<'\n';
}

}

