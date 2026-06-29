// This program is for beginners and it demonstrates the use of variables, data types, input/output values.

#include <stdio.h>
#include <stdbool.h>

int main() {

 // Integer Values only.
   int age = 48;
   printf("Age:%d", age);

   age = 29;
   printf("\nNew Age:%d", age);

   int firstNumber = 33;
   printf("\n firstNumber = %d", firstNumber);
   
   int secondNumber = firstNumber;
   printf("\n secondNumber = %d", secondNumber);

 // Floating-point values.
   double number = 110.79;
   printf("\n number = %.3lf", number);

   float number1 = 25.98f;
   printf("\n %.1f", number1);

   double number2 = 11.9e8;
   printf("\n %lf", number2);

 // Character values.
   char character = 'S';
   printf("\n %c", character);
   printf(" %d", character);

 // Floating and character values with user input.
   double number3;
   char alphabet;

   printf("\n Enter double input:");
   scanf("%lf", &number3);

   printf("Enter character input: ");
   scanf("\n%c", &alphabet);

   printf("Number: %lf", number3);
   printf("\n Character: %c", alphabet);

 // Arithmatic Operators:-

   // 1) Addition
      int d = 45;
      int result = d + 7689;
      printf("\n %d", result);

      double X =  45.98;
      double result2 = X + 56.67;
      printf("\n %.1lf", result2);

   // 2) Subtraction
      int R = 109;
      int result3 = R - 65;
      printf("\n %d ", result3);

      double Y = 45.98;
      double result4 = Y - 87.09;
      printf("\n %.2lf", result4);

   // 3) Multiplication
      int T = 100023;
      int result5 = T * 89;
      printf("\n %d ", result5);

      double F = 45.98;
      double result6 = F * 87.09;
      printf("\n %.2lf", result6);

   // 4) Division
      int U = 1024;
      int result7 = U/7;
      printf("\n %d", result7);

      double I = 98.00;
      double results8 = I/8.00;
      printf("\n %.2lf", results8);

   // 5) Remainder Operator
      int O = 98;
      int result9 = O%90;
      printf("\n %d", result9);

   // 6) Increament and Decrement Operators

      // Increament Operators
         int Q = 87;
         int result10 = ++Q;
         printf("\n %d", result10);

      // Decreament Operator
         int Z = 90;
         int result11 = --Z;
         printf("\n %d", result11);

   // Multi[ple Operators
      int V = 89;
      int result12 = (V+98)*56-909;
      printf("\n %d", result12);

      int t = 90;
      int y = 98;
      double result13 = (double)t/y;
      printf("\n %.2lf", result13);

      int result14 = '8' + 12;
      printf("\n %d", result14);

 // Boolean and Comparision Operators:-

     // Boolean Operator
        bool  value1 = true;
        bool value2 = false;
        printf("\n %d", value1);
        printf(" %d", value2);

        // 1) Greater than Operator
              bool value3 = 98 > 90;
              printf("\n %d", value3);

        // 2) Less than Operator
              bool value4 = 34 < 98;
              printf("\n %d", value4);

        // 3) Equal to Operator
              bool value5 = 89==89;
              printf("\n %d", value5);

        // 4) Not Equal to Operator
              bool value6 = 98!=90;
              printf("\n %d", value6);

        // 5) Greater than Equal to Operator
              bool value7 = 9>=9;
              printf("\n %d", value7);

        // 6) Less than Equal to Operator
              bool value8 = 89<=90;
              printf("\n %d ", value8);

     // Comparison Operator between  two variables 
              int r = 920;
              int s = 98;
              bool value9 = r > s;
              printf("\n %d",value9);

 //Logical Operators:-

     // 1) AND Operator
           int u = 7;
           double v = 90.76;

           bool result15 = (u >= 6) && (v >90.00);
           printf("\n %d", result15);

     // 2) OR Operator
           int i = 9;
           double q = 8;

           bool result16 = (i <= 8) || (q >6.00);
           printf("\n %d", result16);

     // 3) NOT Operator
           int a = 9;
           bool result17 = !(a > 8);
           printf("\n %d", result17);

  // IF Else operator
      int age2;
      printf("\n Enter your Age: ");
      scanf("%d", &age2);

      if(age2 > 95 || age2 <1){
            printf("\n Sorry, Invalid age");
      }

      else if(age2 >= 18){
           printf("\n You are eligible for driving license.");
      }
      else{
            printf("\n Sorry, you are not eligible for the license");
      }

      double l;
      printf("\n Enter the number:");
      scanf("%lf", &l);

      if(l > 0){
            printf("\n Number is positive.");
      }

      else if(l < 0){
            printf("\n Number is negative.");
      }
      else{
            printf("\n Number is zero.");
      }

    // Ternairy Operators

      int age3;
      printf("\n Enter your age:");
      scanf("%d", &age3);
      (age3 >= 17) ? printf("\n You can go on.") : printf("\n You cannot go on.");

      char operator = '-';

      double num1 = 45.90;
      double num2 = 90.765;
      double result18 = (operator == '-') ? (num1 - num2) : (num1 + num2);
      printf("\n %.2lf", result18);

      int num3;
      printf("\n Enter the Number:");
      scanf("%d", &num3);
      (num3%2 ==0) ? printf("\n The number is even.") : printf("\n The number is odd.");
      
      int no_1;
      printf("\n Enter the Month number: ");
      scanf("%d", &no_1);

      switch (no_1) {
            case 1:
                  printf("\n January");
                  break;
            case 2:
                  printf("\n February");
                  break;
            case 3:
                  printf("\n March");
                  break;
            case 4:
                  printf("\n April");
                  break;
            case 5:
                  printf("\n May");
                  break;
            case 6:
                  printf("\n June");
                  break;
            case 7:
                  printf("\n July");
                  break;
            case 8:
                  printf("\n August");
                  break;
            case 9:
                  printf("\n September");
                  break;
            case 10:
                  printf("\n October");
                  break;
            case 11:
                  printf("\n November");
                  break;
            case 12:
                  printf("\n December");
                  break;

            default:
                   printf("\n Invalid month number.");
      }
      
      // Simple Calculator using switch case

       char operator2;

       printf("\n Enter an operator2 ['+', '-', '*', '/']: ");
       scanf("%d", &operator2);
  
        int b1, b2;
  
       printf("\n Enter first number: ");
       scanf("%d", &b1);
  
       printf("\n Enter second number: ");
       scanf("%d", &b2);
  
        int result19;  

       switch(operator2) {
       case '+':
       result19 = b1 + b2;
       break; 
       case '-':
       result19 = b1 - b2;
       break;
       case '/':
       result19 = b1 / b2;
       break;
       case '*':
       result19 = b1 * b2;
       break;
       
  }
     
    // While Loop in C Programming.

      int count = 1;

      while(count < 4) {
            printf("\n While loop in our house.");
            count = count + 1;
      }
      
      int url;
      printf("\n Enter the URL: ");
      scanf("%d", &url);

      int count2 = 1;

      while (count2 <= 10) {
            int product = url * count2;
            printf("\n %d*%d = %d", url, count2, product);
            count2 = count2 + 1;
      }
   return 0;

}
