#include <iostream>
#include <vector>

using namespace std;

vector<int> psum(const vector<int> &a){
}

int msum(const vector<int> &p){
}

vector<vector<int>> psum2d(const vector<vector<int>> &a_2d){

}

vector<int> diff(int N, vector<vector<int>> ranges){
}

int main() {
    // 1. psum
    vector<int> a = {1, 6, 4, 2, 5, 3};
	vector<int> p = psum(a);
    for(auto elem : p){
        cout << elem << " ";
    }
    cout << endl;
    cout << p[5] - p[1] << "\n";

    // 2. max psum
    // a = {-1, 3, -2, 5, 3, -5, 2, 2};
    // p = psum(a);
    // cout << "max subarray sum is " << msum(p) << endl;

    // 3. 2d psum
    // vector<vector<int>> a_2d = {
    //     {0, 0, 0, 0, 0, 0},
    //     {0, 1, 5, 6, 11, 8},
    //     {0, 1, 7, 11, 9, 4},
    //     {0, 4, 6, 1, 3, 2},
    //     {0, 7, 5, 4, 2, 3}
    // };
    // vector<vector<int>> p_2d = psum2d(a_2d);
    // cout << "2d prefix sum from (2, 2) to (3, 4) is " << p_2d[3][4] - p_2d[3][1] - p_2d[1][4] + p_2d[1][1] << endl;


    // 4. diff array
    // vector<vector<int>> ranges = {
    //     {1,3},
    //     {4,5},
    //     {3,4},
    //     {1,5}
    // };
    // vector<int> d = diff(5, ranges);
    // return 0;
}
