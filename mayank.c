#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
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

void displaykey (int);

void displayList (node * head);


node * HEAD = NULL;
point * mp = NULL;
int main ()
{

int n = 0;





printf ("\n number of alphabets to be sent\n");
scanf ("%d", &n);


HEAD = createLinkedList (n);



mp = ForKey ();
node * t;
point * j;


j = (point *) malloc (sizeof (point));
t = (node *) malloc (sizeof (node));
t->next = j;

return 0;
}

node * createLinkedList (int n)
{

int i = 0;


int d, e, m1, a, n1, p2, q2, t2[100], pub, t3, k1 = 0;


node * head = NULL;	//for the first node
  node *temp = NULL;		//for the next node
  node *p = NULL;		// for iteration

printf("\n//////////////////////////////////////////////RSA\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n");
printf ("\nEnter the first prime number\n ");
scanf ("%d", &p2);

printf ("\nEnter 2nd prime number: \n");
scanf ("%d", &q2);

check_prime (p2, q2);

n1 = p2 * q2;
m1 = (p2 - 1) * (q2 - 1);

printf ("\ne=%d\n", m1);

printf ("\nchoose a number between 1 and %d \n", m1);
scanf ("%d", &e);

printf ("public key is generated by RSA\n");

for (i = 0; i < n; i++)

    {

t3 = t3 + t2[i];
    }

pub = pow (t3, e);
pub = (pub) % n1;
printf ("\npublic key is %d\n", pub);

printf ("\n generating  private key with the help of RSA \n");

printf ("\nchoose the value of K1 for generating private key\n");

scanf ("%d", &k1);
d = (k1 * (m1 + 1) / e);

printf ("\nprivate key %d", d);

displaykey (d);
for (i = 0; i < n; i++)

    {

temp = (node *) malloc (sizeof (node));

printf ("\n the %dth message will be \n", i + 1);
scanf ("%s", &(temp->data));
printf ("\nthe ascii value of message is %d\n", t2[i] = temp->data);
temp->data=temp->data+d;
printf("AFTER ENCRYPTION->>>>%c",temp->data);//block with private key

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
    printf("\n%c\n",temp->data);


    }

displayList(head);
receiver_side(pub,n,temp,head,d);

return head;

}
void receiver_side(int pub1,int n3,node* tem,node *hea,int d2)
{
node*temm;
node* headn;
node* p4;
headn=HEAD;

    int s,j;
    printf("\n\n\n\n\n/////////////////////////////////////////////RECEIVER'S SIDE\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n\n\n\n\n");
printf("\nEnter the public key \n");
scanf("%d",&s);
if(s==pub1)
{printf("\ndecryption will take place\n");
       printf("encrypted message=");displayList(hea);

    


            
}
    else
    {
        printf("what to do");
    }
            }


}
else
{
    end();
}
}


void displayList (node * head)
{
node * p = head;
while (p != NULL)


    {

printf ("%c", p->data);
p = p->next;
    }

}
void displayList1 (node * head)
{
node * p = head;
while (p != NULL)


    {

printf ("%c", p->data);
p = p->next;
    }

}
void check_prime (int x, int y)
{

int i, flag = 0;
for (i = 2; i <= x / 2; ++i)
    {
if (x % i == 0)
	{
flag = 1;
break;
    }

}


if (x == 1)
    {
printf ("\n1 is neither prime nor composite.\n");
}

  else
    {

if (flag == 0)
printf ("\n%d is a prime number.\n", x);

   else
printf ("\n%d is not a prime number.\n", x);
}

for (i = 2; i <= y / 2; ++i)
    {

if (y % i == 0)
	{
flag = 1;
break;

    }

}

if (y == 1)
    {

printf ("\n1 is neither prime nor composite.");

    }

  else
       {

if (flag == 0)
printf ("\n%d is a prime number.", y);
      else

printf ("\n%d is not a prime number.", y);

        }

}

point * ForKey ()
{

point * m = (point *) malloc (sizeof (point));
m->link = NULL;

return m;

}

void displaykey (int d1)
{
node * r;
r = (point *) malloc (sizeof (point));
r->data = d1;

printf ("\nenter the private key\n");
scanf ("%d", &d1);
r->next = NULL;
if (r->data == d1)

    {
printf ("\nthe key is valid \n");


}
  else
    {
printf ("\n invalid data\n");

    }
}
