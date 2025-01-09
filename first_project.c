#include <stdio.h>
  void pyramid();
  void hollowsqr();
  void revpyramid();
  void fluid();
  void swastik();
  int fibbo(int n);
  void dimond(int n);
  void alpha(int rows);
  void cross_shape(int n);
  void sandglass(int n);
  int main(void) 
  
{
  printf("----------------------------------------------------------------------------------\n");
  printf("|                            My first C lang project in hack club                |\n");
  printf("|        Here are 10 intersting patterns created by using C programming language |\n");
  printf("----------------------------------------------------------------------------------\n");
  // for(int i=1;i<=10;i++){
    printf("     \tChoose the pattern you want to print\n\n");
    printf("---------------------------------------\n");
    printf("1 for star pyramid pattern\n");
    printf("---------------------------------------\n");
    printf("2 for alphabet pyramid pattern\n");
    printf("---------------------------------------\n");
    printf("3 for dimond star pattern\n");
    printf("---------------------------------------\n");
    printf("4 for reverse star pyramid pattern\n");
    printf("---------------------------------------\n");
    printf("5 for sandglass watch star pattern\n");
    printf("---------------------------------------\n");
    printf("6 for Swastik pattern\n");
    printf("---------------------------------------\n");
    printf("7 for Cross shape  pattern\n");
    printf("---------------------------------------\n");
    printf("8 for hollow square pattern\n");
    printf("---------------------------------------\n");
    printf("9 for fluid's trangle pattern\n");
    printf("---------------------------------------\n");
    printf("10 for fibonacci sereise pattern\n\n\n");
    int v;
    do{
    int x;
      
    printf("\n******* Enetr the number of pattern you want to print********\n\n\n ");
    scanf("\n%d",&x);
      switch (x)

      {
        case 1:  { 
          printf("       -----Star pyramid pattern-----    \n\n\n");
           pyramid();

      } 
        break;
        case 2:{
          printf("     -----Alphabet pyramid pattern-----     \n\n\n");
          int a;
          printf("enter the number of rows\n");
          scanf("%d",&a);
          alpha(a);
        }
        break;
        case 3:{
          printf("      -----Dimaond star pattern-----       \n\n\n");
          int num;
          printf("enter the number of rows\n");
          scanf("%d",&num);
          dimond(num);
        }
        break;
        
        case 4:{
          printf("      -----Reverse star pyramid pattern-----      \n\n\n");
          revpyramid();
        }break;
        case 5:{
           printf("      -----sandglass watch star pattern-----      \n\n\n");
          printf("This pattern looks like sandglass watch.\nIt is a combination of two different patterns.\n");
          printf("First is a reversed star pyramid and second one is a normal pyramid.\n\n");
            printf("Enter the number of rows.\n");
          int rows;
          scanf("%d",&rows);
          sandglass(rows);
        }
        
        case 6:{
          printf("                  -----Swastik pattern-----         \n\n\n");
          printf("Swastic pattern is a very intersting pattern to print as well as to learn.\nIt helps you to build your logic and thinking skills.\n");
           swastik ();
        }break;
        case 7:{printf("      -----Cross shape pattern-----       \n\n\n");
                printf("Basically this pattern looks like X symbole.\n For size of pattern we give the number of rows then according to logic behind it we print the pattern.\n");
                int s;

                printf("Enter the size of cross\n");
                scanf("%d",&s);
                cross_shape(s);
          
        }
        case 8:{
          printf("      -----Hollow square pattern-----       \n\n\n");
          printf("Hollow square means a empty square shape box.\nIt's logic is easy to understand.\n");
          hollowsqr();
        }break;
        case 9:{
          printf("      -----Fluid's tringle pattern-----       \n\n\n");
          fluid();
        }
        break;
        case 10:{
          printf("      -----Fibonacci series-----       \n\n\n");
          printf("It's a numeric type of pattern .\nfibonacci series is a series of numbers in which each number is the sum of the two preceding numbers.\nWe used recursion in this program to print fibonacci series.\n\n");
          int num;
            printf("enter the length of your fibonacci series");
            scanf("%d",&num);
            for(int i=0;i<=num;i++){
              printf(" %d",fibbo(i));
            }
        }
        }
    
      printf("\n---------------------------------------------------\n\n");
    printf( " To print another pattern enetr 1 and to exit press any key\n");
          
    scanf("%d",&v);}
      
    
    while(v==1);
    return 0;
  }
  void pyramid(){
     int i, j,k=0,rows;
    printf("Enter the numbers of rows");
    scanf("%d",&rows);
    for ( i =1; i <= rows; i++)  
        {  
            for ( j = 1; j <= rows - i; j++)  
            {  
                printf ("  ");   
            }  
            // use for loop where k is less than equal to (2 * i -1)  
            for ( k = 1; k <= ( 2 * i - 1); k++)  
            {  
                printf ("* "); // print the Star  
            }  
            printf ("\n");  
        }  
  }
