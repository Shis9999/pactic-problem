
// Sum of Evens 3

// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int even_number_sum = 0;
//     for (int i = 0; i <= n; i++)
//     {
//         if (i % 2 == 0)
//         {
//             even_number_sum += i;
//         }
//     }
//     printf("%d\n", even_number_sum);
//     return 0;
// }

// Swapping Mania
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char s[1001], t[1001];
//     scanf("%s %s", s, t);

//     int lengS = strlen(s);
//     int lengT = strlen(t);
//     if (lengS != lengT)
//     {
//         printf("NO\n");
//         return 0;
//     }

//     int freqS[26] = {0}, freqT[26] = {0};

//     for (int i = 0; i < lengS; i++)
//     {
//         freqS[s[i] - 'a']++;
//         freqT[t[i] - 'a']++;
//     }
//     for (int i = 0; i < 26; i++)
//     {
//         if (freqS[i] != freqT[i])
//         {
//             printf("NO\n");
//             return 0;
//         }
//     }

//     printf("YES\n");
//     return 0;
// }

// Palindromic Rearrangement
// #include <stdio.h>
// #include <string.h>
// int main()
// {

//     char s[1001];
//     scanf("%s", s);
//     int leng = strlen(s);
//     int freq[26] = {0};

//     for (int i = 0; i < leng; i++)
//     {
//         freq[s[i] - 'a']++;
//     }
//     int count = 0;
//     for (int i = 0; i <26; i++)
//     {
//         if (freq[i] % 2 !=0)
//         {
//             count++;
//         }
//     }
//     int all = (count > 1) ? (count - 1) : 0;
//     printf("%d\n", all);
#include <stdio.h>
// #include <string.h>
// int main()
// {

//     char s[1001];
//     scanf("%s", s);
//     int leng = strlen(s);
//     int freq[26] = {0};

//     for (int i = 0; i < leng; i++)
//     {
//         freq[s[i] - 'a']++;
//     }
//     int count = 0;
//     for (int i = 0; i <26; i++)
//     {
//         if (freq[i] % 2 !=0)
//         {
//             count++;
//         }
//     }
//     int all = (count > 1) ? (count - 1) : 0;
//     printf("%d\n", all);

//     return 0;
// }

// Game Score Tracker 1
// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];

//     for(int i=0; i<n; i++){
//         scanf("%d",&arr[i]);
//     }

//     int max=0,small=0;

//     int fastnumber=arr[0];
//     int secoundnumber=arr[0];

//     for(int i=1; i<n; i++){
//         if(arr[i]<fastnumber){
//             fastnumber=arr[i];
//             max++;
//         }
//         if(arr[i]>secoundnumber){
//             secoundnumber=arr[i];
//             small++;
//         }
//     }
//     printf("%d %d\n",small,max);
//     return 0;

// }

// Peak in the Grid
// #include <stdio.h>
// int main()
// {
//     int n, m;
//     scanf("%d %d", &n, &m);
//     int arr[n][m];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }

//     int add = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             int valu = 1;

//             if (i > 0 && arr[i][j] <= arr[i - 1][j])
//                 valu = 0;
//             if (i < n - 1 && arr[i][j] <= arr[i + 1][j])
//                 valu = 0;
//             if (j > 0 && arr[i][j] <= arr[i][j - 1])
//                 valu = 0;
//             if (j < m - 1 && arr[i][j] <= arr[i][j + 1])
//                 valu = 0;
//             if (valu == 1)
//             {
//                 printf("%d %d\n",i+1,j+1);
//                 add++;
//             }
//         }
//     }
//     if (add != 0)
//     {
//         printf("%d", add);
//     }

//     if (add == 0)
//     {
//         printf("0\n");
//     }
//     return 0;
// }



#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        int flag = 1;
        for (int j = 0; j < m; j++)
        {
            if (i > 0 && a[i][j] <= a[i - 1][j])
            {
                flag = 0;
            }
            if (i < n - 1 && a[i][j] <= a[i + 1][j])
            {
                flag = 0;
            }
            if (j > 0 && a[i][j] <= a[i][j - 1])
            {
                flag = 0;
            }
            if (j < m - 1 && a[i][j] <= a[i][j + 1])
            {
                flag = 0;
            }
            if (flag==1)
            {

                printf("%d %d\n", i + 1, j + 1);
                count++;
            }
        }
    }
    if(count !=0)
    printf("%d",count);
    if (count == 0)
    {
        printf("0\n");
    }
    return 0;
}