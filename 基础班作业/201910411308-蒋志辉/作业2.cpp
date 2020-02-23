
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Student{
char name[10];
char stu_id[15];
int age;
struct Student*next;
)student;
  
student* creat()

{

student *head=NULL, *p=NULL, *rear=NULL;
	char a;
	while (1)
	{
		p = (student*)malloc(sizeof(student));
		p->next = NULL
 	              printf("输入姓名：");
		scanf("%s", p->name);

	               printf("输入学号：");

                              scanf("%s", p->stu_id);

		printf("输入年龄：");

		scanf("%d",&p->age);

		if (head == NULL)

		head = rear = p;

                                 else


		{

			rear->next = p;

			rear = p;

		}


		printf("\n停止输入按S，按其他任意键继续输入\n");

		a = getch();


		if (a == 's' )

			break;


	}

	return head;

}



void seek(student *head)



{



	student *q = head,*f=head; char a;

	if (q->next == NULL)

	{

		printf("请建立新链表\n")

		q = creat();

		f->next = q;
		f = q;

	}

	else

	{

		q = q->next;

		printf("已输入的信息如下：\n");

		while (q != NULL)

		{

			printf("姓名：%s,学号：%s,年龄：%d\n", q->name, q->stu_id, q->age);

			f = q;
			q = q->next;

		}

		printf("\n按C或c继续输入:按其他任意键停止输入\n");
		a = getch();
		if (a == 'c' || a == 'C')
		{
			q = creat();
			f->next = q;

		}

	}

}

int main()


{

	student *head=NULL,*p=NULL,*rear=NULL
               char b='A';
	p = (student*)malloc(sizeof(student))

	p->next = NULL;

	head =rear= p;
                  seek(head);
               while (b=='A')

	{

		seek(head);

		printf("按A查看已输入的信息，按其他任意键退出\n");
		b = getch();


	}


	return 0;


}