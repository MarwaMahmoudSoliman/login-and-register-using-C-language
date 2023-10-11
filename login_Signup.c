#include <stdio.h>
struct login{
    char fname[100];
    char lname[20];
    char username[20];
    char password[20];
    
};
registe()
{
    FILE * log;
    log = fopen("login12.txt","w");
    struct login l ;
    printf("Enter first name:");scanf("%s",l.fname);
    printf("Enter last number:");scanf("%s",l.lname);
    printf("Enter Username : ");scanf("%s",l.username);
    printf("Enter password:");scanf("%s",l.password);
    fwrite(&l,sizeof(l),1,log);
    fclose(log);
    printf("\n\nyour User name is UserID\n");
    printf("Now login with UserID and Passsword\n");
    printf("\nPress any key to continue ......");
    getch();
    system("CLS");
    login();
}
login()
{
    char username[200],password[20];
    FILE*log;
    log=fopen("login12.txt","r");
    struct login l ;
    printf ("UserID:");
    scanf("%s",&username);
    printf("Password:");
    scanf("%s",&password);
    while(fread(&l,sizeof(1),1,log))
    {
        if(strcmp(username,l.username) == 0 && strcmp(password,l.password) == 0)
        {
        printf("Successful login\n");
        
    }
        else{
        printf("please Enter correct UserID and Password");
        
    }
    }
    fclose(log);
    
}

int main() {
    int cho;
    printf("Press 'l' for register  \nPress '2' for login\n\n");
    scanf("%d",&cho);
    if(cho == 1)
    {
        system("CLS");
      registe();
    }
else if(cho == 2)
{
    system("CLS");
  login();
}
    
}