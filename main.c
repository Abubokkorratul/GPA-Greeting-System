#include <stdio.h>

int main(){


  int s_number,i,sum=0;
  float ave,gpa,fail_mark=0;

  printf("Enter How many Subject You have: ");
  scanf("%d",&s_number);

  if(s_number<1 || s_number>100){
    printf("Invilide Subjects Number");
    return 0;
  }

  float arr[s_number]={};

  for(i=0;i<s_number;i++){
      do{
      printf("Enter Number of Subject (%d): ",i+1);
      scanf("%f",&arr[i]);
      if(arr[i]<0 || arr[i]>=101){
        printf("\n\nEnvalide Number\nYou Should Enter The number from 0 to 100\n\t\t Please Try again\n\n");

      }

    }while(arr[i]<0 || arr[i]>=101); 
  }

  for(i=0;i<s_number;i++){
      printf("\n\n your grade for subject [%d]: %.2f",i+1,arr[i]);

      if(arr[i]>79){
    printf(" (A+)");
  }
  else if(arr[i]>69){
        printf(" (A)");
  }
  else if(arr[i]>59){
        printf(" (A-)");
  }
  else if(arr[i]>49){
        printf(" (B)");
  }
  else if(arr[i]>39){
        printf(" (C)");
  }
  else if(arr[i]>32){
        printf(" (D)");
  }
  else if(arr[i]<33){
          printf(" (Fail)");
          fail_mark++;
        }
      }

  for(i=0;i<s_number;i++){
    sum=arr[i]+sum;
  }

  printf("\n\n\nThe Sum of The Number: %d\n",sum);

  ave=(float)sum/(float)s_number;

  printf("Average of your total number: %.2f\n",ave);

  if(fail_mark!=0){
   printf("\n\nYou are fail\nYour Total grade is \'F\'");
     }
  else{

 
  if(ave>79){
    printf("Your total GPA is : A+");
  }
  else if(ave>69){
        printf("Your total GPA is : A");
  }
  else if(ave>59){
        printf("Your total GPA is : A-");
  }
  else if(ave>49){
        printf("Your total GPA is : B");
  }
  else if(ave>39){
        printf("Your total GPA is : C");
  }
  else if(ave>33){
        printf("Your total GPA is : D");
  }

 }
  

    return 0;

}

