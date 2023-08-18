/**
 * @file    : myString.c
 * @brief   : Implementation of string.h library.
 * @date    : 18 AUG 2023
 * @details : This file contains the defintion of library functions.
 * @author  : Ahmed Hani Atef
*/


/********************************* Start of Linking section *********************************/
#include <stdio.h>
#include "myString.h"
/********************************** End of Linking section **********************************/


/****************************** Start of function defintion section *************************/

void *my_memchr(const void *str, int c, unsigned int n)
{
    unsigned char *temp_ptr = NULL;
    if (NULL == str)
    {
        printf("Error using my_memchr function due to NULL pointer !!\n");
    }
    else
    {
        temp_ptr = (unsigned char *)str;
        while  (0 != n )
        {
            if ((unsigned char)c == *temp_ptr)
            {
                break;
            }
            else
            {
                n--;
                temp_ptr += 1;
            }
        }
        if (0 == n)
        {
            temp_ptr = NULL;
        }
    }
    return temp_ptr;
}

int my_memcmp(const void *str1, const void *str2, unsigned int n)
{
    signed ret = -1;
    if (NULL == str1 || NULL == str2)
    {
        printf ("invalid due to NULL pointer \n");
    }
    else
    {
        unsigned char *temp_dest = (unsigned char *)str1;
        unsigned char *temp_src = (unsigned char *)str2;

        while (0 != n)
        {
            if (*temp_dest == *temp_src)
            {
                ret = 0;
                n--;
                temp_dest++;
                temp_src++;
            }
            else if (*temp_dest <= *temp_src)
            {
                ret = 1;
                break;
            }
            else 
            {
                ret = -1;
                break;
            } 
        }
        
    }
    return ret;
}

void *my_memcpy(void *dest, const void * src, unsigned int n)
{
    if (NULL == dest || NULL == src)
    {
        printf ("invalid due to NULL pointer \n");
    }
    else
    {
        unsigned char *temp_dest = dest;
        unsigned char *temp_src = (unsigned char *)src;

        while (0 != n)
        {
            *temp_dest = *temp_src;

            n--;
            temp_dest++;
            temp_src++;
        }
    }
    return dest;
}

void *my_memmove(void *str1, const void *str2, unsigned int n)
{
    if (NULL == str1 || NULL == str2)
    {
        printf ("invalid due to NULL pointer \n");
    }
    else
    {
        unsigned char *temp_str1 = (unsigned char *)str1;
        unsigned char *temp_str2 = (unsigned char *)str2;

        while (0 != n)
        {
            *temp_str1 = *temp_str2;

            n--;
            temp_str1++;
            temp_str2++;
        }
    }
    return str1;
}

void *my_memset(void *str, int c, unsigned int n)
{
    if (NULL == str)
    {
        printf ("invalid due to NULL pointer \n");
    }
    else
    {
        unsigned char *temp_str = str;

        while (0 != n)
        {
            *temp_str = c;

            n--;
            temp_str++;
        }
    }
    return str;
}

char *my_strcat(char *dest, const char *src)
{
    if (NULL == dest || NULL == src)
    {
        printf ("invalid due to NULL pointer \n");
    }
    else
    {
        unsigned char *temp_dest = (unsigned char *)dest;
        unsigned char *temp_src = (unsigned char *)src;

        while (*temp_dest != '\0')
        {
            temp_dest++;
        }
        while (*temp_src != '\0')
        {
            *temp_dest = *temp_src;
            temp_dest++;
            temp_src++;
        }
    }
    return dest;
}

char *my_strncat(char *dest, const char *src, unsigned int n)
{
    if (NULL == dest || NULL == src)
    {
        printf ("invalid due to NULL pointer \n");
    }
    else
    {
        unsigned char *temp_dest = (unsigned char *)dest;
        unsigned char *temp_src = (unsigned char *)src;

        while (*temp_dest != '\0')
        {
            temp_dest++;
        }
        while (0 != n)
        {
            *temp_dest = *temp_src;
            temp_dest++;
            temp_src++;
            n--;
        }
    }
    return dest;
}

char *my_strchr(const char *str, int c)
{
    char *temp_ptr = NULL;
    if (NULL == str)
    {
        printf("Error using my_memchr function due to NULL pointer !!\n");
    }
    else
    {
        temp_ptr = (char *)str;
        while  (*temp_ptr != '\0')
        {
            if ((unsigned char)c == *temp_ptr)
            {
                break;
            }
            else
            {
                temp_ptr++;
            }
        }
        if (*temp_ptr == '\0')
        {
            temp_ptr = NULL;
        }
    }
    return temp_ptr;
}

int my_strcmp(const char *str1, const char *str2)
{
    signed ret = -1;
    if (NULL == str1 || NULL == str2)
    {
        printf ("invalid due to NULL pointer \n");
    }
    else
    {
        unsigned char *temp_dest = (unsigned char *)str1;
        unsigned char *temp_src = (unsigned char *)str2;

        while (*temp_dest != '\0' || *temp_src != '\0')
        {
            if (*temp_dest == *temp_src)
            {
                ret = 0;
                temp_dest++;
                temp_src++;
            }
            else if (*temp_dest <= *temp_src)
            {
                ret = 1;
                break;
            }
            else 
            {
                ret = -1;
                break;
            } 
        }
        
    }
    return ret;
}

