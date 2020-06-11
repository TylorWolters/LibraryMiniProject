#include <stdio.h> //for everything else
#include <string.h> //for my strstr function.
//#include <stdlib.h> //for exit

struct Address{
    int houseNum; /*their house number.*/
    char Street[60]; /*the street they live on.*/
    char City[20]; /*city member lives in.*/
    char State[2]; /*2 char state the member lives in.*/
    int zip; /*their zip code.*/
    };

struct Member {
    int MID; /*member ID.*/
    char FName[20]; /*First Name.*/
    char LName[20]; /*Last Name.*/
    struct Address Add; 
    int age; /*their age.*/
    /*Example: 00017389 Jacob Bellamay, 2988..., 20.*/
    };

struct Book{
    char title[60]; /*book title.*/
    char AFName[20]; /*authors first name*/
    char ALName[20]; /*authors last name.*/
    int isbn10; /* the books ISBN-10 Number.*/
    /*Example: Fantastic Mr. Fox, Roald Dahl, 9780142410349*/
    };

/*Main Home Screen of User Interface*/
int home_screen(char clerk_first_name[], char clerk_last_name[]){
int choice = 0;
printf("\n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n");
printf("\n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n");
printf("\n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n");
printf("\n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n");
printf("     LOGGED IN AS: %s %s \n", clerk_first_name, clerk_last_name);
printf("  (IF THIS IS NOT YOU, EXIT AND RE-LOG)\n");
printf("----------------------------------------\n");
printf("\n");
printf("          Leaf River Public Library\n");
printf("\n");
printf("----------------------------------------\n");
printf("(1.) BOOK CHECKOUT / RETURN\n");
printf("----------------------------------------\n");
printf("(2.) BOOK SEARCH\n");
printf("----------------------------------------\n");
printf("(3.) MEMBER ENTRY / REMOVAL\n");
printf("----------------------------------------\n");
printf("(4.) MEMBER SEARCH\n");
printf("----------------------------------------\n");
printf("(0.) EXIT\n");
printf("----------------------------------------\n");
printf("\n");
scanf("%d", &choice);
return choice;
}

int member_choice_menu(char clerk_first_name[], char clerk_last_name[]){
int choice = 0;
printf("\n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n");
printf("\n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n");
printf("\n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n");
printf("\n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n");
printf("     LOGGED IN AS: %s %s \n", clerk_first_name, clerk_last_name);
printf("  (IF THIS IS NOT YOU, EXIT AND RE-LOG)\n");
printf("----------------------------------------\n");
printf("\n");
printf("          Leaf River Public Library\n");
printf("\n");
printf("----------------------------------------\n");
printf("(1.) MEMBER ENTRY\n");
printf("----------------------------------------\n");
printf("(2.) MEMBER REMOVAL\n");
printf("----------------------------------------\n");
printf("(0.) RETURN TO MAIN MENU\n");
printf("----------------------------------------\n");
printf("\n");
scanf("%d", &choice);
return choice;
}

int book_choice_menu(char clerk_first_name[], char clerk_last_name[]){
int choice = 0;
printf("\n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n");
printf("\n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n");
printf("\n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n");
printf("\n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n");
printf("     LOGGED IN AS: %s %s \n", clerk_first_name, clerk_last_name);
printf("  (IF THIS IS NOT YOU, EXIT AND RE-LOG)\n");
printf("----------------------------------------\n");
printf("\n");
printf("          Leaf River Public Library\n");
printf("\n");
printf("----------------------------------------\n");
printf("(1.) BOOK CHECKOUT\n");
printf("----------------------------------------\n");
printf("(2.) BOOK RETURN\n");
printf("----------------------------------------\n");
printf("(0.) RETURN TO MAIN MENU\n");
printf("----------------------------------------\n");
printf("\n");
scanf("%d", &choice);
return choice;
}



