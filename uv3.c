#include <stdio.h>
#include <string.h>
    
  /*  int m, n;
printf("Give values of m and n: ");
scanf("%d %d", &m, &n);
int a[m][n];
printf("Enter elements:\n");
for (int i = 0; i < m; i++) {
for (int j = 0; j < n; j++) {
scanf("%d", &a[i][j]);
}
}
printf("Upper Triangular Matrix:\n");
for (int i = 0; i < m; i++) {
for (int j = 0; j < n; j++) {
if (j >= i) {
printf("%d ", a[i][j]);
} else {
printf("0 ");
}
}
printf("\n");
}*/

/* 
char a[50];
char b[50];
char c[50];
printf("by using gets \n");
gets(a);
printf("using printf \n");
scanf("%s",&b);
printf("by using fgets \n");
fgets(c,50,stdin);

printf("\n=====\n");
//printf("%s \n",a);
//printf("%s \n",b);
printf("%s \n",c);
*/

/*
long int length(char a []){
int  c =0 ;

for (int i =0 ; a[i]!=0; i++){
c++;
}
return c;
}
int main(){
char a[100];
gets(a);
long int m , n ;
m= strlen(a);
n=length(a);
printf("the size of string is %ld          %ld" , m,n);
*/

long int kcopyy(a[]){
for(int i =0 ; a[i]!="\0"; i++){
b[i]=a[i];
}
printf("%s",b);
return 0 ;
}

int main(){
char a[100],b[100],c[100];
gets(a);
printf(" using pre defined func \n");
strcpy(c,a);
printf("%s",c);
kcopyy(a);
return 0;
}
