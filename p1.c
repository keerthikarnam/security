#include<stdio.h>
#include<string.h>
void main()
{
    char str[]="Hello World";
    char str1[11], str2[11];
    int i,len;
    len=strlen(str);

    printf("After applying AND operation, corresponding ASCII and its values are :\n");
    for(i=0;i<len;i++){
        str1[i]=str[i] & 127;
        printf("%d = %c\n",str[i],str1[i]);
    }
    printf("Output String : %s\n",str1);

    printf("After applying OR operation, corresponding ASCII and its values are :\n");
    for(i=0;i<len;i++){
        str2[i]=str[i] ^ 127;
        printf("%d = %c\n",str[i],str2[i]);
    }
    printf("Output String : %s\n",str2);
    
}
