#include <stdio.h>


int main(void) {
int Option;
 printf("Enter a Option #: \n");
 printf("Enter '1' To Select Wind Speed\n");
 printf("Enter '2' To Select Area\n");
  printf("Enter '3' To Select n!\n");
printf("Enter '4' To Select Do-While\n");
    scanf("%d", &Option);


if(Option ==1 ){
int WindSpeed;

 printf("Enter a WindSpeed: ");
    scanf("%d", &WindSpeed);


if(WindSpeed < 25){printf("Not A Strong Wind");}
else if(WindSpeed >= 25 && WindSpeed < 39){printf("Strong Wind");}
else if(WindSpeed >= 39 && WindSpeed < 55){printf("Gale");}
else if(WindSpeed >= 55 && WindSpeed <= 72){printf("Whole Gale");}
else {printf("Hurricane");}
}

else if(Option == 2 ){

double r;
char c;
double a;

printf("Enter S(for Square) or C(for Circle): ");
scanf(" %c",&c);
//printf("%c",c);
if(c== 'C' || c == 'c'){
  printf("Input an Radius for the circle: ");
  scanf(" %lf",&r);
  a = r*r*3.141592653589793238;
  printf("\n%lf",a);
  }

else if(c== 'S' || c == 's'){
  printf("Input the side length for the square: ");
  scanf(" %lf",&r);
  a = r*r;
printf("\n%lf",a);}
}

else if(Option == 3 ){
int Num;
int ans = 1;
printf("Enter an Integer: ");
    scanf("%d", &Num);

for(int N=Num;N >= 1;N--){

ans=ans*N;


}
printf("%d",ans);
}

else if(Option == 4 ){

int sum = 0;
int odd = 1;
int n;
printf("Type the number you want to use.");
  scanf("%d", &n);
do {
      sum = sum + odd;
      odd=odd+2;
   }while( odd < n );
printf("Sum of the positive odd numbers less than %d is %d\n",n,sum);
}

  return 0;
}