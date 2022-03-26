//Write a program that prints the numbers from 1 to 100. But for multiples of three print “Obdure” instead of the number and for the multiples of five print “Infotech”. For numbers which are multiples of both three and five, print “ObdureInfotech”.
#include<stdio.h>  
#include<conio.h>
int main()    
{    
 int i;
 for(i=1;i<=100;i++)
    {
     if(i%15==0)
        {
         printf("\nObdure Infotech");
        }
     else if(i%5==0)
            {
             printf("\nInfotech");
            }
           else if(i%3==0)
                  {
                   printf("\nObdure");
                  }
                else
                    {
                     printf("\n%d",i);
                    }
    }
 return 0;
}

/*1
2
Obdure
4
Infotech
Obdure
7
8
Obdure
Infotech
11
Obdure
13
14
Obdure Infotech
16
17
Obdure
19
Infotech
Obdure
22
23
Obdure
Infotech
26
Obdure
28
29
Obdure Infotech
31
32
Obdure
34
Infotech
Obdure
37
38
Obdure
Infotech
41
Obdure
43
44
Obdure Infotech
46
47
Obdure
49
Infotech
Obdure
52
53
Obdure
Infotech
56
Obdure
58
59
Obdure Infotech
61
62
Obdure
64
Infotech
Obdure
67
68
Obdure
Infotech
71
Obdure
73
74
Obdure Infotech
76
77
Obdure
79
Infotech
Obdure
82
83
Obdure
Infotech
86
Obdure
88
89
Obdure Infotech
91
92
Obdure
94
Infotech
Obdure
97
98
Obdure
Infotech*/