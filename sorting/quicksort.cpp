// // Quick sort

// //  4 2 7 5 3 1 8 6
// //  

//     ...... q 0000000

//     p              r

//     int q = findq(p, r);
//     Quick(p,q-1);
//     Quick(q+1,r);

//     FindQ(int p, int r, int array){

//     }

//     O(N^2);


//     fib(0) = 1;
//     fib(1) = 1;
//     fib(n>1) = fib(n-1)+fib(n-2);


// Nth;

#include<bits/stdc++.h>
using namespace std;

int fib(int n) {

    if(n == 0) return 1;
    if(n == 1) return 1;
    if(n > 1) return fib(n-1) + fib(n-2);
}

// T(n) = T(n-1) + T(n-2);
// O(N);


// int fib(int n) {

//     if (n == 0) return 1;
//     if (n == 1) return 2;

//     if(n > 1){
//         for(int i=2;)
//     }
// }

signed main(){
    int n = 10;
    cout<<fib(10)<<endl;
    return  1;
}


// git restore soft & hard ?

// inline tags  <p> This is <strong>yashwanth<strong> </p>