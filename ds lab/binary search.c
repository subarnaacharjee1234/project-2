#include<stdio.h>
int main(){
    int str=0,end,mid,len,val;
    //int arr[]={2, 5, 9, 10, 13, 23, 32, 34, 45, 56, 67, 78, 89, 90};
    //len=sizeof(arr)/sizeof(arr[0]);
    scanf("%d",&len);
    int arr[len];
    for(int i=0;i<len;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&val);
    end=len-1;
    mid=(str+end-1)/2;
    while(str<=end){
        if(arr[mid]==val){
            printf("Found at %dth position",mid+1);
            break;
        }else if(arr[mid]>val){
            end=mid-1;
        }else{
            str=mid+1;
        }
        mid=(str+end)/2;

    }

    if(str>end){
        printf("Not Found");
    }
    return 0;
}
