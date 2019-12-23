#include <iostream>
using namespace std;
int main() {

   double product=1.0;

   for ( int i=3 ; i <= 50; i += 3 )
      product *= i;

   cout << product <<endl;

   return 0;
}
