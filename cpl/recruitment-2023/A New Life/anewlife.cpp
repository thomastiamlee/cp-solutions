#include <cstdio>
#include <vector>

using namespace std;

int main()
{
    int n, q;
    while (scanf("%d %d", &n, &q), n != 0 || q != 0)
    {
        vector<int> pref;
        pref.push_back(0);
        
        int bestStart = -1;
        int bestCount = 0;
        int bestTime = q + 1;
        int total = 0;
        int next;
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &next);
            total += next;
            pref.push_back(total);
        }

        for (int i = 1; i <= n + 1; i++)
        {
            int lo = i;
            int hi = n;
            if (q < pref[lo] - pref[i - 1]) continue;
            while (lo <= hi)
            {
                int mid = (lo + hi) / 2;
                if (pref[mid] - pref[i - 1] <= q && (mid == n || pref[mid + 1] - pref[i - 1] > q))
                {
                    int count = mid - i + 1;
                    int time = pref[mid] - pref[i - 1];
                    if (count > bestCount || (count == bestCount && time < bestTime))
                    {
                        bestStart = i;
                        bestCount = count;
                        bestTime = time;
                    }
                    break;
                }
                else if (pref[mid] - pref[i - 1] > q)
                {
                    hi = mid - 1;
                }
                else if (pref[mid] - pref[i - 1] <= q && pref[mid + 1] - pref[i - 1] <= q)
                {
                    lo = mid + 1;
                }
            }   
        }
        
        if (bestStart == -1)
        {
            printf("go back to old life\n");
        }
        else
        {
            printf("buy plot %d to plot %d\n", bestStart, bestStart + bestCount - 1);
        }
    }
}