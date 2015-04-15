#include <stdio.h>

struct date {
  int day, month, year;
};

int isconsecutive(struct date a, struct date b) {
  /* assume a is earlier than b */
  if (a.year == b.year) {
    /* look for months */
    if(a.month == b.month) {
      /* look for days */
      if(b.day - a.day == 1) 
	return 1;
      else return 0;
    } else if(b.month - a.month == 1) {
      if(( 	a.month == 1 ||
		a.month == 3 ||
		a.month == 5 ||
		a.month == 7 ||
		a.month == 8 ||
		a.month == 10 ||
		a.month == 12) && a.day == 31 && b.day == 1) {
	return 1;
      }
      else if((	a.month == 4 ||
		a.month == 6 ||
		a.month == 9 ||
		a.month == 11 ) && a.day == 30 && b.day == 1) {
	return 1;
      }
      else if (a.month == 2) {
	int is_leap_year;
	if( ((a.year % 4 == 0 && a.year % 100 != 0) || a.year % 400 == 0))
	  is_leap_year = 1;
	else is_leap_year = 0;
	if(is_leap_year && a.day == 29 && b.day == 1)
	  return 1;
	if(!is_leap_year && a.day == 28 && b.day == 1)
	  return 1;
	else return 0;
      }
    }
  } else if(b.year - a.year == 1) {
    /* a should be 31.12.x
       b should be 1.1.x+1
    */
    if(a.day == 31 && a.month == 12 &&
       b.day == 1 && b.month == 1) {
      return 1;
    } else {
      return 0;
    }
  }
  return 0;
}

int main() {
  int t;
  struct date a, b;
  int ca, cb; //consumptions
  int i;
  int cnt = 0;
  int tc = 0;
  while(1) {
    cnt = 0;
    tc = 0;
    scanf("%d", &t);
    if (t == 0) break;
    scanf("%d %d %d %d", &b.day, &b.month, &b.year, &cb);
    for(i = 1; i < t; ++i) {
      a = b;
      ca = cb;
      scanf("%d %d %d %d", &b.day, &b.month, &b.year, &cb);
      if(isconsecutive(a, b)) {
	tc += (cb - ca);
	cnt += 1;
      }
    }
    printf("%d %d\n", cnt, tc);
  }
  return 0;
}