void alpha(int rows){
   

  // first loop to print all rows 
  for (int i = 0; i < rows; i++) { 



      // inner loop 1 to print white spaces 

      for (int j = 0; j < 2 * (rows - i) - 1; j++) { 

          printf(" "); 

      } 



      // inner loop 2 to print alphabets 

      for (int k = 0; k < 2 * i + 1; k++) { 

          printf("%c ", 'A' + k); 

      } 

      printf("\n"); 

  } 
}
    void hollowsqr(){

      int i, j, N;

      /* Code Block To Get The Input From The User */
      printf("Enter number of rows To Print Hollow Square : ");
      scanf("%d", &N);

      for(i=1; i<=N; i++)
      {

          for(j=1; j<=N; j++)
          {
              if(i==1 || i==N || j==1 || j==N)
              {
      /* Code Bloack To Print The First & Last Column */
                  printf("*");
              }
              else
              {
                  printf(" ");
              }
          }
 printf("\n");
      }
    }
      void revpyramid()
      {
        int i, j, rows ;  
        printf("\nenter number of rows");
        scanf("\n%d",&rows);
        for (i = 1; i <= rows; i++)  
        {  
            for (j = 1; j < i; j++)  
            {  
                printf(" ");  
            }  
            for (j = 1;  
                j <= (rows * 2 - (2 * i - 1));  
                j++)  
            {  
                printf("*");  
            }  
            printf("\n");  
        }  ;}
        void fluid() {
          int rows = 5; 

          // first loop for printing rows 
          for (int i = 0; i < rows; i++) { 

              // second loop for printing number in each rows 
              for (int j = 0; j < i+1;j++ ) { 
                  printf("%d ", j + 1); 
              } 

              printf("\n"); 
          }              };
void swastik(){
  
  
      int rows, cols, i, j;
      printf("Enter number of rows and columns: \n");
      scanf("%d%d", &rows, &cols);
      for(i=0; i < (rows*2 + 1); i++)
      {
          for(j=0; j < (cols*2 + 1); j++)
          {
              if(i == rows || j == cols)
                  printf("*");
              else if(i == 0 && j > cols)
                  printf("*");
              else if(j == cols*2 && i > rows)
                  printf("*");
              else if(i == rows*2 && j < cols)
                  printf("*");
              else if(j == 0 && i < rows)
                  printf("*");
              else
                  printf(" ");
          }
          printf("\n");
      }
      
  }
int fibbo(int n){
  if(n==0){
    return 0;
  }
  if (n==1){
    return 1;
  }
  else{
    return (fibbo(n-1)+fibbo(n-2));
  }
  
}
void dimond(int n){
   

  // first outer loop to iterate through each row 
  for (int i = 0; i < 2 * n - 1; i++) { 

      // assigning values to the comparator according to 
      // the row number 
      int comp; 
      if (i < n) { 
          comp = 2 * (n - i) - 1; 
      } 
      else { 
          comp = 2 * (i - n + 1) + 1; 
      } 

      // first inner loop to print leading whitespaces 
      for (int j = 0; j < comp; j++) { 
          printf(" "); 
      } 

      // second inner loop to print stars * 
      for (int k = 0; k < 2 * n - comp; k++) { 
          printf("* "); 
      } 
      printf("\n"); 
  } 
}
void cross_shape(int n){
  
  // X pattern
  for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= n; j++) {
          if (j == i || j == n - i + 1) {
              printf("* ");
          } else {
              printf("  ");
          }
      }
      printf("\n");
  }
}
void sandglass(int n){
  int  i, j;

  printf("Enter the number of rows (odd number): ");
  scanf("%d", &n);

  // Checking if the number of rows is odd
  if (n % 2 == 0) {
      printf("Please enter an odd number of rows.\n");
      return;
  }

  // Upper half of the sandglass
  for (i = 0; i < (n + 1) / 2; i++) {
      // Print leading spaces
      for (j = 0; j < i; j++) {
          printf(" ");
      }
      // Print stars
      for (j = 0; j < n - 2 * i; j++) {
          printf("*");
      }
      printf("\n");
  }

  // Lower half of the sandglass
  for (i = (n - 1) / 2 - 1; i >= 0; i--) {
      // Print leading spaces
      for (j = 0; j < i; j++) {
          printf(" ");
      }
      // Print stars
      for (j = 0; j < n - 2 * i; j++) {
          printf("*");
      }
      printf("\n");
  }}
