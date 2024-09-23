// Maximum and minimum of an array using minimum number of comparisons

#include<stdio.h>
int main(){
    int A[]={3,6,5,4,9,1};
    int N= sizeof(A)/sizeof(A[0]);
    int i,j,temp;
    int min=99999;
    int max=0;
    for(i=0;i<N;i++){
        if(A[i]<min){
            min=A[i];
        }
        if(A[i]>max){
            max=A[i];
        }
    }
    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);

}
// Time complexity: O(n)
// Space complexity: O(1)