// Example program
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
class sample
{
    public:
    int n, num, digit, rev = 0;
    int calc()
    {
    do
     {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     } while (num != 0);

     if (n == rev)
         cout << " The number is a palindrome";
     else
         cout << " The number is not a palindrome";
         return 0;
    }
};
int main()
{
  sample s;
  cout << "Enter a positive number: ";
  cin >> s.num;
  s.n =s.num;
  s.calc();
  return 0;
}
