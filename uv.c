#include <stdio.h>
#include <math.h>

 //swap using third variable 
/*int a,b , c;
printf("enter values of a and b ");
scanf("%d%d", &a , &b);
c=a;
a=b;
b=c;
printf("the values of a is %d and b is %d",a,b);
return 0;*/
//to raise a to the power b 
/*int a,b,k;
printf("enter value of a & b -");
scanf("%d%d", &a,&b);
k= pow(a,b);
printf("Value of a is -%d",k);
return 0;*/
// to find distance between two points 
/*float x1,y1,x2,y2, dist;
int p=2;
printf("Enter values of x1,y1- ");
scanf("%f%f", &x1,&y1);
printf("Enter values of x1,y1- ");
scanf("%f%f",&x2,&y2);
dist= sqrt(pow((x2-x1),p)-pow((y2-y1),p));
printf("distance between the given two points is %f", dist );
return 0 ;*/
/*int a;
printf("enter value of a ");
scanf("%d", &a);
if (a%2==0 ) {
printf("a is even");
} else {
printf("a is odd");
}
return 0;*/
/*int a ;
printf("enter value of a ");
scanf("%d", &a);
if (a>0) { 
printf("a is positive ");
} else if ( a=0 ){
printf(" a is 0");
} else {
printf("a is negative");
}
return 0;*/
/*int a,b,c;
printf("enter value of a ,b ,c : ");
scanf("%d%d%d", &a,&b,&c);
if (a>b && a>c ) { 
printf("a is the largest among three");
} else if (b>c && b>a ) {
printf("b is largest among the three");
} else {
printf("c is the largest ");
}
return 0 ;*/
/*float p,r,t , si , ci  ;
printf("si stands for simple interest \n");
printf("ci stands for compound interest \n");
printf("enter value of p,r,t : ");
scanf("%f%f%f",&p,&r,&t);
if (p>10000) { 
si = (p*r*t)/100;
printf("the simple interest is -- %f", si);
} else {
ci = p*pow((1+r/100),t);
printf("the value of compound interest is - %f", ci);
}
return 0;*/
//input year is a leap year or not 
/*int main(){
  int year ,a=0;
  printf("enter a year - ");
  scanf("%d", &year);
  if ( year%4==0 || year%400==0 ) {
    printf("the given year is leap year ");
    } else if ( year%100==0) {
    printf("the given year is a century year ");
    } else {
    printf("the year is not a leap year  ");
    }
  return 0;*/
// to check a a triangle is equi, iso,scalene
/*int s1,s2,s3;
  printf("enter values of s1, s2,s3:");
  scanf("%d%d%d",&s1,&s2,&s3);
  if (s1==s2 && s1==s3 && s2==s3 && s2==s1 && s3==s1 && s3==s2){
    printf("its an equilateral triangle ");
    }else if ( s1==s2 || s2==s3 || s3==s1 ){
      printf("its an isosceles triangle ");
    }else{
      printf("its a scalene triangle");
    }
  return 0;*/

/*int a,b,c ;
printf("enter values of s1, s2,s3:");
scanf("%d%d%d",&a,&b,&c);
if ( (a+b)>c || (b+c)>a || (c+a)>b ) {
printf("its a valid triangle");
} else {
printf("invalid triangle");
}
return 0;*/

/*int a,b,c ;
printf("enter angles of l1 , l2 , l3 : ");
scanf("%d%d%d",&a,&b,&c);
if ( (a+b+c) == 180 ) { 
printf("its a valid triangle ");
} else { 
printf(" its invalid triangle");
}
return 0;*/
  
/*int a, x;
printf("enter values of a");
scanf("%d", &a);
if (a>=0){
printf("its even");
if (a%4==0){
printf("number is divisiible by 4 ");
} else {
printf(" no it is not");
} 
}else if ( a<0 ) {
printf("its odd");
if (a%3==0){
printf("div by 3");
} else {
printf("not divisible");
}
}
return 0;*/


/*float units , bill=0 , total_amount=0;
printf("enter units");
scanf("%f", &units);
if (units <= 50){
bill = 0.5*units;
} else if ( units >50 && units <=150 ) {
bill = 0.5*50 + 0.75*(units - 50 );
} else if ( units > 150 && units <=250 ) {
bill = 0.5*50 + 0.75*100 + 1.2*(units -150);
} else {
bill = 0.5*50 + 0.75*100 + 1.2*250 + 1.5*(units-250);
}
total_amount = bill + bill*0.2;
printf("total amount is - %f ", total_amount);
return 0;*/
/*
int main(){
int n, p , q , i,j;
printf("enter values of p&q  ");
scanf("%d %d", &p,&q);
for(i=p;i<=q;i++){
//printf("i = %d \n",i);
n=0;
for(j=1;j<i;j++){
//printf("j = %d \n",j);
if (i%j==0){
n=n+1;
} else {
continue;
}
}
if (n==1){
printf("%d \n",i);
} else {
continue;
}
//printf("n is  %d \n",n);
}
return 0;
}*/
/*
int main(){
int n,s,i,j,p,q,x=0,t=0;
printf("enter values of p&q  ");
scanf("%d %d", &p,&q);
for(i=p;i<=q;i++){
//printf("i is - %d \n", i);
n=i;
s=0;
while(n!=0){
//printf("s is %d \n" ,s);
x=n%10;
//printf("x is %d \n" ,x);
s= s+(x*x*x);
n=n/10;
//printf("s is %d \n" ,s);
}
if (s==i) {
printf("%d  is an armstrong no. \n", s);
} else {
continue;
}
}
return 0;
}*/
/*
int main(){
  int n,p,q,r,s,i,j;
  printf("Enter value for starting and ending");
  scanf("%d%d",&p,&q);
  for (i=p;i<=q;i++){
    n=i;
    s=0;
    while(n!=0){
      r=i%10;
      s=s+(r*r*r);
      i=i/10;
    }
    if (s==i){
      printf("%d",s);
    }
    else{
      continue;
    }
  }
  return 0;
}*/
/*int fact(int n){
if (n<=1){
return 1;
} else {
return n*fact(n-1);
}
}

int main(){
int n ,x=1;
printf("enter n   -");scanf("%d", &n);
x=fact(n);
printf("the factorial of the number n %d is %d",n,x);*/
/*int dig(int n){
if (n==0){
return 1;
} else {
return (n%10)*dig(n/10);
}
}
int main(){
int n , x;
printf("enter n   -");scanf("%d", &n);
x=dig(n);
printf("hehe - %d", x);*/
/*
int fibo(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibo(n - 1) + fibo(n - 2);
}

int main() {
  int n, i;
printf("Enter n  ");scanf("%d", &n);
  printf("Fibonacci series:\n");
  for (i = 0; i < n; i++) {
      printf("%d ", fibo(i));
    }
return 0;
}
   
#include <stdio.h>

int main() {
    int n1, n2;

    printf("Enter size of first sorted array: ");
    scanf("%d", &n1);

    int arr1[n1];
    printf("Enter elements of first sorted array:\n");
    for(int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second sorted array: ");
    scanf("%d", &n2);

    int arr2[n2];
    printf("Enter elements of second sorted array:\n");
    for(int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int merged[n1 + n2];

    int i = 0, j = 0, k = 0;

    // Merge arrays
    while(i < n1 && j < n2) {
        if(arr1[i] <= arr2[j]) {

