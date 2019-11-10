long possiblePathsRecursive(int M, int N) {
    if (M==0 || N==0) {
        return 0;
    }

    if (M+N==2) {
        return 1;
    }

    return possiblePathsRecursive(M-1, N) + possiblePathsRecursive(M, N-1);
}

long possiblePathsIterative(int M, int N) {
     std::vector<int> dp(N, 1);

           for(int i = 1; i < M; ++i)
          {
               for(int j = 1; j < N; ++j)
               {

                   dp[j] = dp[j] + dp[j - 1];
               }
           }
            return dp[N - 1];

    return 0; // place holder
}
//i looked at the solution at https://blog.csdn.net/sinat_35261315/article/details/78594116