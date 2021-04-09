#include <stdio.h>
#include "date.h"

int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
char mon[12][5] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
struct date setDate()
{
	struct date d;

	printf("\n Enter date in dd/mm/yyyy :");
	scanf("%d/%d/%d", &d.dd, &d.mm, &d.yy);

	if ((d.dd > 31 || d.mm > 12) || (d.yy % 4 == 0 && d.mm == 2 && d.dd > 29) || (d.yy % 4 != 0 && d.mm == 2 && d.dd > 28))
	{
		printf("\n Invalid Input");
		return setDate();
	}
	return d;
}

void printAddress(struct date *d)
{
}

struct date difference(struct date f, struct date s)
{
	struct date d;

	if (f.mm != s.mm)
	{
		if (f.mm > s.mm)
		{
			d = f;
			f = s;
			s = d;
		}
		d.mm = (s.mm - 1) - (f.mm);
		d.dd = (days[f.mm - 1] - f.dd) + d.dd;
	}
	else
	{
		d.mm = s.mm - f.mm;
		d.dd = f.dd - s.dd;
	}
	d.yy = f.yy - s.yy;
	return d;
}

void getDate(struct date d)
{
	printf("\nDate = %02d/%02d/%d\n", d.dd, d.mm, d.yy);
}
void print(struct date d)
{
	printf("dd-mm-yyyy : %02d-%02d-%04d\n", d.dd, d.mm, d.yy);
	printf("dd-MMM-yyyy : %02d-%s-%04d\n", d.dd, mon[d.mm - 1], d.yy);
	printf("dd/mm/yy : %02d/%02d/%02d\n", d.dd, d.mm, d.yy % 100);
}
