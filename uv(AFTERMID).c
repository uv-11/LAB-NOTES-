#include <stdio.h>


int main(){
int n,m,x=1 , a[n][m];
printf("Enter n and m \n");
scanf("%d %d",&n,&m);
for(int i =0 ; i<n ; i++){
  for(int j =0 ; j<m ; j++){
     printf("Enter a[i][j]");
    scanf("%d",&a[i][j]);
}
}
/*
for(int i =0 ; i<n ; i++){
  for(int j =0 ; j<m ; j++){
  s=s+a[i][j];
  }
}
printf("the sum of all elements is %d", s);
*/
/*
for(int i=0 ; i<n;i++){
int s=0;
for(int j =0 ; j<m; j++){
s=s+a[i][j];
}
printf("\n the sum of all elements in row %d is %d",x, s);
x++;
}
*/
/*
for(int j=0 ; j<m;j++){
int s=0 ;
for(int i =0 ;i<n ; i++){
s=s+a[i][j];
}
printf("\n the sum of all elements in column %d is %d",x, s);
x++;
}
*/

/*
int s=0;
for(int i =0 ;i<n ; i++){
for(int j=0 ; j<m;j++){
if(i==j){
s=s+a[i][j];
}
}
}
printf("\n the sum of all elements in principle diagonal is %d", s);
*/
/*
int max=a[0][n-1];
for(int i =0 ;i<n ; i++){
for(int j=0 ; j<m;j++){
if(a[i][n-1-i]>max){
max= a[i][n-1-i];
}
}
}
printf("the largest element in a secondary diagonal is %d " , max);
*/
return 0;
} 


