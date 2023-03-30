#include "holberton.h"
/**
 * _strncpy - concatenate strings, defining the size of second string.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * @n: size of second string
 * Return: Always 0.
 */
char *rot13(char *S)
{
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i,J;

	for (i = 0; S[i] != '\0'; i++)
	{
		for(j=0;a[j]!='\0';j++)
		{
			if(s[i]==a[j])
			{
				s[i]=b[j];
				break;
			}
		}
	}
   return s;	
} 
