#include <iostream>
using namespace std;

int main()
{
  int i, term1 = 0, term2 = 1, nxtterm, n;
  nxtterm = term1 + term2;

  cout << "Enter the number of terms: " << endl;
  cin >> n;

  cout << "Fibonacci series is  " << endl
       << term1 << endl
       << term2 << endl;

  for (i = 0; i <= n - 3; ++i)
  {
    cout << nxtterm << endl;
    term1 = term2;
    term2 = nxtterm;
    nxtterm = term1 + term2;
  }
  return 0;
}
