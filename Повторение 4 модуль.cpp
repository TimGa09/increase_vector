#include <iostream>
#include <vector>
using namespace std;
vector <int> increase_vector(vector <int> vec, int n) {
    for (int i = 0; i < vec.size(); i++) {
        vec[i] = n + vec[i];
    }
    return vec;
}
int main() 
{
    int n;
    cin >> n;
    vector <int> vect{1,2,3,4,5,6,7,8,9,10};
    vect = increase_vector(vect,n);
    for (int i = 0; i < vect.size(); i++) {
        cout << vect[i] << endl;
    }
}