/* add member function */
int add_member(){
printf("\n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n");
printf("\n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n");
printf("\n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n");
printf("\n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n");
FILE * fPointer; //make a file pointer, call it fPointer
fPointer = fopen("library_members.txt", "r"); //use my pointer, to open and read the members list file
int line_counter = 0; //line count made and initialized
int check = 0;
while(!feof(fPointer)) //until i reach the end of my file (feof = file end of file)
{
  check = fgetc(fPointer); // takes the last char from a line, which is \n
  if(check == '\n') //(if) when I reach the end of a line
  {
    line_counter++; //record that as a line reached
  }
}
line_counter = line_counter-2; //the first 2 lines of my file are filler
fclose(fPointer); //close pointer, because we're opening it up again in a different way later in this method.
++line_counter; //new line, new member! Have to increment upwards.
struct Member newMember;
printf("What is the members first name?\n");
scanf("%s", newMember.FName);
printf("What is the members last name?\n");
scanf("%s", newMember.LName);
printf("What is the members house number?\n");
scanf("%d", &newMember.Add.houseNum);
printf("What is the members street name? (use underscores instead of spaces)\n");
scanf("%s", newMember.Add.Street);
printf("What is the members city name? (use underscores instead of spaces)\n");
scanf("%s", newMember.Add.City);
printf("What is the members state name? (2 characters, Ex: IL, WI, CA)\n");
scanf("%s", newMember.Add.State);
printf("What is the members zipcode?\n");
scanf("%d", &newMember.Add.zip);
printf("What is the members age?\n");
scanf("%d", &newMember.age);
fPointer = fopen("library_members.txt", "a"); //use my pointer, to open and append the members list file
fprintf(fPointer, "ID%d | %s %s | %d %s, %s %s. %d | %d \n", line_counter, newMember.FName, newMember.LName, newMember.Add.houseNum, newMember.Add.Street, newMember.Add.City, newMember.Add.State, newMember.Add.zip, newMember.age);
fclose(fPointer);
return line_counter;
}





void find_member(){
printf("\n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n");
printf("\n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n");
printf("\n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n");
printf("\n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n");
char str[100];
int answer=0;
int check = 1;
int line_checker = 0;
int found_line = 0;
printf("Enter the member's first name, or last name, or ID (type ID followed by their #) so 4 would be ID4. \n");
char searchword[20] = "placeholder";
scanf("%s", searchword);
printf("%s \n \n \n", searchword);
FILE * fPointer; //make a file pointer, call it fPointer
fPointer = fopen("library_members.txt", "r"); //use my pointer, to open and read the members list file
    while(!feof(fPointer)) //until the last line
    { 
        if( fgets (str, 100, fPointer)!=NULL ) //as long as i'm not reading null
        { 
        line_checker += 1; //add to the counter, and
        if (strstr(str, searchword) != NULL) //check the current line, to see if it contains the word
            {
            found_line = line_checker; //record the line i found it on
            printf("%s\n", str);
            printf("Is this who you were looking for? (1.) yes (2. no)\n");
            scanf("%d", &answer); // either answer closes the promt
            }
        }
    }
fclose(fPointer);
}

void remove_member(){
printf("\n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n");
printf("\n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n");
printf("\n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n");
printf("\n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n");
int result;
char str[100];
int check = 1;
int line_checker = 0;
int found_line = 0;
char searchword[20] = "placeholder";
printf("Please enter users first, or last name. (Case Sensitive)\n");
scanf("%s", searchword);
FILE * fPointer; //make a file pointer, call it fPointer
fPointer = fopen("library_members.txt", "r"); //use my pointer, to open and read the members list file
while(!feof(fPointer)){ //until the last line
if( fgets (str, 100, fPointer)!=NULL ){ //as long as i'm not reading null
   line_checker += 1; //add to the counter, and
   if (strstr(str, searchword) != NULL) //check the current line, to see if it contains the word
        {
        found_line = line_checker; //record the line i found it on
        printf("%s", str);
        break;
        }
   }
}
printf("Confirm: is this the users account? (1) yes (2) no \n");
scanf("%d", &result);
if(result!=1){return;}
char str2[100];
int check2 = 1;
int line_checker2 = 0;
FILE * fPointer2;
fPointer2 = fopen("library_members2.txt", "a");//use my pointer, to open and append the replacement members list 
fPointer = fopen("library_members.txt", "r"); //use my pointer, to open and read the members list file
while(!feof(fPointer)){ //until the last line
line_checker2 += 1;
if( fgets (str, 100, fPointer)!=NULL && line_checker2 != found_line){ //as long as i'm not reading null, AND its not the removed member
    fputs(str, fPointer2); //print into new copy of database.
   }
if(line_checker2 == found_line){ //if this is the user being removed
    fputs(" ", fPointer2); //replace it with a blank space.
   }
}
remove("library_members.txt");
rename("library_members2.txt", "library_members.txt");
fclose(fPointer);
fclose(fPointer2);
}


