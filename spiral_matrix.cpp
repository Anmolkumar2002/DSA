#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    vector<vector<int>> ans(n, vector<int>(n));
    int row = n;
    int col = n;
    int count = 1;
    int total = n * n;
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1;
    int endingCol = col - 1;
    while (count <= total)
    {
        // starting row
        for (int index = startingCol; count <= total && index <= endingCol; index++)
        {
            ans[startingRow][index] = count;
            count++;
        }
        startingRow++;

        // ending col
        for (int index = startingRow; count <= total && index <= endingRow; index++)
        {
            ans[index][endingCol] = count;
            count++;
        }
        endingCol--;

        // ending row
        for (int index = endingCol; count <= total && index >= startingCol; index--)
        {
            ans[endingRow][index] = count;
            count++;
        }
        endingRow--;

        // starting col
        for (int index = endingRow; count <= total && index >= startingRow; index--)
        {
            ans[index][startingCol] = count;
            count++;
        }
        startingCol++;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ans[i][j] << "\t";
        }
        cout << endl;
    }

    // spiral2
    vector<int> temp;
    count = 0;
    total = row * col;
    startingRow = 0;
    startingCol = 0;
    endingRow = row - 1;
    endingCol = col - 1;
    while (count < total)
    {
        // starting row
        for (int index = startingCol; count < total && index <= endingCol; index++)
        {
            temp.push_back(ans[startingRow][index]);
            count++;
        }
        startingRow++;

        // ending col
        for (int index = startingRow; count < total && index <= endingRow; index++)
        {
            temp.push_back(ans[index][endingCol]);
            count++;
        }
        endingCol--;

        // ending row
        for (int index = endingCol; count < total && index >= startingCol; index--)
        {
            temp.push_back(ans[endingRow][index]);
            count++;
        }
        endingRow--;

        // starting col
        for (int index = endingRow; count < total && index >= startingRow; index--)
        {
            temp.push_back(ans[index][startingCol]);
            count++;
        }
        startingCol++;
    }
    for(int i = 0; i < n * n; i++)
    {
        cout << temp[i] << " " ;
    }
    return 0;
}