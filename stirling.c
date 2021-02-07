#include <stdio.h>


int first_stirling(int n, int k){
    if ((n == 0 && k ==0)){
        return 1;
    } else if ((n<k) ||(k == 0)){
        return  0;
    } else if(n == k+1){
        return ((n-1)*n)/2;
    } else {
        return first_stirling(n-1,k-1)+(n-1)*first_stirling(n-1,k);
    }
}


int second_stirling(int n, int k){
    if ((n == 0 && k ==0) || (k == n) || (k == 1)){
        return 1;
    } else if ((n<k) ||(k == 0)){
        return  0;
    } else if(n == k+1){
        return ((n-1)*n)/2;
    } else if(k == 2){
        int num = 2;
        for(int i = 2; i<n; i++){
            num = 2* num;
        }
        return num -1;
    } else {
        return second_stirling(n-1,k-1)+(k)*second_stirling(n-1,k);
    }
}


int main(){
    int option, n, k;
    char exit;
    while(1){
        printf("\nPress 1 if you want to calculate stirling numbers of the first kind\nPress 2 if you want to calculate stirling numbers of the second kind\n\nI want? ");
        scanf("%d",&option);
        printf("====================\n");
        switch(option){
            case 1:	
                printf("\ns(n,k)\n\nPut the value of n:\nn = ");
                scanf("%d",&n);
                printf("\nNow put the value of k:\nk= ");
                scanf("%d",&k);
                printf("====================\n\nThe result of stirling numbers of the first kind is \n\ns(%d, %d) = %d\n\n===============================\n",n,k, first_stirling(n,k));
                break;
            case 2: 	
                printf("\ns(n,k)\n\nPut the value of n:\nn = ");
                scanf("%d",&n);
                printf("\nNow put the value of k:\nk= ");
                scanf("%d",&k);
                printf("====================\n\nThe result of stirling numbers of the second kind is \n\ns(%d, %d) = %d\n\n==============================\n",n,k, second_stirling(n,k));
                break;
            default:
                printf("Sorry I didn't understand you\nlet's start again\n");		
	}
        printf("Do you want to exit (y/n)?\n");
        scanf("%c",&exit);
        scanf("%c",&exit);
        if(exit == 'n' || exit == 'N'){
            continue;
        }else {
            break;
        }		
    }
    return 0;
}