void borrow_book(char clerk_first_name[], char clerk_last_name[]){
printf("\n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n");
printf("\n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n");
printf("\n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n");
printf("\n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n");
int result;
char str[100];
int check = 1;
int line_checker = 0;
int found_line = 0;
char searchword[20] = "placeholder";
char customer[90] = "placeholder";
printf("Please enter the FULL name, or ID# of the indiviual borrowing the book.\n");
scanf("%s", customer);
printf("Please enter book title, ISBN10, or author\n");
scanf("%s", searchword);
FILE * fPointer; //make a file pointer, call it fPointer
fPointer = fopen("book_list.txt", "r"); //use my pointer, to open and read the members list file
while(!feof(fPointer)){ //until the last line
if( fgets (str, 100, fPointer)!=NULL ){ //as long as i'm not reading null
   line_checker += 1; //add to the counter, and
   if (strstr(str, searchword) != NULL) //check the current line, to see if it contains the word
        {
        found_line = line_checker; //record the line i found it on
        printf("%s", str);
        break;
        }
   }
}
printf("Confirm: is this the correct book? (1) yes (2) no \n");
scanf("%d", &result);
if(result!=1){return;}
char str2[100];
int check2 = 1;
int line_checker2 = 0;
FILE * fPointer2;
FILE * fPointer3;
fPointer3 = fopen("taken_book_list.txt", "a");//use my pointer, to open and append the taken books list
fPointer2 = fopen("book_list2.txt", "w");//use my pointer, to open and append the replacement members list 
fPointer = fopen("book_list.txt", "r"); //use my pointer, to open and read the members list file
while(!feof(fPointer)){ //until the last line
line_checker2 += 1;
if( fgets (str, 100, fPointer)!=NULL && line_checker2 != found_line){ //as long as i'm not reading null, AND its not the removed member
    fputs(str, fPointer2); //print into new copy of database.
   }
if(line_checker2 == found_line){ //if this is the book being removed
    fputs(str, fPointer3); //add it to the taken book list
    fprintf(fPointer3, "Rang out by %s %s, checked out by %s", clerk_first_name, clerk_last_name, customer);
    fputs("\n", fPointer2); //replace it with a blank space.
   }
}
remove("book_list.txt");
rename("book_list2.txt", "book_list.txt");
fclose(fPointer);
fclose(fPointer2);
fclose(fPointer3);
}

