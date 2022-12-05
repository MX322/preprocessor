#pragma once

#ifndef INTEGER

void initInt(int arr[], int n);
void showInt(int arr[], int n);
void findMinInt(int arr[], int n);
void findMaxInt(int arr[], int n);
void bSortInt(int arr[], int n);
void changeElInt(int arr[]);
#define init initInt;
#define show showInt;
#define findMin findMinInt;
#define findMax findMaxInt;
#define bSort bSortInt;
#define changeEl changeElInt;



#elif FLOAT

void initFl(float arr[], int n);
void showFl(float arr[], int n);
void findMinFl(float arr[], int n);
void findMaxFl(float arr[], int n);
void bSortFl(float arr[], int n);
void changeElFl(float arr[]);
#define init initFl;
#define show showFl;
#define findMin findMinFl;
#define findMax findMaxFl;
#define bSort bSortFl;
#define changeEl changeElFl;



#elif CHAR

void initCh(char arr[], int n);
void showCh(char arr[], int n);
void findMinCh(char arr[], int n);
void findMaxCh(char arr[], int n);
void bSortCh(char arr[], int n);
void changeElCh(char arr[]);
#define init initCh;
#define show showCh;
#define findMin findMinCh;
#define findMax findMaxCh;
#define bSort bSortCh;
#define changeEl changeElCh;


#endif