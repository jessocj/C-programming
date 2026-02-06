#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#if 1
/*user defined data type
syntax
-----
stuct struct_tag   //declaration
{
    struct_member;
    .
    .
    .
};
eg:
*/
#endif // 1
#if 0
struct student
{
    int s_id;
    char s_name[20];
    int s_mark;
};
int main()
{
    struct student s1;
    printf("enter the student id:");
    scanf("%d",&s1.s_id);
    printf("enter the student mark:");
    scanf("%d",&s1.s_mark);
    printf("enter the student name:");
    scanf("%s",s1.s_name);

    //strcpy(s1.s_name,"ammu");

    printf("Studen ID :%d",s1.s_id);
    printf("\nStudent Name :%s",s1.s_name);
    printf("\nStudent Mark :%d",s1.s_mark);

    return 0;
}
#endif // 1
#if 0
struct student
{
    int id;
    char name[20];
    float marks;
};
int main()
{
    struct student s1;
    struct student *p;

    p=&s1;

    printf("enteer the student Id :");
    scanf("%d",&p->id);
    printf("enteer the student mark :");
    scanf("%f",&p->marks);
    printf("enteer the student name :");
    scanf("%[^\n]s",p->name);
    printf("\n----Student Details-----\n");
    printf("ID :%d\n", p->id);
    printf("Name :%s\n",p->name);
    printf("Marks :%.2f",p->marks);
}
#endif // 1
#if 0
struct student
{
    int id;
    char name[20];
    int mark;
};
int main()
{
    int a=0;
    struct student s[3];
    for(int i=0;i<3;i++)
    {
        printf("enter id: ");
        scanf("%d",&s[i].id);

        fflush(stdin);
        printf("enter name: ");
        scanf(" %19[^\n]s",s[i].name);

        printf("enter mark: ");
        scanf("%d",&s[i].mark);
    }
    for(int i=0;i<3;i++)
    {
        printf("ID : %d\nName: %s\nMark: %d\n",s[i].id,s[i].name,s[i].mark);
    }return 0;
}
#endif // 1
#if 0
//in arr
struct student
{
    int id;
    char name[20];
    float marks;
};
int main()
{
    struct student s1[50];
    struct student *p;

    p= s1;

   // printf("enteer the student Id,Name,Marks :");
    for(int i=0;i<3;i++)
    {
        printf("enter %d th student details:\n",i+1);
        scanf("%d", &(p+i)->id);
        scanf("%s",& (p+i)->name);
        scanf("%f",&(p+i)->marks);
    }
    printf("---Student Details---");
    for(int i=0;i<3;i++)
    {
        printf("\n%d--",s1[i].id);
        printf("-%s-",s1[i].name);
        printf("-%.2f",s1[i].marks);
        printf("\n\n");
    }
}

#endif // 1
#if 0
struct student
{
    int id;
    char name[20];
    float mark1,mark2,mark3;
    float avg;
};
int main()
{
    struct student s1[50];
    struct student *p;

    p=s1;

    printf("enter in Id,Name,Mark1,Mark2,Mark3 :\n");
    for(int i=0;i<3;i++)
    {
        printf("enter student_%d details:\n",i+1);
        scanf("%d", &(p+i)->id);
        scanf("%s",& (p+i)->name);
        scanf("%f %f %f",&(p+i)->mark1,&(p+i)->mark2,&(p+i)->mark3);
    }
    printf("\n---Student Details---\n");
    for(int i=0;i<3;i++)
    {
        printf("\n%d. ",s1[i].id);
        printf("-%s-",s1[i].name);
        printf(" %.2f , %.2f ,%.2f ",s1[i].mark1,s1[i].mark2,s1[i].mark3);
        s1[i].avg=(s1[i].mark1+s1[i].mark2+s1[i].mark3)/3;
        printf("\nAverage= %.2f",s1[i].avg);
        printf("\n\n");
    }
}

#endif // 1
#if 0
//nested struct
/*struct dob
{
    int day;
    int month;
    int Year;
};
*/
struct stdnt
{
    int id;
    char name[20];
    struct dob
{
    int day;
    int month;
    int Year;
}d;
};
int main()
{
    struct stdnt s;
    printf("enter student id: ");
    scanf("%d",&s.id);
    printf("enter student name: ");
    scanf("%s",&s.name);
    printf("enter dob: ");
    scanf("%d %d %d",&s.d.day,&s.d.month,&s.d.Year);

    printf("\n--Student Details--\n");
    printf("ID :%d\n Name:%s\n DOB:%d/%d/%d\n",s.id,s.name,s.d.day,s.d.month,s.d.Year);
}

