#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


#include <iostream>
using namespace std;

int main() {
 
int t;
cin>>t;
while(t--){ long long  int n, t1 = 1, t2 = 2,nextTerm = 0,sum=0;
    cin >> n;
    while(t1<=n) {
        // Prints the first two terms.
        if (t1%2==0){
            
          sum+=t1;  
       
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        
    }cout << (sum) <<endl;
 }   return 0;
}

