#include <iostream>
#include <vector>
#include <string>
#include <unistd.h> // For usleep (to add delay)

using namespace std;

// Directions for movement: Up, Down, Left, Right
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

// Function to print the grid with the current path
void printGrid(const vector<vector<char>>& grid, const vector<pair<int, int>>& path) {
    vector<vector<char>> displayGrid = grid;
    
    // Mark the current path in the grid
    for (auto p : path) {
        displayGrid[p.first][p.second] = '*';  // Marking the path with '*'
    }
    
    // Clear the console screen (Unix only)
    system("clear");

    // Display the grid
    for (int i = 0; i < displayGrid.size(); i++) {
        for (int j = 0; j < displayGrid[0].size(); j++) {
            cout << displayGrid[i][j] << " ";
        }
        cout << endl;
    }

    // Adding a delay for better visualization (in microseconds)
    usleep(500000);  // 1s
}

// Recursive backtracking function
bool findPath(vector<vector<char>>& grid, vector<vector<bool>>& visited, int x, int y, vector<pair<int, int>>& path) {
    // make sure to call printGrid when you 1. update a path, 2. find the final path
    return false;
}

/*
5 5
. # . . .
S # # T .
. . . # .
# # . # .
. . . . .
*/
int main() {
    int n, m;
    cout << "Enter grid dimensions (n m): ";
    cin >> n >> m;

    vector<vector<char>> grid(n, vector<char>(m));
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    pair<int, int> start;

    cout << "Enter the grid: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 'S') {
                start = {i, j};  // Save the start position
            }
        }
    }

    vector<pair<int, int>> path;
    if (!findPath(grid, visited, start.first, start.second, path)) {
        cout << "No path found." << endl;
    } else {
        cout << "Treasure found!" << endl;
    }

    return 0;
}
