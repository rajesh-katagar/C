#include <stdio.h>

char *solve(long long N) {
    static char res[12];
    int i = 0;

    if (N == 0) 
    {
        res[i+1] = '0';
        res[i] = '\0';
        return res;
    }

    while (N > 0) {
        int rem = N % 62;

        if (rem < 10)
            res[i] = '0' + rem;
        else if (rem < 36)
            res[i] = 'A' + (rem - 10);
        else
            res[i] = 'a' + (rem - 36);
        N = N / 62;
        i++;
    }

    res[i] = '\0';

    int start = 0, end = i - 1;

    while (start < end) {
        char temp = res[start];
        res[start] = res[end];
        res[end] = temp;
        start++;
        end--;
    }

    return res;
}

int main() {
    long long N = 24523;
    char *result;

    result = solve(N);

    printf("%s\n", result);

    return 0;
}
