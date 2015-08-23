

#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> coord;

int M, N, R;

void addLayer(vector<coord> &layer, int r, int c, int len, int rAdd, int cAdd) {
    while(len-- > 0) {
        layer.push_back(make_pair(r, c));
        r += rAdd;
        c += cAdd;
    }
}

vector<vector<int>> rotate(vector<vector<int>> matrix) {
    vector<vector<int>> ret(M, vector<int>(N));

    int nLayers = min(M, N)/2;


    int m = M, n = N;
    for(int i = 0; i < nLayers; i++) {
        vector<coord> strip;

        // Top layer
        int r = i, c = i;
        addLayer(strip, r, c, n-1, +0, +1);

        // Right layer
        r = strip.back().first;
        c = strip.back().second+1;
        addLayer(strip, r, c, m-1, +1, +0);

        // Bottom layer
        r = strip.back().first+1;
        c = strip.back().second;
        addLayer(strip, r, c, n-1, 0, -1);

        // Left layer
        r = strip.back().first;
        c = strip.back().second-1;
        addLayer(strip, r, c, m-1, -1, 0);


        int sz = strip.size();
        for(int id = 0; id < sz; id++) {
            int r1 = strip[id].first, c1 = strip[id].second;
            int r2 = strip[(id+R)%sz].first, c2 = strip[(id+R)%sz].second;
            ret[r1][c1] = matrix[r2][c2];
        }


        m -= 2;
        n -= 2;
    }

    return ret;
}

int main()
{
    // Reading the matrix.
    cin >> M >> N >> R;
    vector < vector<int> > matrix(M, vector<int>(N));

    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++) {
            cin >> matrix[i][j];
        }
    }

    vector<vector<int> > ans = rotate(matrix);

    // Procedure to print output
    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


