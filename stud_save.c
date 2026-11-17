#include"header.h"
void save_student(STUD *head)
{
	if(head==0)
	{
		printf("no record found\n");
		return ;
	}
	FILE *fp;
	fp=fopen("stud.txt","w");
	while(head)
	{
		fprintf(fp,"%d %s %f\n",head->rollno,head->name,head->percentage);
		head=head->next;
	}
	printf("data saved\n");
	fclose(fp);
}
void load_student(STUD **head)
{
	FILE *fp;
STUD *new,*t;
fp=fopen("stud.txt","r");
if(fp==0)
	return ;
while(1)
{
new=(STUD*)malloc(sizeof(STUD));
if(new==0)
{
printf("memory allocation not assigned\n");
return ;
}
if(fread(new,sizeof(STUD)-sizeof(STUD*),1,,fp)!=1)
{
free(new);
break;
}
new->next=0;
if(*head==0)
	*head=new;
else
{
temp=*head;
while(temp->next!=0)
temp=temp->next;
temp->next=new;
}
}
fclose(fp);
printf("student data loaded successfully\n");
}
