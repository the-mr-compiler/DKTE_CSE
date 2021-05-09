#include <stdio.h>

struct Book
{
    int id;
    char name[20];
    char author[20];
    char issuedTo[20];
    int price;
};

struct Person
{
    int pid;
    char name[20];
    char address[30];
    char occupation[20];
    int age;
    char gender[7];
};
struct Employee
{
    int empId;
    char name[20];
    char designation[20];
    float salary;
};

int main()
{
    struct Book b;
    struct Person p;
    struct Employee e;
    printf("\n~~~~~~~~Enter Book details :~~~~~~~~~\nid :");
    scanf("%d", &b.id);
    getchar();
    printf("\nName :");
    gets(b.name);
    printf("\nAuthor :");
    gets(b.author);
    printf("\nIssued To :");
    gets(b.issuedTo);
    printf("\nPrice :");
    scanf("%d", &b.price);
    printf("\n~~~~~~~~~You Entered : ~~~~~~~~~~~~~~");
    printf("\nId:%d\nName:%s\nAuthor:%s\nIssued to:%s\nPrice:%d", b.id, b.name, b.author, b.issuedTo, b.price);
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n~~~~~~~~~Enter person details:~~~~~~~~~~~\nId");
    scanf("%d", &p.pid);
    getchar();
    printf("\nName:");
    gets(p.name);
    puts("\nAddress:");
    gets(p.address);
    puts("\nOccupation");
    gets(p.occupation);
    puts("\nGender:");
    gets(p.gender);
    puts("\nAge:");
    scanf("%d", &p.age);
    printf("\n~~~~~~~~~You Entered : ~~~~~~~~~~~~~~");
    printf("\nId:%d\nName:%s\nAddress:%s\nOccupation:%s\nGender:%s\nAge:%d", p.pid, p.name, p.address, p.occupation, p.gender, p.age);
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n~~~~~~~~~Enter Employee details:~~~~~~~~~~~\nId");
    scanf("%d", &e.empId);
    getchar();
    puts("\nName:");
    gets(e.name);
    puts("\nDesignation:");
    gets(e.designation);
    puts("\nSalary:");
    scanf("%f", &e.salary);
    printf("\n~~~~~~~~~You Entered : ~~~~~~~~~~~~~~");
    printf("\nId:%d\nName:%s\nDesignation:%s\nSalary%f", e.empId, e.name, e.designation, e.salary);
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
}