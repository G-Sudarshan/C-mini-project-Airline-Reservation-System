 /*                      || shree ||
            This Mini project is created by Group 1,First Year , Computer Technology Departamnet, GP Nashik

            Guidence : Kavita Garase Mam

                    Group members
            176101 Suraj Ahire
            176102 Nilam Bagul
            176105 Ritika Bhosale
            176114 Sudarshan Gawale

                  Thank You.....    */



#include<stdio.h>
#include<conio.h>
#include<string.h>




int main()
{
     int classa,achoice,p,ch,aa22,pp22;
     int j=8621;
     int pr;

    char fname[20],lname[20];
    char *arr[8]={"asfcas","indigo airlines","SpiceJet","Vistara airlines","JetAirways","Luftanza","Air India"};
    char *aname;
    int i,d,m,y;
    char *p2,*a2;
    char *ps="admin@123";
    char *ad="admin";
    char dcity[15],acity[15],date[15];

    char *arr2;
  //**********************************************************************************************************************************************//

  //            Main Code              //

  //***********************************************************************************************************************************************//
printf("\n\t\tWelcome to the Airline Reservation System\n\n");

puts("We provide you best deals and  Service for Worldwide Airlines and airports \nincluding New York, London, Paris,New Delhi, Mumbai, Tokyo, Bengluru etc.\n\n");

getch();


puts("Please login to continue....\n");
ap22:
puts("User ID: ");
gets(a2);
puts("Password");
gets(p2);
aa22=strcmp(ad,a2);
pp22=strcmp(ps,p2);

if(aa22==0 && pp22==0)
{
   puts("\n\n\t\tWelcome Admin! ") ;
}
else
{
  puts("You have Enter invalid user ID or password please try again");

  goto ap22;
}


puts("\n\nplease Enter your departure city\n\n");

gets(dcity);
puts("\n\nplease Enter your arrival city\n\n");
gets(acity);

puts("\n Please Enter the date of departure in DD MM YYYY Format");
correction:scanf("%d%d%d",&d,&m,&y);
if(d>01&&d<31&&m<12&&m>0&&y>2017)
{
       ;
	}
	else
	{
		puts("You entered invalid date\n\nPlease enter valid date");
		goto correction;

		}

puts("\n\nPlease select your class\n Press 1 for BUSINESS CLASS and 2 for ECONOMY CLASS");
scanf("%d",&classa);
if(classa==1)
    {   arr2="BUSINESS CLASS";
     printf("You Chose %s",arr2);
   }
else
    {
	arr2="ECONOMY CLASS";
	printf("You Chose %s",arr2);
	}

a1: puts("\nFollowing flights are availabe");

for(i=1;i<7;i++)
{
    printf("%d) %s\n   %s to %s on %d/%d/%d\t Rs %d\n\n",i,arr[i],dcity,acity,d,m,y,j);
    j=j+4524;
}
 puts("\n\nPress the number of option that you want to select");
scanf("%d",&achoice);
switch(achoice)
{    case 1:    aname = "indigo Airlines";
		pr=8621;
		puts("Your selected flight name is Indigo Airlines ");
	break;
    case 2:     aname="SpiceJet";
		    pr=8621+4524;
		    puts("Your selected flight name is Spice Jet");

	break;
    case 3:     aname="Vistara airlines";
		   pr=8621+4524*2;
		   puts("Your selected flight name is Vistara Airlines");
	break;
    case 4:     aname="JetAirways";
		pr=8621+4524*3;
		 puts("Your selected flight name is Jet Airways");
	break;
    case 5:     aname="Luftanza";
		pr=8621+4524*4;
		puts("Your selected flight name is Luftanza");
	puts("\n\nThis if for passenger's acknowledgement\nThis flight may be delay due to some technical problems\n");
	break;
    case 6:     aname="Air India";
		pr=8621+4524*5;
		puts("Your selected flight name is Air India");
		puts("\n\This is for the passenger's acknowledgement\n This flight is the best of all the flights available and provides you all the facilities like free meal, extra luggage etc.");
	break;
    default:
     puts("You have selcted Choice that is not in list please enter your choice again"); goto a1;
}


puts("\n\nPress 1 if you want to continue the process or press 2 if you wish to undo your flight selection and choose again ");
c1:scanf("%d",&ch);
if (ch==1)
{

	}
	else if (ch==2)
   {
	  puts("You choosed to redo your  choice ");
	  goto a1;
   }

else
	{
		puts("You entered invalid character\n\nPlease choose from 1 and 2");
		goto c1;
		}
puts("Please enter your first name\n");
scanf("%s",&fname);
strupr(fname);
puts("Please enter your last name");
scanf("%s",&lname);
strupr(lname);



puts("Your flight ticket is booked!\nPress Enter to print Your Ticket\n");
getch();


    printf(" ********************************************************************\n");
    printf(" **           %s                                                 \n",aname);
    printf(" **                                                              \n");
    printf(" **           NAME:%s %s                                         \n",lname,fname);
    printf(" **                                                              \n");
    printf(" **           CLASS: %s                 SEAT:25A                  \n",arr2);
    printf(" **                                                              \n");
    printf(" **           DATE : %d/%d/%d                      Flight No. AI694    \n",d,m,y);
    printf(" **                                                              \n");
    printf(" **           TIME : 16:45 IST                                   \n");
    printf(" **                                                              \n");
    printf(" **           Total Fair : Rs %d (Inclusive All Taxes)           \n",pr);
    printf(" **                                                              \n");
    printf(" *********************************************************************\n");

     printf("Your Process is completed.\n\t\tThank you!\n\n\t\tHappy Journey!\n\n\n\n\n\n\n");

     getch();

      printf(" This Mini project is created by Group 1,First Year , Computer Technology Departamnet, GP Nashik\n\nGuidence : Kavita Garase Mam\n\n\t\tGroup members\n\n\t176101 Suraj Ahire\n\t176102 Nilam Bagul\n\t176105 Ritika Bhosale\n\t176114 Sudarshan Gawale\n\n\n\t\tThank You.....!");




    getch();

    return 0;

}

