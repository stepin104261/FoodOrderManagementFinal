#ifndef FOOD_H_INCLUDED
#define FOOD_H_INCLUDED

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#include<windows.h>
//#include<time.h>

/// Update & Insert Function
void insertfirst(int data, char foodname[25], int quantity, float price);
void insertmid(int pos, int data, char foodname[25], int quantity, float price);
void insertend(int data, char foodname[25], int quantity, float price);
void updatefood(int udata, int uquantity);

/// Display Function
void foodlist();
void order_view(int order, int quantity, int or_no);
void main_menu();

///Delete & Count Function
int deletefood(int serial);
int countitem();

///extra design Function
void cls();
void echo(char print[]);
void br(int line);
void pre(int tab);
void span(int space);
//void ccolor(int clr);
void pwelcome();
//void loadingbar();
void middle1(void);
void middtab1(void);
void backuploader(void);

//typedef struct Node node ;

#endif // FOOD_H_INCLUDED
