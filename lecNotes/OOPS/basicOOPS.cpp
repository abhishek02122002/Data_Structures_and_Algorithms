#include <iostream>
using namespace std;
class abc
{
private:
     int phoneNumber[10];

public:
     int age;
     int height;
     int weight;
     string name;
     

     // function is called behaviour in class
     int namefxn(int c)
     {
          int j = 0;
          int sum = 0;
          for (int j = 0; j < c; j++)
          {
               sum = sum + j;
          }
          return sum;
     }
};
int main(void)
{
     abc raw;
     // raw.phoneNumber=383944;

     raw.age = 10;
     raw.name = "Abhishek";
     cout << raw.namefxn(4) << endl;
     cout << raw.name;
     return 0;
}
