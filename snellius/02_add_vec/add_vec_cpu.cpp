#include "utils.h"

int main() {
    const int n = 18;
    vector<float> h_v1 = get_random_vector(n), h_v2 = get_random_vector(n), h_add(n);

    cout << "v1: " << h_v1 << endl;
    cout << "v2: " << h_v2 << endl;

    for (int i = 0; i < n; i++)
        h_add[i] = h_v1[i] + h_v2[i];

    cout << "addition: " << h_add << endl;
}