int my_strncmp(const char *str1, const char *str2, unsigned int n)
{
    signed ret = -1;
    if (NULL == str1 || NULL == str2)
    {
        printf ("invalid due to NULL pointer \n");
    }
    else
    {
        unsigned char *temp_dest = (unsigned char *)str1;
        unsigned char *temp_src = (unsigned char *)str2;

        while (0 != n)
        {
            if (*temp_dest == *temp_src)
            {
                ret = 0;
                n--;
                temp_dest++;
                temp_src++;
            }
            else if (*temp_dest <= *temp_src)
            {
                ret = 1;
                break;
            }
            else 
            {
                ret = -1;
                break;
            } 
        }
        
    }
    return ret;
}

int my_strcoll(const char *str1, const char *str2)
{
    signed ret = -1;
    if (NULL == str1 || NULL == str2)
    {
        printf ("invalid due to NULL pointer \n");
    }
    else
    {
        unsigned char *temp_dest = (unsigned char *)str1;
        unsigned char *temp_src = (unsigned char *)str2;

        while (*temp_dest != '\0' || *temp_src != '\0')
        {
            if (*temp_dest == *temp_src)
            {
                ret = 0;
                temp_dest++;
                temp_src++;
            }
            else if (*temp_dest <= *temp_src)
            {
                ret = 1;
                break;
            }
            else 
            {
                ret = -1;
                break;
            } 
        }
        
    }
    return ret;
}

char *my_strcpy(char *dest, const char *src)
{
    if (NULL == dest || NULL == src)
    {
        printf ("invalid due to NULL pointer \n");
    }
    else
    {
        unsigned char *temp_dest = (unsigned char *)dest;
        unsigned char *temp_src = (unsigned char *)src;
        unsigned char flag = 0;

        while (*temp_dest != '\0')
        {
            if(*temp_src == '\0')
            {
                flag = 1;
            }
            if (flag == 1)
            {
                *temp_dest = '\0';
            }
            else 
            {
                *temp_dest = *temp_src;
            }
            
            temp_dest++;
            temp_src++;
        }
    }
    return dest;
}

char *my_strncpy(char *dest, const char *src, unsigned int n)
{
    if (NULL == dest || NULL == src)
    {
        printf ("invalid due to NULL pointer \n");
    }
    else
    {
        unsigned char *temp_dest = (unsigned char *)dest;
        unsigned char *temp_src = (unsigned char *)src;
        unsigned char flag = 0;

        while (n != 0)
        {
            if(*temp_src == '\0')
            {
                flag = 1;
            }
            if (flag == 1)
            {
                *temp_dest = '\0';
            }
            else 
            {
                *temp_dest = *temp_src;
            }
            n--;
            temp_dest++;
            temp_src++;
        }
        while (*temp_dest != '\0')
        {
            *temp_dest = '\0';
            temp_dest++;
            temp_src++;
        }
        
    }
    return dest;
}

signed int my_strcspn(const char *str1, const char *str2)
{
    unsigned int index = 0;
    if (NULL == *str1 || NULL == *str2)
    {
        printf("invalid due to NULL pointer\n");
    }
    else 
    {
        unsigned char *temp_str1 = (unsigned char *)str1;
        unsigned char *temp_str2 = (unsigned char *)str2;
        unsigned char flag = 0;
        while ('\0' != *temp_str1)
        {
            temp_str2 = (unsigned char *)str2;
            while ('\0' != *temp_str2)
            {
                if (*temp_str1 == *temp_str2)
                {
                    flag = 1;
                    break;
                }
                else
                {
                    temp_str2++;
                }   
            }
            if (1 == flag)
            {
                break;
            }
            else
            {
                temp_str1++;
                index++;
            }
        }
        if (0 == flag)
        {
            index = -1;
        }
    }
    return index;
}

char *my_strerror(int errnum)
{
    static char err[] = "No such file or directory";
    char *message = NULL;
    if(0 != errnum)
    {
        message = err;
    }
    return message;
}

unsigned int my_strlen(const char *str)
{
    unsigned char *temp_str = (unsigned char *)str;
    unsigned int len = 0;
    if (NULL == *str)
    {
        printf("invalid due to NULL pointer\n");
    }
    else 
    {
        while ('\0' != *temp_str)
        {
            len++; 
            temp_str++;
        }
        
    }
    return len;
}

char *my_strpbrk(const char *str1, const char *str2)
{
    char *temp_str1 = (char *)str1;
    char *temp_str2 = (char *)str2;
    if (NULL == *str1 || NULL == *str2)
    {
        printf("invalid due to NULL pointer\n");
    }
    else 
    {

        unsigned char flag = 0;
        while ('\0' != *temp_str1)
        {
            temp_str2 = (char *)str2;
            while ('\0' != *temp_str2)
            {
                if (*temp_str1 == *temp_str2)
                {
                    flag = 1;
                    break;
                }
                else
                {
                    temp_str2++;
                }   
            }
            if (1 == flag)
            {
                break;
            }
            else
            {
                temp_str1++;
            }
        }
    }
    return temp_str1;
}

