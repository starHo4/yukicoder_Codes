#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
int main(){
    int N;
    cin >> N;
    vector<ll> A(N);
    for(int i=0; i<N; i++){
        cin >> A[i];
    }
    ll sum = 0;
    for(int i=0; i<N; i++){
        sum += A[i];
    }
    cout << sum << endl;
}