#include<stdio.h>
//Subin vai book from page 22
int main()
{
    int i, n, even[101];
    // int even[101] = {0};


    for(i = 0; i < 101; i++){
        even[i] = 0;
    }

  //----------------------


    for(i = 0; i < 101; i += 2){
        even[i] = 1;
    }

    scanf("%d", &n);
    if(even[n] == 1){
        printf("%d is even number.\n", n);
    }else{
        printf("%d is odd number.\n", n);
    }
}