char *my_strrchr(const char *str, int c)
{
    char *temp_ptr = NULL;
    char *element = NULL;
    if (NULL == str)
    {
        printf("Error using my_memchr function due to NULL pointer !!\n");
    }
    else
    {
        temp_ptr = (char *)str;
        while  (*temp_ptr != '\0')
        {
            if ((unsigned char)c == *temp_ptr)
            {
                element = temp_ptr;
                temp_ptr++;
            }
            else
            {
                temp_ptr++;
            }
        }
    }
    return element;
}

unsigned int my_strspn(const char *str1, const char *str2)
{
    char *temp_str1 = NULL;
    char *temp_str2 = NULL;
    unsigned int num = 0;
    unsigned int flag = 1;

    if (NULL == str1 || NULL == str2)
    {
        printf("invalid due to  NULL pointer !!\n");
    }
    else
    {
        temp_str1 = (char *)str1;
        temp_str2 = (char *)str2;

        while (*temp_str1 != '\0')
        {
            while (*temp_str2 != '\0')
            {
                if (*temp_str1 == *temp_str2)
                {
                    num++;
                    break;
                }
                else  
                {
                    break;
                }
            }
            if(num != 0)
            {
                if(*temp_str1 != *temp_str2)
                {
                    break;
                }
                temp_str1++;
                temp_str2++;
            }
            else
            {
                temp_str1++;
                temp_str2 = (char *)str2;
            } 
        }
    }
    return num;
}

char *my_strstr(const char *haystack, const char *needle)
{
    char *temp_haystack = NULL;
    char *temp_needle = NULL;
    char *temp_check_haystack = NULL;
    char *temp_check_needle = NULL;
    unsigned int num = 0;
    unsigned int flag = 0;

    if (NULL == haystack || NULL == needle)
    {
        printf("invalid due to  NULL pointer !!\n");
    }
    else
    {
        temp_haystack = (char *)haystack;
        temp_needle = (char *)needle;

        while (*temp_haystack != '\0')
        {
            while (*temp_needle != '\0')
            {
                if (*temp_haystack != *temp_needle)
                {
                    temp_needle++;
                }
                else
                {
                    temp_check_haystack = temp_haystack;
                    temp_check_needle = temp_needle;
                    flag = 1;
                    while ((flag == 1) && (*temp_check_needle != '\0'))
                    {
                        if (*temp_check_haystack != *temp_check_needle)
                        {
                            flag = 0;
                        }
                        temp_check_haystack++;
                        temp_check_needle++;
                    }
                    break;
                }
            }
            if (flag == 1)
            {
                break;
            }            
            temp_haystack++;
            temp_needle = (char *)needle;
        }
        if(flag == 0)
        {
                temp_haystack = NULL;
        }
    }
    return temp_haystack;
}

char *my_strtok(char *str, const char *delim)
{
    static char *temp_str1 = NULL;
    static char *temp_str2 = NULL;
    char *temp_delim = NULL; 
    char flag = 0;
    if(NULL == str)
    {
        if (temp_str1 != NULL)
        {
            if(*temp_str1 == '\0')
            {
                temp_str2 = NULL;
            }
        }
        if (NULL == temp_str2)
        {
            printf ("invalid due to NULL pointer and no tokens remains\n");
        }
        else
        {
            temp_str2 = temp_str1;
            return my_strtok(temp_str2,delim);
        }
    }
    else
    {
        temp_str1 = str;
        temp_str2 = str;
        temp_delim = (char *)delim;
        while (*temp_str1 != '\0')
        {
            while (*temp_delim != '\0')
            {
                if ((flag == 0) && (*temp_delim == *temp_str1))
                {
                    *temp_str1 = '\0';
                    flag = 1;
                    temp_delim++;
                    temp_str1++;
                    continue;
                }
                else if ((flag == 1) && (*temp_delim == *temp_str1))
                {
                    *temp_str1 = '\0';
                    flag = 1;
                    temp_delim++;
                    temp_str1++;
                    continue;
                }
                else if ((flag == 0) && (*temp_delim != *temp_str1))
                {
                    temp_delim++;
                    continue;
                }
                else if ((flag == 1) && (*temp_delim != *temp_str1))
                {
                    break;
                }
            }
            if ((flag == 1) && (*(temp_delim+1) != *(temp_str1+1)))
            {
                break;
            } 
            else
            {
                temp_str1++;
                temp_delim = (char *)delim;
            }                  
        }
    }
    return temp_str2;
}

/**************************** End of function declaration section ****************************/


/*===========================================================================================================
*   Revision log
    Date            By                  Description
    ------------    -----------------   ---------------------------------------------------------------------
    18 AUG 2023     Ahmed Hani Atef     Creating of myString.c file and writing first 7 functions defintions.
    19 AUG 2023     Ahmed Hani Atef     Writing second 7 functions defintions.
    20 AUG 2023     Ahmed Hani Atef     Defining the last 8 functions defintions.
=============================================================================================================*/

