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
void rchr();

void main()
{
    printf("str-1 = %s\n",str1);
    printf("str-2 = %s\n",str2);

    len();
    cmp();
    cpy();
    cat();
    chr();
    str();
    rev();
    lwr();
    upr();
    rchr();
}
void len()
{   
    char len[55],len2[55];
    strcpy(len,str1);
    strcpy(len2,str2);

    printf("lenth of str1 = %d\n",strlen(len));
    printf("lenth of str2 = %d\n",strlen(len2));
}
void cmp()
{   
    char cmp[55],cmp2[55];
    strcpy(cmp,str1);
    strcpy(cmp2,str2);

    printf("camper = %d\n",strcmp(cmp2,cmp));
}
void cpy()
{   
    char cpy[55],cpy2[55];
    strcpy(cpy,str1);
    strcpy(cpy2,str2);

    printf("str2 copy to str1 = %s\n",strcpy(cpy,cpy2));
}
void cat()
{   
    char cat[55],cat2[55];
    strcpy(cat,str1);
    strcpy(cat2,str2);

    printf("str2 add to str1 = %s\n",strcat(cat,cat2));

}
void chr()
{   
    char chr[55],*r;
    strcpy(chr,str1);

    r = strchr(chr, 'r');
    printf("Character r is found at position = %d\n", r - chr + 1);
}
void str()
{   
    char str[55],*r;
    strcpy(str,str1);

    r = strstr(str, "Khunt");
    printf("the name in sentens = %s\n",r);
}
void rev()
{   
    char rev[55],*r;
    strcpy(rev,str1);

    r = strrev(rev);
    printf("reversh string = %s\n",r);
}
void lwr()
{   
    char lwr[55],*r;
    strcpy(lwr,str1);

    printf("str-1 all character in lower case = %s\n",strlwr (lwr));
}
void upr()
{   
    char upr[55],*r;
    strcpy(upr,str1);

    printf("str-1 all character in upper case = %s\n",strupr(upr));
}
void rchr()
{   
    char rchr[55],*r;
    strcpy(rchr,str1);

    r = strrchr (rchr,'a');
    printf ("Character last-a is found at position  %d\n",r-rchr+1);
}