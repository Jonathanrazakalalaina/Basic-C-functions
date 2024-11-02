#include<stdio.h>

int main()
{
    char alphabet[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char Alphabet[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char phrase[150];
    int occ[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},i,j;
    
    printf("Entrer votre phrase");
    scanf("%s",phrase);
    for(i=0;i<26;i++){
    for(j=0;phrase[j]!='\0';j++){
    if(alphabet[i]==phrase[j]||Alphabet[i]==phrase[j]){
    occ[i]++;
    }
    }
    }
    for(i=0;i<26;i++){
    printf("%c :%d\n", alphabet[i],occ[i]);
    }
    return 0;
}