#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    #ifndef ONLINE_JUDGE
           freopen("D:\\Programming\\C++ Programming\\input.txt","r",stdin);
           freopen("D:\\Programming\\C++ Programming\\output.txt","w",stdout);
    #endif
    int t;
    std::cin >> t;

    while (t--)
    {
        int n;
        std::cin >> n;
        std::vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            std::cin >> a[i];
        }

        int even = 0, odd = 0;

        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
                even += std::max(0, a[i]);
            else
                odd += std::max(0, a[i]);
        }

        int ans = std::max(even, odd);

        if (ans == 0)
        {
            std::sort(a.begin(), a.end());
            ans = a[n - 1];
        }

        std::cout << ans << "\n";
    }

    return 0;
}