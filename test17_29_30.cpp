#include <iostream>
#include <random>
#include <ctime>

using namespace std;

int generate_random_number(unsigned long long seed = time(0), const int a = 0, const int b = 9) {
    static default_random_engine e;
    static uniform_int_distribution<unsigned> u(a, b);
    e.seed(seed);
    return u(e);
}

int main() {

    for(int i = 0; i != 20; ++ i) {
        cout << generate_random_number() << endl;
    }

    return 0;
}

