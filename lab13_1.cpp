#include <iostream>
using namespace std;
#include <ctime>
typedef long long ll;

ll fibonacci(ll);

int main(){
    clock_t start = clock();
    cout << "Result: " << fibonacci(50) << "\n";
    clock_t end = clock();
    double elapsed = double(end - start)/CLOCKS_PER_SEC;
    cout << "Elapsed Time: " << elapsed << " seconds.";
    return 0;
}

ll fibonacci(ll x){
    if(x <= 1){
        return x;
    }
    else{
        return fibonacci(x-1) + fibonacci(x-2);
    }
}


