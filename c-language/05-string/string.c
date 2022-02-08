#include <stdio.h>
#include <string.h>

char str1[60] = "My Name Is Khunt Karan.";
char str2[120] = "I am a Software Engineer.";

void len();
void cmp();
void cpy();
void cat();
void chr();
void str();
void rev();
void lwr();
void upr();
void ncpy();
void ncat();
void ncmp();
void rchr();

void main()
{
    printf("str-1 = %s\n",str1);
    printf("str-2 = %s\n",str2);

    printf("1.  how many character in both string\n");
        len();
    printf("\n2.  str-1 camper to str-2\n");
        cmp();
    printf("\n3.  str-1 copy to str-2\n");
        cpy();
    printf("\n4.  str-2 add to str-1\n");
        cat();
    printf("\n5.  Character r is found at position in str-1\n");
        chr();
    printf("\n6.  the name in str-1\n");
        str();
    printf("\n7.  reversh str-1\n");
        rev();
    printf("\n8.  str-1 all character in lower case\n");
        lwr();
    printf("\n9.  str-1 all character in upper case\n");
        upr();
    printf("\n10.  str2 first 2-character cut to str1 first 2-character\n");
        ncpy();
    printf("\n11.  str2 first 6-character copy to str1\n");
        ncat();
    printf("\n12.  str1 first 5-character camper to str2\n");
        ncmp();
    printf("\n13.  Character last-a is found at position\n");
        rchr();
}


void len()
{   
    char len[55],len2[55];
    strcpy(len,str1);
    strcpy(len2,str2);

    printf("    lenth of str1 = %d\n",strlen(len));
    printf("    lenth of str2 = %d\n",strlen(len2));
}
void cmp()
{   
    char cmp[55],cmp2[55];
    strcpy(cmp,str1);
    strcpy(cmp2,str2);

    printf("    '0'=both are equal    '-1'str-1 is big     '+1'=str-2 is big  = %d\n",strcmp(cmp,cmp2));
}
void cpy()
{   
    char cpy[55],cpy2[55];
    strcpy(cpy,str1);
    strcpy(cpy2,str2);

    printf("    %s\n",strcpy(cpy,cpy2));
}
void cat()
{   
    char cat[55],cat2[55];
    strcpy(cat,str1);
    strcpy(cat2,str2);

    printf("    %s\n",strcat(cat,cat2));

}
void chr()
{   
    char chr[55],*r;
    strcpy(chr,str1);

    r = strchr(chr, 'r');
    printf("    %d\n", r - chr + 1);
}
void str()
{   
    char str[55],*r;
    strcpy(str,str1);

    r = strstr(str, "Khunt");
    printf( "    %s\n",r);
}
void rev()
{   
    char rev[55],*r;
    strcpy(rev,str1);

    r = strrev(rev);
    printf("    %s\n",r);
}
void lwr()
{   
    char lwr[55],*r;
    strcpy(lwr,str1);

    printf("    %s\n",strlwr (lwr));
}
void upr()
{   
    char upr[55],*r;
    strcpy(upr,str1);

    printf("    %s\n",strupr(upr));
}
void ncpy()
{   
    char ncpy[55],ncpy2[55];
    strcpy(ncpy,str1);
    strcpy(ncpy2,str2);

    printf("     %s\n",strncpy(ncpy,ncpy2,2));
}
void ncat()
{
    char ncat[55],ncat2[55];
    strcpy(ncat,str1);
    strcpy(ncat2,str2);

    printf("     %s\n",strncat(ncat,ncat2,6));
}
void ncmp()
{
    char ncmp[55],ncmp2[55];
    strcpy(ncmp,str1);
    strcpy(ncmp2,str2);

    printf("     %d\n",strncmp(ncmp,ncmp2,5));
}
void rchr()
{   
    char rchr[55],*r;
    strcpy(rchr,str1);

    r = strrchr (rchr,'a');
    printf ("     %d\n",r-rchr+1);
}