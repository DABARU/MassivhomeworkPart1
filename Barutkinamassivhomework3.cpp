#include <iostream>

using namespace std;

int sum= 0;
int main()
{
const int n = 10;
    int arr[n];
for(int i=0; i>n; i++)
       arr[i] = rand() % 100;
for (int i = 0; i < n; i++)
    if (arr[i] < 3)
        sum += arr[i];
std::cout<< sum <<std::endl;
return 0;
}
