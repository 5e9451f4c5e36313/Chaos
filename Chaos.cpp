#include <cstdio>

template <size_t N>
int func(int (&arr)[N], int l = -1)
{
    int t = 0;
    return l + 1 == N ? 
        (arr[l] | 0x80) : (l % 2 == 0 ? 
            (func(arr, l + 1) << 8 | (arr[l] | 0x80)) : (printf(reinterpret_cast<const char*>(&(t = func(arr, l + 1)))), (l < 0 ? 
                (printf("\n"), 0) : (arr[l] | 0x80))));
}

int main()
{
    int arr[] = {'5', '$', 'V', '%', 'V', '\\'};
    func(arr);
    return 0;
}