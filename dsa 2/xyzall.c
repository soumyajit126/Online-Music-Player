// #include<stdio.h>
// int main(){
// int n,i,sum=0;
// scanf("%d",&n);
// for(i=1;i<=n;i++){
// sum=sum+i;
// }
// printf("%d",sum);
// return 0;
// }

// #include<stdio.h>
// int main(){
// int i,sums=0,n;
// scanf("%d",&n);
// printf("%d",n*(n+1)/2);
// return 0;
// }
// #include<stdio.h>
// int main(){
// int n;
// scanf("%d",&n);
// if(n==0){
// printf("n is %d ",n);
// }
// else {
// printf("is equal to  %d  ",n);
// }
// return 0;
// }
// #4
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
// int i,n;
// printf("Enter the number of integers : ");
// scanf("%d",&n);
// int *ptr=(int *)malloc(n*sizeof(int));

// if(ptr==NULL){
// printf("Memory not available.");
// exit(1);
// }
// for(i=0;i<n;i++){
// printf("Enter an integer :");
// scanf("%d",ptr+i);
// }
// for(i=0;i<n;i++)
// printf(" %d",*(ptr+i));
// return 0;
// }