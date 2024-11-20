#include <iostream>

const int magic_number = 41;

int fibb[magic_number];
long int sum[magic_number];

int main()
{
    fibb[0] = fibb[1] = 1;
    sum[0] = 1;
    sum[1] = 2;
    int s;
    std::cin >> s;
    if(s != 0){
        for(int i = 2; i < s; ++i){
            fibb[i] = fibb[i-1] + fibb[i-2];
            sum[i] = sum[i-1] + fibb[i];
        }
        std::cout << sum[s-1];
    }
    else
        std::cout << 1;
}