void return_book(){
printf("\n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n");
printf("\n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n");
printf("\n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n");
printf("\n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n");
int result;
char str[100];
int check = 1;
int line_checker = 0;
int found_line = 0;
char searchword[20] = "placeholder";
printf("Please enter book title, ISBN10, or author\n");
scanf("%s", searchword);
FILE * fPointer; //make a file pointer, call it fPointer
fPointer = fopen("taken_book_list.txt", "r"); //use my pointer, to open and read the members list file
while(!feof(fPointer)){ //until the last line
if( fgets (str, 100, fPointer)!=NULL ){ //as long as i'm not reading null
   line_checker += 1; //add to the counter, and
   if (strstr(str, searchword) != NULL) //check the current line, to see if it contains the word
        {
        found_line = line_checker; //record the line i found it on
        printf("%s", str);
        break;
        }
   }
}
printf("Confirm: is this the correct book? (1) yes (2) no \n");
scanf("%d", &result);
if(result!=1){return;}
char str2[100];
int check2 = 1;
int line_checker2 = 0;
FILE * fPointer2;
FILE * fPointer3;
fPointer3 = fopen("book_list.txt", "a");//use my pointer, to open and append the taken books list
fPointer2 = fopen("taken_book_list2.txt", "w");//use my pointer, to open and append the replacement members list 
fPointer = fopen("taken_book_list.txt", "r"); //use my pointer, to open and read the members list file
while(!feof(fPointer)){ //until the last line
line_checker2 += 1;
if( fgets (str, 100, fPointer)!=NULL && line_checker2 != found_line){ //as long as i'm not reading null, AND its not the removed member
    fputs(str, fPointer2); //print into new copy of database.
   }
if(line_checker2 == found_line){ //if this is the book being removed
    fputs(str, fPointer3);     
    fputs(" ", fPointer2); //replace it with a blank space.
   }
}
remove("taken_book_list.txt");
rename("taken_book_list2.txt", "taken_book_list.txt");
fclose(fPointer);
fclose(fPointer2);
fclose(fPointer3);
}

void find_book(){
printf("\n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n");
printf("\n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n");
printf("\n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n");
printf("\n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n");
char str[100];
int check = 1;
int line_checker = 0;
int found_line = 0;
int result=0;
printf("Enter the title, author first/last name, or ISBN10. \n");
char searchword[20] = "placeholder";
scanf("%s", searchword);
FILE * fPointer; //make a file pointer, call it fPointer
fPointer = fopen("book_list.txt", "r"); //use my pointer, to open and read the members list file
while(!feof(fPointer)){ //until the last line
if( fgets (str, 100, fPointer)!=NULL ){ //as long as i'm not reading null
   line_checker += 1; //add to the counter, and
   if (strstr(str, searchword) != NULL) //check the current line, to see if it contains the word
        {
        found_line = line_checker; //record the line i found it on
        printf("%s", str);    
        break;
        }
   }
}
printf("Confirm: is this the book you are looking for? (1) yes (2) no \n");
scanf("%d", &result);
if(result!=1){return;}
fclose(fPointer);
}

int main()
{
char clerk_first_name[30]; /*first name of clerk helping customers.*/
char clerk_last_name[30]; /*last name of clerk helping customers.*/
int case_int_1=1;
int case_int_2=1;
int case_int_3=1;
printf("EMPLOYEE FIRST NAME ENTRY: \n");
scanf("%s", clerk_first_name);
printf("EMPLOYEE LAST NAME ENTRY: \n");
scanf("%s", clerk_last_name);
while (case_int_1 != 0)
{
case_int_1 = home_screen(clerk_first_name, clerk_last_name);
switch(case_int_1){
    case 1:
        case_int_2 = book_choice_menu(clerk_first_name, clerk_last_name);
        switch(case_int_2)
            {
            case 1: 
                borrow_book(clerk_first_name, clerk_last_name);
                break;
            case 2:
                return_book();
                break;
            case 0:
                breahttps://www.google.com/k;
            default : //anything else
                break;  
            }
        break;
    case 2:
        find_book();
        break;
    case 3:
    case_int_3= member_choice_menu(clerk_first_name, clerk_last_name);
        switch(case_int_3)
            {
            case 1: 
                add_member();
                break;
            case 2:
                remove_member();
                break;
            case 0:
                break;
            default : //anything else
                break;  
            }
    case 4:
        find_member();
        break;
    default:
    case_int_1 = 0;
}
}


/*Good bye message*/
printf("\n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n");
printf("\n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n");
printf("\n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n");
printf("\n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n");
printf("          Have a nice day!\n \n");
}
