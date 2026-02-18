#include <stdio.h>
#include <math.h>
/*int prime(int n){
int i;
  for(i=1;i<n;i++){
  if (i%n==0){
  //printf("not prime\n");
  return 0;
  } else {
  //printf(" its prime \n");
  return 1;
  }
  }
}
int main(){
int n,x=0;
printf("enter value of n:  ");scanf("%d", &n);
x=prime(n);
if (x==1){
printf("its a prime ");
} else {
printf("not prime")
printf("%d \n",x);
return 0;
}*/
/*void prime(void){
int n,i,x=0;
printf("enter value of n:  ");scanf("%d", &n);
  for(i=1;i<n;i++){
  if (i%n==0){
  x=0;
  } else {
  x++;
  }
  }
  if(x==0){
  printf("0");
  } else {
  printf("1");
  }
}
int main(){
prime();
return 0;
}*/
/*
int prime(){
int n ,i ;
printf("enter value of n:  ");scanf("%d", &n);
  for(i=1;i<n;i++){
  if (n%i==0){
  return 0;
  } else {
  return 1;
  }
  }
}

int main(){
int x=0;
x= prime();
printf("%d", x);
return 0;
}*/
/*
int power(int x , int y ){
int i,m;
for(i==1 ; i<=y;i++){
m=x*x;
}

return m;
}
int main(){
int a,b,z;
printf("enter value of a:  ");scanf("%d", &a);
printf("enter value of b:  ");scanf("%d", &b);
z=power(a,b);
printf("%d ", z);
return 0;
}*/

/*void power(void){
int i,a,b,z;
printf("enter value of a:  ");scanf("%d", &a);
printf("enter value of b:  ");scanf("%d", &b);
for(i==1 ; i<=b;i++){
z=a*a;
}
printf("%d ", z);

}
int main(){
power();
return 0;
}*/
/* magic no
int step1(int x ){
int s=0 ;
while(x!=0){
s=s+(x%10);
x=x/10;
}
printf("sum - %d \n", s);
return s;
}
int step2(int y){
int d=0;
while(y!=0){
d=d+(y%10);
y=y/10;
d=d*10;
}
d=d/10;
printf("reverse is %d \n",d);
return d;
}
int step3(int o , int p ){
int r ;
r=o*p;
printf("value of product is %d \n",r);
return r;
}

int main(){
int n,a,b,c;
printf("enter value of n: ");scanf("%d", &n);
a=step1(n);
b=step2(a);
c=step3(a,b);
if (c==n) {
printf("yayy");
} else {
printf(" not yayyy");
}*/
#include <stdio.h>

// recursive function to find nth Fibonacci number
/*int fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}*/

/*
int max1( int d[] , int n){
int q=d[0],z=0 ;
for(int i =0 ; i<n;i++){
if(d[i]>q){
z=d[i];
}
}
return z;
}

int min1( int c[] , int n){
int e;
for(int i=0;i<n;i++){
if(c[i]<e){
e=c[i];
}
}
return e ;
}
 /*
  int search(int b[],int n ){
  int a;
  printf("enter a - "); scanf("%d",&a);
  for(int i=0;i<n;i++){
  if(b[i]==a){
  printf(" similar character found at index no.%d",i);
  }
}
return 0;
}*/
    
  /*int main(){
  int n ,x;
printf("enter n - "); scanf("%d",&n);
int arr[n];
for(int i =0 ; i<n;i++){
scanf("%d", &arr[i]);
}
search(arr,n);
return 0;
}*/


/*
int main(){
int n,x,y ,c,d ;
printf("enter n"); scanf("%d",&n);
int t[n];
for(int i =0 ; i<n;i++){
scanf("%d", &t[i]);
}
x= max1(t,n);
y= min1(t,n);
printf(" the max and min valued are %d  %d \n",x,y) ;
return 0
}*/
/*
int main() {
int n ;
printf("enter n - "); scanf("%d",&n);
int arr[n];
for(int i =0 ; i<n;i++){
scanf("%d", &arr[i]);
}
  int temp;
  for(int i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
printf("Reversed array: ");
for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}*/
/*int main() {
    int arr[5], n, i, pos, element;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to insert: ");
    scanf("%d", &element);
    printf("Enter position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);
*/
/*
int main() {
    int arr[5], n, i, pos, element;

  printf("Enter number of elements: ");scanf("%d", &n);
printf("Enter %d elements:\n", n);
for(i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
printf("Enter element to insert: ");scanf("%d", &element);
printf("Enter position to insert (1 to %d): ", n + 1);scanf("%d", &pos);

for(i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
}
arr[pos - 1] = element;
n++;
printf("Array after insertion:\n");
for(i = 0; i < n; i++) {
printf("%d ", arr[i]);
}
 return 0;
}*/
/*
int main() {
    int arr[5], n, i, pos, element;
printf("Enter number of elements: ");scanf("%d", &n);

printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter position to delete");
    scanf("%d", &pos);
    for(i=pos-1;i<=n;i++){
    arr[i]=arr[i+1];
    }

printf("Array after deletion:\n");
for(i = 0; i < n-1; i++) {
printf("%d ", arr[i]);
}
 return 0;
}*/
