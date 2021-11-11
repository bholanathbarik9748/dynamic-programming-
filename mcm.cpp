class Solution
{
public:
    int matrixMultiplication(int n, int arr[])
    {
        // code here
        int m[n][n];
        int i, j, k, l, q;

        for (int i = 0; i < n; i++)
        {
            m[i][i] = 0;
        }

        for (l = 2; l < n; l++)
        {
            for (i = 1; i < n - l + 1; i++)
            {
                j = i + l - 1;
                m[i][j] = INT_MAX;
                for (k = i; k <= j - 1; k++)
                {
                    q = m[i][k] + m[k + 1][j] + arr[i - 1] * arr[k] * arr[j];

                    if (q < m[i][j])
                    {
                        m[i][j] = q;
                    }
                }
            }
        }
        return m[1][n - 1];
    }
};
