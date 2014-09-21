#include <stdio.h>
#include <stdlib.h>

int main(){
  //1900 is NOT a leap year
  int dow; //Day of week - Sunday is 0, Monday is 1, etc...
  dow=1; //Jan 1 1990 is a Monday
  dow=(365)%7; //Whatever day Dec 31, 1989 is
  int startyear=1901;
  int sundays=0;
  for (startyear;startyear<=2000;startyear++){
    int month=0;
    for (month;month<12;month++){
      if (month==8||month==4||month==5||month==10){
	dow=(dow+30)%7;
	if (dow==0){
	  sundays++;
	}
      }
      else if (month==1){
	if ((startyear%100)&&(startyear%400)||((startyear%4)&&(startyear%100!=0))){
	  dow=(dow+29)%7;
	  if (dow==0){
	    sundays++;
	  }
	}
	else{
	  dow=(dow+28)%7;
	  if (dow==0){
	    sundays++;
	  }
	}
      }
      else{
	dow=(dow+31)%7;
	if (dow==0){
	  sundays++;
	}
      }
    }
  }
  printf("%d",sundays); //Answer is 171
  return sundays;
}
