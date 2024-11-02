#include <stdio.h>

void codeCesar(char message[], int decal)
{
    for(int i=0; message[i]!='\0'; i++)
    {
        if(message[i]>='a' && message[i]<='z')
        {
            message[i]='a'+(message[i]-'a'+decal)%26;
        } else if(message[i]>='A' && message[i]<='Z')
        {
            message[i]='A'+(message[i]-'A'+decal)%26;
        }
    }
}

int main()
{
    char message[100];
    int decal;

    printf("Entrez le message : ");
    //scanf("%s", message);
    fgets(message, sizeof(message), stdin);

    printf("Entrez le decalage : ");
    scanf("%d", &decal);

    codeCesar(message, decal);

    printf("Le message codé est : %s", message);

    return 0;

}








