/**
 * @file    : myString.h
 * @brief   : Implementation of string.h library.
 * @date    : 18 AUG 2023
 * @details : This file contains the declaration of library functions.
 * @author  : Ahmed Hani Atef
*/


#ifndef MYSTRING_H
#define MYSTRING_H

/***************** Start of definitions section *****************/
#define NULL (0)
/****************** End of definitions section ******************/

/************ Start of function declaration section *************/

void *my_memchr(const void *str, int c, unsigned int n);
int my_memcmp(const void *str1, const void *str2, unsigned int n);
void *my_memcpy(void *dest, const void * src, unsigned int n);
void *my_memmove(void *str1, const void *str2, unsigned int n);
void *my_memset(void *str, int c, unsigned int n);
char *my_strcat(char *dest, const char *src);
char *my_strncat(char *dest, const char *src, unsigned int n);
char *my_strchr(const char *str, int c);
int my_strcmp(const char *str1, const char *str2);
int my_strncmp(const char *str1, const char *str2, unsigned int n);
int my_strcoll(const char *str1, const char *str2);
char *my_strcpy(char *dest, const char *src);
char *my_strncpy(char *dest, const char *src, unsigned int n);
signed int my_strcspn(const char *str1, const char *str2);
char *my_strerror(int errnum);
unsigned int my_strlen(const char *str);
char *my_strpbrk(const char *str1, const char *str2);
char *my_strrchr(const char *str, int c);
unsigned int my_strspn(const char *str1, const char *str2);
char *my_strstr(const char *haystack, const char *needle);
char *my_strtok(char *str, const char *delim);
unsigned int my_strxfrm(char *dest, const char *src, unsigned int n);

/************* End of function declaration section **************/

#endif

/*==================================================================================================
*   Revision log
    Date            By                  Description
    ------------    -----------------   ------------------------------------------------------------
    18 AUG 2023     Ahmed Hani Atef     Creating of myString.h file and write functions declarations

====================================================================================================*/