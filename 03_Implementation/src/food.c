#include <food.h>

struct Node{

	char foodname[50];
	int quantity;
	float price;
	int data;
	struct Node *next;

};
typedef struct Node node ;
node *head, *list;

int deletefood(int serial){

	node *temp;
	temp=(node *)malloc(sizeof(node));

	temp = list;


	if(temp->data != serial){

		while(temp->next->data != serial){
			temp = temp->next;
		}

		if(temp->next->data == serial){

			temp->next = temp->next->next;
			cls();
			printf("\n\n\n\n\t\t\tDeleting Item %d ",serial);for(int cs=0;cs<4;cs++)
			{
			    printf(" ."); //Sleep(400);}

			printf("\n\n\n\n\t\t\tDeleted Successfully \n");

		}
	}
		else{
			printf("\n\n\n\n\t\t\tFood Item Not Found\n"); //Sleep(500);
		}

		head = temp ;

	}
	else{

		temp = temp->next;
		cls();
		printf("\n\n\n\n\t\t\tDeleting Item %d ",serial);for(int cs=0;cs<4;cs++)
		{
		    printf(" ."); //Sleep(400);}

		printf("\n\n\n\n\t\t\tDeleted Successfully \n"); //Sleep(500);

		head = temp ;

		list=head;
	}
	return 1;
}
}
