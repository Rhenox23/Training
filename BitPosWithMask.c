#include<stdio.h>
void main()
{
 int input_no;
 scanf("%d",&input_no);
 long bitmask=00011000;
 int extractedbit=(input_no & bitmask);
 int bitequivalent=extractedbit>>3;
 printf("%d",bitequivalent);
 }
