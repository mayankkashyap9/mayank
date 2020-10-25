# mayank
code for cipher block with digital signature
#include <stdio.h>
#include <stdlib.h>

 typedef struct node
{

char data;
struct node *next;
} node;

typedef struct point
{
int key;
struct point *link;
} point;

node * createLinkedList (int n);
point * ForKey ();


void displaykey ();

void displayList (node * head);


int
main ()
{


int n = 0;

node * HEAD = NULL;

point * mp = NULL;

printf ("\n number of alphabets to be sent\n");

scanf ("%d", &n);

HEAD = createLinkedList (n);


displayList (HEAD);

publickeys ();


printf ("\nthe private key for the sender will be of 2 digit\n");

mp = ForKey ();
node * t;

point * j;

j = (point *) malloc (sizeof (point));

t = (node *) malloc (sizeof (node));

t->next = j;

displaykey ();
return 0;
}

node * createLinkedList (int n)
{
int i;

node * head = NULL;		//for the first node
  node *temp = NULL;		//for the next node
  node *p = NULL;		// for iteration
  for (i = 0; i < n; i++)
    {
temp = (node *) malloc (sizeof (node));

printf ("\n the %dth message will be \n", i + 1);

scanf ("%s", &(temp->data));
printf("\nthe %dth message will be encrypted\t",i+1);
temp->data=temp->data+3;
printf(" %c\n",(temp->data));

temp->next = NULL;

if (head == NULL)

	{

head = temp;

}
      else
	{
p = head;
while (p->next != NULL)

p = p->next;

p->next = temp;

}

}

return head;

}

void displayList (node * head)
{

node * p = head;
while (p != NULL)

    {

printf ("\t %c", p->data);
p = p->next;

}

}
void publickeys ()
{
    
printf ("\nkeys for the algo\n");
printf (" public key for sender A is ' sonA '\n");
printf (" public key for receiver B is ' daughterB '\n");

}
point * ForKey ()
{
point * m = (point *) malloc (sizeof (point));

m->link = NULL;
return m;

}
void displaykey ()
{

node * r;


r = (point *) malloc (sizeof (point));
printf ("enter the key\n");
scanf ("%d", &(r->data));
printf ("%d", (r->data));
}
