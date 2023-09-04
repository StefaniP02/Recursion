#include <iostream>

using namespace std;

void fibonacci(int count, int prevNumber, int nextNumber);

int main() {


    fibonacci(30, 1, 1);

    return 0;
}

void fibonacci(int count, int prevNumber, int nextNumber){
    if (count == 0){
        return;
    }
    cout << prevNumber << " ";

    return fibonacci(--count, nextNumber, prevNumber + nextNumber);
}
