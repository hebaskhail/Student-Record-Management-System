#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void adminFunction() ;
void mainMenu();
void addStudent() ;
void viewStudents() ;
void updateStudent();
void deleteStudent();
void studentFunction();

char students [100] [50] ;
int count = 0 ;

int main (){

 mainMenu() ;
   
}

void mainMenu(){
	system("cls");

    printf( "\n\n\n\n\t\t\t\t\t Login As : ");
    printf(  "\n\n\n\t\t\t\t\t 1. Admin ");
    printf(  "\n\n\t\t\t\t\t 2. Student");
    printf(  "\n\n\t\t\t\t\t 3. Exit");
    printf( "\n\n\n\t\t\t\t\t Enter your choice : ");
    
 int choice;
    scanf("%d" , &choice);
    switch (choice)
    {
    case 1:
    	    system("cls");

       adminFunction();
        break;

    case 2:
       system("cls");

       studentFunction() ;
        break;

    case 3:
        system("cls");
          printf( "\t\n\n\n\n\n\n\t\t\t\t\tQuitting The Program");
			exit(0) ;
}
}

void adminFunction(){
    printf("\n\n\t\t\t\t\t | Logged In as Admin |\n");
     printf("\n\n\t\t\t\t\t 1. Add Student Record");
    printf("\n\n\t\t\t\t\t 2. View All Student Records");
    printf( "\n\n\t\t\t\t\t 3. update Student Record");
     printf( "\n\n\t\t\t\t\t 4. Delete Student Record");
     printf( "\n\n\t\t\t\t\t 5. Main Menu ");
     printf("\n\n\t\t\t\t\t 6. Exit");

    int option;
    printf( "\n\n\t\t\t\t\tEnter choice : ");
    
    do{
    	scanf("%d" , &option) ;
    	switch(option){
    		 case 1:
               addStudent() ;
                break;

            case 2:
             system("cls");
            viewStudents() ;
                break;

            case 3:
             updateStudent();
                break;

            case 4:
            deleteStudent() ;
                break;

            case 5:
               mainMenu();
                break;

            case 6:
                system("cls");
                printf( "\t\t\n\n\n\n\n\n\n\t\t\t\t\tQuitting The Program");
                exit(0) ;
		}
	} while (option != '6');
	
}


void addStudent(){
	        system("cls");

	char firstName [50] , lastName [25] ;
	
	printf("Enter the First Name: ") ;
	scanf("%s" ,&firstName ) ;
	
	printf("Enter the Last Name: ") ;
	scanf("%s" ,&lastName ) ;
	
	strcat(firstName , lastName) ;

	strcpy(students[count], firstName);
	count++ ; 
   system("cls");
	adminFunction();
	
}


void viewStudents() {
int index = 0 ;

  printf( "\n\t\t\t\t\t\t|Students Record| \n\n");

    printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
    printf( "Number \t\t\t Name   \n");


	for(int i = 0 ; i < count ; i ++ ){
		printf("%d \t\t\t %s \n \n" , i+1 , students[i]) ;
	}


    printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
  
  
 printf( "\n\n 1. Back to Admin Menu \n");
  printf( " 2. Exit \n");

 printf( "\nEnter choice : ");

int option ;
scanf("%d" , &option) ;
switch(option){
	case 1 : 
	system("cls") ;
	adminFunction();
	break;
	
	case 2 : 
	
 system("cls");
     printf( "\t\n\n\n\n\n\n\t\t\t\t\tQuitting The Program");
exit(0) ;
}  
}

void updateStudent(){
	  system("cls");
	  int number;
  	  printf("Enter the Number of Student: ") ;
	  scanf("%d" , &number) ;

	char firstName [50] , lastName [25] ;
	
	printf("Enter the New First Name : ") ;
	scanf("%s" ,&firstName ) ;
	
	printf("Enter the New Last Name: ") ;
	scanf("%s" ,&lastName ) ;
	
	strcat(firstName , lastName) ;

	strcpy(students[number-1], firstName);
   system("cls");
	adminFunction();
}


void deleteStudent(){
	system("cls");
	  int number;
		printf("Enter the Number of Student: ") ;
		scanf("%d" , &number) ;

	for(int i = number-2; i < count ; i++){
		strcpy(students[i], students[i+1]);
	}
	count-- ;
	system("cls");
	adminFunction();

}

void studentFunction(){
		system("cls");
		  printf( "\n\t  |Students Page| \n\n \n \n");
		  
		 printf( "\n\n \t Welcom as Student \n \n \n \n \n\n");

	printf( "\n\n \t 1. Back to Main Menu \n");
  printf( "\t 2. Exit \n");

 printf( "\n \t Enter choice : ");

int option ;
scanf("%d" , &option) ;
switch(option){
	case 1 : 
	system("cls") ;
	mainMenu();
	break;
	
	case 2 : 
	
 system("cls");
     printf( "\t\n\n\n\n\n\n\t\t\t\t\tQuitting The Program");
exit(0) ;	
}
}
