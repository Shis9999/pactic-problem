// 1 number problem selo
// #include<stdio.h>
// int main()
// {
//     unsigned long long n;
//     scanf("%llu",&n);

//     if(1000<n){
//         printf("I will buy Punjabi\n");

//         n -=1000;

//         if(500 <= n){
//             printf("I will buy new shoes\n");
//             printf("Alisa will buy new shoes\n");
//         }
//     }
//     else{
//         printf("Bad luck!\n");
//     }
//     return 0;
// }

// 2 number problem
// #include<stdint.h>
// #include<stdio.h>

// int main() {
//     printf("Hello, world! I am learning C programming language. ^_^\n");
//     printf("Programming is fun and challenging. /\\/\\/\\\n");
//     printf("I want to give my 100%% dedication to learn!\tI will succeed one day.\n");
//     return 0;
// }

// 3 number problem
// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);

//     for (int i = 21; i <= n; i++)
//     {
//         if (i % 3 == 0 && i % 7 == 0)
//         {
//             printf("%d\n", i);
//         }
//     }
//     return 0;
// }

// 4 number problem
//  #include<stdio.h>
//  int main()
//  {
//      int t,m1,m2,d;
//      scanf("%d",&t);

//     while(t--){
//         scanf("%d %d %d",&m1,&m2,&d);
//         int calcolate= (d-(m1*d / (m1+m2)));
//         printf("%d\n",calcolate);
//     }
//     return 0;
// }

// 5 number problem
//  #include<stdio.h>
//  int main(){
//      int n;
//      int count_2=0, count_3=0;

//     scanf("%d",&n);

//     int arr[n];

//     for(int i=0; i< n; i++){
//         scanf("%d",&arr[i]);
//     }

//     for(int i=0; i< n; i++){
//         if(arr[i]==1)continue;
//         if(arr[i]%2==0){
//             count_2++;
//         }
//         else if(arr[i]%3==0)count_3++;
//     }
//     printf("%d %d\n",count_2,count_3);
//     return 0;
// }

// 6 number problem
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main()
// {

//     char n[100001];
//     int count = 0;
//     scanf("%s", n);
//     int leng = strlen(n);
//     for (int i = 0; i < leng; i++)
//     {
//         if (n[i] != 'a' && n[i] != 'e' && n[i] != 'i' && n[i] != 'o' && n[i] != 'u')
//         {
//             count++;
//         }
//     }
//     printf("%d", count);
//     return 0;
// }

// 7 number problem solov

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     int t;
//     int capital,small,dight;
//     scanf("%d",&t);
//     while(t--){
//         char x[10001];
//         scanf("%s",x);

//         int leng=strlen(x);
//         capital=0,small=0,dight=0;

//         for(int i=0; i<leng; i++){
//             if(65<= x[i] && x[i]<= 90){
//                 capital++;
//             }
//             else if(97 <= x[i] && x[i] <= 122){
//                 small++;
//             }
//             else if(48 <= x[i] && x[i]<= 57){
//                 dight++;
//             }
//         }
//         printf("%d %d %d\n",capital,small,dight);
//     }

//     return 0;
// }

// 8 number problem solov
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char arr[10001];
//     int count[26] = {0};

//     scanf("%s", arr);

//     for (int i = 0; i < strlen(arr); i++)
//     {
//         count[arr[i] - 'a']++;
//     }

//     for (int i = 0; i < 26; i++)
//     {
//         if (count[i] > 0)
//             printf("%c - %d\n", i + 'a', count[i]);
//     }
//     return 0;
// }

// 9 number problem solov 
// #include<stdio.h>

// int arr[1001];
// int count=0;
// int count_before_one(int n){
//     for(int i =0; i < n; i++){
//     if(arr[i]==1){
//         break;
//     }
//     count++;
//     }
//     return count;
// }
// int main()
// {
//     int n;
//     scanf("%d",&n);

//     for(int i=0; i < n; i++){
//         scanf("%d",&arr[i]);
//     }

//     int sum=count_before_one(n);
//     printf("%d\n",sum);
//     return 0;
// }

//10 number problem solov
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int arr[n];

//     for(int i=0; i < n; i++){
//         scanf("%d",&arr[i]);
//     }

//     int x,v;
//     scanf("%d %d",&x,&v);
//     arr[x]=v;

//     for(int i=n-1; i>=0; i--){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }


//11 number problem solov
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int arr[n];

//     for(int i=0; i<n; i++){
//         scanf("%d",&arr[i]);
//     }

//     for(int i=n-1; i>= 0; i--){
//         if(i%2 !=0){
//             printf("%d ",arr[i]);
//         }
//     }
//     return 0;
// }

//12 number problem solov 
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1; i<n; i++){
        for(int j=0; i<n-i-1; j++){
            printf(" ");
        }
        for(int j=0; j<n*i+1; j++){
            if(j%2==0){
                printf("#");
            }
            else
            printf("-");
        }
        printf("\n");
    }
    
}