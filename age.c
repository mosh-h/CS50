//A short programme interacting with the user

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>


void userdetails (void);

int main (void)
{  
    
    userdetails();

}


void userdetails(void)
{
    //get users details
    string name = get_string("Hi, what is your first name?");
    string location = get_string("Where do you live?");
    int age = get_int("What is your age?");

    //print back user details
    printf("Your name is %s,", name);
    printf(" your age is %i,", age);
    printf(" and you live in %s.\n\n", location);

    //multiply users age
    sleep(3);
    int ageindays = (age * 365);
    printf("By the way, I've just calculated your age in days,\n");
    sleep(2);
    printf("it's %i days. Cool right!\n\n", ageindays);

    //tell users how many characters in their first name
    sleep(3);
    int namelength = strlen(name);
    printf("and your first name is %i characters long\n\n", namelength);
}
