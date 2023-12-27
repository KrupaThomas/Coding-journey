//An image is represented by an m x n integer grid image where image[i][j]
// represents the pixel value of the image.
// You are also given three integers sr , sc and color . You should perform
// a flood fill on the image starting from the pixel image[sr][sc] .
// Return the modified image after performing the flood fill


#include <iostream>
#include <vector>
using namespace std;

class Imagefill {
private:
    void dfs(int row, int col, vector<vector<int>>& ans, const vector<vector<int>>& image, int newcolor, const int del_row[], const int del_col[], int initial_color ) {
        int n = image.size();
        int m = image[0].size();
        ans[row][col] = newcolor;
        for(int i = 0; i < 4; i++) {
            int n_row = row + del_row[i];
            int n_col = col + del_col[i];
            if(n_row >= 0 && n_row < n && n_col >= 0 && n_col < m && image[n_row][n_col] == initial_color && ans[n_row][n_col] != newcolor) {
                dfs(n_row, n_col, ans, image, newcolor, del_row, del_col, initial_color);
            }
        }
    }

public:
    vector<vector<int>> floodfill(vector<vector<int>>& image, int sr, int sc, int newcolor) {
        vector<vector<int>> ans = image;
        int initial_color = image[sr][sc]; 
        int del_row[] = {-1, 0, +1, 0};
        int del_col[] = {0, +1, 0, -1};

        dfs(sr, sc, ans, image, newcolor, del_row, del_col, initial_color);
        return ans;
    }

    // Function to display the contents of the vector (modified image)
    void displayImage(const vector<vector<int>>& image) {
        for (const auto& row : image) {
            for (int pixel : row) {
                cout << pixel << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Imagefill object;
    vector<vector<int>> image = {{1, 1, 1}, {1, 1, 0}, {1, 0, 1}};
    vector<vector<int>> modifiedImage = object.floodfill(image, 1, 1, 2);

    // Displaying the modified image
    cout << "Modified Image:" << endl;
    object.displayImage(modifiedImage);

    return 0;
}
