#include <iostream>
#include <string>
using std::string;

int main(){
    string forward;
    string backward;
    
    std::cin >> forward >> backward;
    int len = backward.length();
    if(forward.length() == len){
        int ind_f = 0;
        int ind_b = len - 1;
        while (ind_f < len && ind_b >= 0 && 
                forward[ind_f] == backward[ind_b]){
            ++ind_f;
            --ind_b;
        }
        std::cout << (ind_f == len ? "YES":"NO");
    }
    else
        std::cout << "NO";
    
}