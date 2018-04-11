#include <iostream>

bool IsPrime(int x);

int main() {
    int i =0;

    i += 2; // 2
    i *= 3; // 6
    i -= 2; // 4
    i /= 4; // 1

    std::cout << " \n";
    int j = i++; //j 1, i 2
    j = ++i; // j 3, i 3
    j = i--; // j 3, i 2
    j = --i; // j 1, i 1

    i = 2;
    j = 0;
    while (i <101){
        j += IsPrime(i++) ? 1 : 0;
    }
    std::cout << "I found " << j << " prime up to 100\n";

    return 0;
}

bool IsPrime(int x){
    bool prime = true;
    for (int i = 2; i <= x/i; i++){
        int factor = x/i;
        if (factor * i == x){
            prime = false;
            break;
        }
    }
    return prime;
}