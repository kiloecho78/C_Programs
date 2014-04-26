#include <stdio.h>
#include <string.h>
struct name
{
	char firstName[50];
	char middleName[50];
	char lastName[50];
};
struct client
{
	struct name clientName;
	unsigned long clientID;
	unsigned long phoneNumber;
};
int main()
{
struct client c;
c.clientID = (unsigned long)1243;
c.phoneNumber = (unsigned long)7076548135;
strcpy(c.clientName.firstName, "Keith");
strcpy(c.clientName.middleName, "Wayne");
strcpy(c.clientName.lastName, "Everitt");

printf("Client ID:         : %d\n", c.clientID);
printf("Client Phone#      : %d\n", c.phoneNumber);
printf("Client First Name  : %d\n", c.clientName.firstName);
printf("Client Middle Name : %d\n", c.clientName.middleName);
printf("Client Last Name   : %d\n", c.clientName.lastName);
return 0;
}