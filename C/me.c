#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>

int main() {
    sleep(1);
    printf("Hilo!\n\n");
    sleep(1);
    printf("Small window detected.\n");
    sleep(1);
    printf("Maximizing Window...\n");
    sleep(1);
    HWND consoleWindow = GetConsoleWindow();
    ShowWindow(consoleWindow, SW_MAXIMIZE);
    sleep(1);
    printf("Window maximization successfull.\n\n");
    sleep(1);
    printf("Beginning verification process...\n\n");
    sleep(1);
    printf("!WARNING!\nAnswer wisely, any wrong answer will lead to dire consequences\n!WARNING!\n" );
    sleep(4);
    char a1[10],a2[10],a3[10],a4[10];
    printf("\n1) State your name:\n");
    printf("-> ");
    gets(a1);
    sleep(1);
    if (strcmp(a1,"Naveed.SNR")==0||strcmp(a1,"naveed.snr")==0||strcmp(a1,"Naveed.snr")==0||strcmp(a1,"naveed")==0||strcmp(a1,"Naveed")==0)
        {
          printf("\n2) %s AKA(Mai hoon ......):\n", a1);
          printf("-> ");
        }
    else
      {
        printf("\nError! Invalid user.\n");
        sleep(1);
        printf("Verification Incomplete.\n");
        sleep(1);
        printf("Access Denied.\n");
        sleep(1);
        printf("\nInitiating Shutdown Protocol in\n");
        sleep(1);
        printf("3 ");
        sleep(1);
        printf("2 ");
        sleep(1);
        printf("1 ");
        sleep(1);
        system("C:\\WINDOWS\\System32\\shutdown /s");

      }
    gets(a2);
    sleep(1);
    if (strcmp(a2,"Chender")==0||strcmp(a2,"chender")==0)
        {
          printf("\n3) What is the first song you ever heard:\n");
          printf("-> ");
        }
    else
    {
      printf("\nError! Invalid user.\n");
      sleep(1);
      printf("Verification Incomplete.\n");
      sleep(1);
      printf("Access Denied.\n");
      sleep(1);
      printf("\nInitiating Shutdown Protocol in\n");
      sleep(1);
      printf("3 ");
      sleep(1);
      printf("2 ");
      sleep(1);
      printf("1 ");
      sleep(1);
      system("C:\\WINDOWS\\System32\\shutdown /s");
    }
    gets(a3);
    sleep(1);
    if (strcmp(a3,"Ya Ali")==0||strcmp(a3,"ya ali")==0)
        printf("\n4) Who do you see in this image?\n");
    else
    {
      printf("\nError! Invalid user.\n");
      sleep(1);
      printf("Verification Incomplete.\n");
      sleep(1);
      printf("Access Denied.\n");
      sleep(1);
      printf("\nInitiating Shutdown Protocol in\n");
      sleep(1);
      printf("3 ");
      sleep(1);
      printf("2 ");
      sleep(1);
      printf("1 ");
      sleep(1);
      system("C:\\WINDOWS\\System32\\shutdown /s");
    }
    printf("loading...\n");
    sleep(3);
    char s;
    FILE *fp;
    fp=fopen("naveed.txt","r");
    do
    {
		    s=getc(fp);
		    printf("%c",s);
	 }while(s!=EOF);
   fclose(fp);
   printf("\n");
   printf("-> ");
   gets(a4);
   sleep(1);
  if (strcmp(a4,"me")==0||strcmp(a2,"naveed")==0||strcmp(a2,"chender")==0||strcmp(a2,"snr")==0)
       printf("Verification Complete.\n");
  printf("Access Granted.\n");
  sleep(1);
  printf("loading message from kibs AKA khoje\n");
  sleep(1);
  printf(".");
  sleep(1);
  printf(".");
  sleep(1);
  printf(".\n\n");
  sleep(2);
  printf("Mr.Chender wishing you very very blissful, entertaining, amusing, marvellous, magnificent, heartthrobing, mind bending, never seen before birthday.\nwaen chem payi ki yim chi kheali mye wenmeti ami manz gachi ni kihn (waen agar gachi su gov wariyah asel) tuhi aesew dohos panis kamras\nmanz biht game gindaana(garikyen wenew bi chus neetich tayeri karaan XD) waen yuth tyuth enjoy kerzew yi doh, aki latti chu weriyas manz yiwaan\nbeyi maklawti yi neet jaldi khoushkeath wech waen :_\) HAPPY BIRTHDAY!!! \n\n~khoje sb " );
    getch();
    return 0;
}