#endif // 2
#if 0
struct student
{
    int id;
    char name[10];
    float mark1,mark2,mark3;
    float avg;
};
int main()
{
    int a=0;
    struct student s[3];
    for(int i=0;i<3;i++ )
    {
        printf("enter id: ");
        scanf("%d",&s[i].id);

        fflush(stdin);
        printf("enter name: ");
        scanf(" %19[^\n]s",s[i].name);

        printf("enter mark of sub 1: ");
        scanf("%f",&s[i].mark1);
        printf("enter mark of sub 2: ");
        scanf("%f",&s[i].mark2);
        printf("enter mark of sub 3: ");
        scanf("%f",&s[i].mark3);

        s[i].avg=(s[i].mark1+s[i].mark2+s[i].mark3)/3;
    }
     for(int i=0;i<3;i++)
    {
        printf("ID : %d\nName: %s\nMarks: %f,%f,%f\n",s[i].id,s[i].name,s[i].mark1,s[i].mark2,s[i].mark3);
        printf("the avg of three marks are: %.2f",s[i].avg);
    }return 0;

}
#endif // 1
#if 0
//function calling
struct student
{
    int id;
    char name[10];
    float mark1,mark2,mark3;
    float avg;
};
void calling(struct student s[],int n)
{
    for(int i=0;i<n;i++ )
    {
        printf("enter id: ");
        scanf("%d",&s[i].id);

        fflush(stdin);
        printf("enter name: ");
        scanf(" %19[^\n]s",s[i].name);

        printf("enter mark of sub 1: ");
        scanf("%f",&s[i].mark1);
        printf("enter mark of sub 2: ");
        scanf("%f",&s[i].mark2);
        printf("enter mark of sub 3: ");
        scanf("%f",&s[i].mark3);

        s[i].avg=(s[i].mark1+s[i].mark2+s[i].mark3)/3;
    }
     for(int i=0;i<n;i++)
    {
        printf("\nStudent details ------------------\n");
        printf("ID : %d   Name: %s   Marks: %f,%f,%f   \n",s[i].id,s[i].name,s[i].mark1,s[i].mark2,s[i].mark3);
        printf("the avg of three marks are: %.2f",s[i].avg);
    }
}
int main()
{
    int n;
    printf("enter the number of students in class: ");
    scanf("%d",&n);
    struct student s[n];
    calling(s,n);

    return 0;
}
#endif // 1
#if 0
/*
struct student
{
..
..
...
.
.
}s2;               global                                                 \;
struct student s1;---global
void main()
*/
#endif // 1
#if 0
//struct pointer
/*
struct student *sp=&s2;
in arr s2.id
likewise in pointer sp->id
*/
#endif // 1
#if 0
struct student{int id;char name[10];int mark;}s1;
int main()
{
    int a=0;
    struct student *sp=&s1;

    sp->id=10;
    strcpy(sp->name,"jesso");
    sp->mark=90;

    printf("ID=%d\nName=%s\nMark=%d\n",sp->id,sp->name,sp->mark);
}
#endif // 1
#if 0
struct student{int id;char name[10];float mark;}s1;
int main()
{
    struct student s1;
    struct student *p;
    p=&s1;
    printf("enter id: ");
    scanf("%d",&p->id);

    fflush(stdin);
    printf("enter name: ");
    scanf(" %19[^\n]s",p->name);

    printf("enter mark of sub 1: ");
    scanf("%f",&p->mark);
    printf("ID=%d\nName=%s\nMark=%f\n",p->id,p->name,p->mark);

}
#endif // 1
#if 0
//arr poinetr struct
struct student{int id;char name[10];float mark;};
int main()
{
    struct student s1[50];
    struct student *p;

    p=s1;
    for (int i=0;i<3;i++)
    {
        printf("enter id: ");
        scanf("%d",&(p+i)->id);

        printf("enter name: ");
        scanf(" %19[^\n]s",(p+i)->name);

        printf("enter mark of sub 1: ");
        scanf("%f",&(p+i)->mark);
    }
    for(int i=0;i<3;i++)
    {
        printf("ID=%d\nName=%s\nMark=%f\n",s1[i].id,s1[i].name,s1[i].mark);
    }
}

#endif // 1
#if 0
struct std{int id;char name[10];};
//           -4       -10       should be 14
// |  |  |  |  |
//   4  4  4 2+2--->16 (2 added to int for struct padding)

struct std s;
int main()
{
    printf("%d",sizeof(s));
    return 0;
}
//struct padding helps for accessing elements fast but uses more memory
//so use packing method
#endif // 1
#if 0
#pragma pack(1)
struct std{int id;char name[10];};

struct std s;
int main()
{
    printf("%d",sizeof(s));
    return 0;
}
//packing uses less memory but takes time
#endif // 1
#if 0
//using decrement helps to reduce memory
struct std{char name[10];char a ;char c;int id;};

struct std s;
int main()
{
    printf("%d",sizeof(s));
    return 0;
}
#endif // 1
#if 0
struct std{char name[10];struct std *S;int id;};

struct std s,s1;     /struct
int main()
{
    s.id=10;
    s.S=&s1;
    s.S->id=67;
    printf("%d",s.id);
    printf("\n%d",s.S->id);

    return 0;
}
#endif // 1
#if 0
struct std
{
    int id;int marks;
};
struct std getval();
void main()
{
    struct std s1;
    s1=getval();
    printf("\n%d,%d",s1.id,s1.marks);
}
struct std getval()
{
  struct std s={10,50};
  return s;
}

#endif // 1
#if 0
struct std
{
    int id;int marks;
};
struct std *getval();
void main()
{
    struct std *s1=getval(&s1);
    printf("\n%d,%d",s1->id,s1->marks);
    s1->id=40;
    struct std *s2=getval();
    printf("\n%d,%d",s1->id,s1->marks);
}
struct std *getval()
{
  static struct std s1={10,50};
  printf("\n%d,%d",s1.id,s1.marks);

  return &s1;
}

#endif // 1
#if 1
typedef struct std
{
    int id;int marks;
}STD;
struct std getval();
void main()
{
    STD s1;
    s1=getval();
    printf("\n%d,%d",s1.id,s1.marks);
}
struct std getval()
{
  struct std s={10,50};
  return s;
}

#endif // 1
