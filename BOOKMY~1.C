#include<string.h>
int rec=0;
void record(int x);
int main()
{
	int c1,a,b,c,d,e,m,f,p,q,r,s,Password,sum=0,i,color;
	char *Login;

	clrscr();
	textcolor(14);
	printf("\t\t\3\3\3--------------------------------\3\3\3");
	textcolor(14);
	printf("\n\t\t			 Easy tickets \n");
	textcolor(14);
	printf("\t\t\3\3\3--------------------------------\3\3\3");
	printf("\n\n\n\n");
	Login:
	printf("Enter your \nLogin Id : ");
	gets(Login);
	Password:
	printf("\nEnter your \nPassword : ");
	scanf("%d",&Password);
	c1=strcmp(Login,"harshil");


	// clrscr();
	if(c1==0 && Password==1234)
	{
		for(i=0;i<=79;i++)
		{
		printf("\3");
		}
		printf("\n\n\n\t  \4-------------------------------------------------------\4\n");
		printf("\t\t  1.ALL  \t|   2.MOVIES\t|  3.EVENTS\n");
		printf("\t\t----------------|---------------|---------------\n");
		printf("\t\t  4.PLAYS\t|   5.SPORTS\t|  6.FESTIVALS\n");
		printf("\t  \4--------------------------------------------------------\4\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n\n\n\n\n");
		printf("\t  \4-----------\4\n");
		printf("\t     8.EXIT \n");
		printf("\t  \4-----------\4\n");
		printf("\n\n\n");
		for(i=0;i<=79;i++)
		{
			printf("\3");
		}
		scanf("%d",&a);
		rec=rec*10+a;
		clrscr();
		switch(a)  // main switch
		{ // start

			case 1: // all selection started
			printf("\n\20 1. 0 T0 100 WEBSITE CREATION AND ENTREPEUNER WORKSHOP,BENGALURU");
			printf("\n\20 2. 3RD INTERNATIONAL DATA SCIENCE SUMMIT 2016,KOLKATA ");
			printf("\n\20 3. CENTRAL INTELLIGENCE,ENGLISH,U/A");
			printf("\n\20 4. ASIA PACIFIC BOXING CHAMPIONSHIP,NATINAL CAPITAL REGION (NCR)");
			scanf("%d",&p);
			rec=rec*10+p;
			break;


			case 2: // movie selection started
			printf("\20 1. UDTA PUNJAB\n");
			printf("\20 2. CONJURING 2\n");
			printf("\20 3. HOUSEFULL 3\n");
			printf("\20 4. ANGRY BIRDS\n");
			printf("\20 5. NOW YOU SEE ME 2\n");
			scanf("%d",&b);
			rec=rec*10+b;
			clrscr();
			switch(b)
			{      // case2 switch stsarted

				case 1: //udta punjab case started
				printf("\3\3\3\t\tYOU HAVE SELECTED UDTA PUNJAB\t\3\3\3\n");
				printf("\n");
				printf("\n\20 RELEASE DATE = 17TH JUNE 2016");
				printf("\n\20 RUN TIME = 2 HRS 28 MINS");
				printf("\n\20 DIRECTOR = ABHISHEK CHAUBEY");
				printf("\n\20 GENRE = ACTION , CRIME , THRILLER");
				printf("\n\20 LANGUAGE = HINDI");
				printf("\n\20 CAST = SHAHID KAPOOR,KAREENA KAPOOR,ALIA BHATT,DILIJIT DOSANJH,SATISH KAUSHIK,\t KAIZAAD KOTWAL");
				printf("\n\20 SYPNOSIS : A STORY THAT REVOLVES AROUND DRUG ABUSE IN THE AFFLUENT NORTH \t\t     INDIAN STATE OF PUNJAB AND HOW THE YOUTH THERE HAVE SUCCUMBED TO\t\t     IT EN MASSE RESULTING IN A SOCIO-ECONOMIC DECLINE");
				printf("\n\n\t\t\4\4\4\tSELECT YOUR THEATRE\t\4\4\4\n");
				printf("\20 1. CINEPOLIS \n");
				printf("\20 2. PVR \n");
				printf("\20 3. ACROPOLIS \n");
				printf("\20 4. BIG CINEMAS \n");
				scanf("%d",&c);
				rec=rec*10+c;
					clrscr();
					switch(c)
					{
						case 1: // cinepolis
						printf("\3\3\3\tYOU HAVE SELECTED CINEPOLIS\t\3\3\3\n");
						printf("\n");
						printf("\4\4\4\tSELECT YOUR SEAT\t\4\4\4\n");
						printf("\n");
						printf("\20 1. GOLD       Rs.150\n");
						printf("\20 2. PLATINUM   Rs.180\n");
						printf("\20 3. ROYAL      Rs.210\n");
						scanf("%d",&d);
						rec=rec*10+d;
							switch(d)
							{  // switch d started

							case 1:
							printf("YOU HAVE SELECTED GOLD\n");
							printf("\n");
							printf("ENTER YOUR QUANTITY\n");
							scanf("%d",&q);
							printf("\n");
							printf("TOTAL QUANTITY IS : %d",q);
							sum=q*150;
							printf("\nTOTAL BILL : %d",sum);
							printf("\nYOUR BOOKING IS OVER");
							break;

							case 2:
							printf("YOU HAVE SELECTED PLATINUM\n");
							printf("\n");
							printf("ENTER YOUR QUANTITY\n");
							scanf("%d",&q);
							printf("\n");
							printf("TOTAL QUANTITY IS : %d",q);
							sum=q*180;
							printf("\nTOTAL BILL : %d",sum);
							printf("\nYOUR BOOKING IS OVER");
							break;

							case 3:
							printf("YOU HAVE SELECTED ROYAL\n");
							printf("\n");
							printf("ENTER YOUR QUANTITY\n");
							scanf("%d",&q);
							printf("\n");
							printf("TOTAL QUANTITY IS : %d",q);
							sum=q*210;
							printf("\n");
							printf("\nTOTAL BILL : %d",sum);
							printf("\nYOUR BOOKING IS OVER");
							break;
							}//switch d ended

						break; // cinepolis break

						case 2: //pvr
						printf("\3\3\3\tYOU HAVE SELECTED PVR\t\3\3\3\n");
						printf("\n");
						printf("\4\4\4\tSELECT YOUR SEAT\t\4\4\4\n");
						printf("\20 1. GOLD       Rs.150\n");
						printf("\20 2. PLATINUM   Rs.180\n");
						printf("\20 3. ROYAL      Rs.210\n");
						scanf("%d",&d);
						rec=rec*10+d;

							switch(d)
							{ //switch d started

							case 1:
							printf("YOU HAVE SELECTED GOLD\n");
							printf("\n");
							printf("ENTER YOUR QUANTITY\n");
							scanf("%d",&q);
							printf("\n");
							printf("TOTAL QUANTITY IS : %d",q);
							printf("\n");
							sum=q*150;
							printf("\nTOTAL BILL : %d",sum);
							printf("\nYOUR BOOKING IS OVER");
							break;

							case 2:
							printf("YOU HAVE SELECTED PLATINUM\n");
							printf("\n");
							printf("ENTER YOUR QUANTITY\n");
							scanf("%d",&q);
							printf("\n");
							printf("TOTAL QUANTITY IS : %d",q);
							printf("\n");
							sum=q*180;
							printf("\nTOTAL BILL : %d",sum);
							printf("\nYOUR BOOKING IS OVER");
							break;

							case 3:
							printf("YOU HAVE SELECTED ROYAL\n");
							printf("\n");
							printf("ENTER YOUR QUANTITY\n");
							scanf("%d",&q);
							printf("TOTAL QUANTITY IS : %d",q);
							printf("\n");
							sum=q*210;
							printf("\nTOTAL BILL : %d",sum);
							printf("\nYOUR BOOKING IS OVER");
							break;

							}//switch d ended
						break;// pvr break

						case 3: //acropolis
						printf("\3\3\3\tYOU HAVE SELECTED ACROPOLIS\t\3\3\3\n");
						printf("\n");
						printf("\4\4\4\tSELECT YOUR SEAT\t\4\4\4\n");
						printf("\20 1. GOLD       Rs.150\n");
						printf("\20 2. PLATINUM   Rs.180\n");
						printf("\20 3. ROYAL      Rs.210\n");
						scanf("%d",&d);
						rec=rec*10+d;
							switch(d)
							{   //switch d started

							case 1:
							printf("YOU HAVE SELECTED GOLD\n");
							printf("\n");
							printf("ENTER YOUR QUANTITY\n");
							scanf("%d",&q);
							printf("\n");
							printf("TOTAL QUANTITY IS : %d",q);
							printf("\n");
							sum=q*150;
							printf("\nTOTAL BILL : %d",sum);
							printf("\nYOUR BOOKING IS OVER");
							break;

							case 2:
							printf("YOU HAVE SELECTED PLATINUM\n");
							printf("\n");
							printf("ENTER YOUR QUANTITY\n");
							scanf("%d",&q);
							printf("\n");
							printf("TOTAL QUANTITY IS : %d",q);
							printf("\n");
							sum=q*180;
							printf("\nTOTAL BILL : %d",sum);
							printf("\nYOUR BOOKING IS OVER");
							break;

							case 3:
							printf("YOU HAVE SELECTED ROYAL\n");
							printf("\n");
							printf("ENTER YOUR QUANTITY\n");
							scanf("%d",&q);
							printf("\n");
							printf("TOTAL QUANTITY IS : %d",q);
							printf("\n");
							sum=q*210;
							printf("\nTOTAL BILL : %d",sum);
							printf("\nYOUR BOOKING IS OVER");
							break;
							} //switch d ended
						break; //case 3 break (acropolis)

						case 4: //case 4 (big cinemas)
						printf("\3\3\3\tYOU HAVE SELECTED BIG CINEMAS\t\3\3\3");
						printf("\n");
						printf("\4\4\4\tSELECT YOUR SEAT\t\4\4\4\n");
						printf("\20 1. GOLD       Rs.150\n");
						printf("\20 2. PLATINUM   Rs.180\n");
						printf("\20 3. ROYAL      Rs.210\n");
						scanf("%d",&d);
						rec=rec*10+d;
							switch(d)
							{  //switch d started

							case 1:
							printf("YOU HAVE SELECTED GOLD\n");
							printf("\n");
							printf("ENTER YOUR QUANTITY\n");
							scanf("%d",&q);
							printf("\n");
							printf("TOTAL QUANTITY IS : %d",q);
							printf("\n");
							sum=q*150;
							printf("\nTOTAL BILL : %d",sum);
							printf("\nYOUR BOOKING IS OVER");
							break;

							case 2:
							printf("YOU HAVE SELECTED PLATINUM\n");
							printf("\n");
							printf("ENTER YOUR QUANTITY\n");
							scanf("%d",&q);
							printf("\n");
							printf("TOTAL QUANTITY IS : %d",q);
							printf("\n");
							sum=q*180;
							printf("\nTOTAL BILL : %d",sum);
							printf("\nYOUR BOOKING IS OVER");
							break;

							case 3:
							printf("YOU HAVE SELECTED ROYAL\n");
							printf("\n");
							printf("ENTER YOUR QUANTITY\n");
							scanf("%d",&q);
							printf("\n");
							printf("TOTAL QUANTITY IS : %d",q);
							printf("\n");
							sum=q*210;
							printf("\nTOTAL BILL : %d",sum);
							printf("\nYOUR BOOKING IS OVER");
							break;
							} //switch d ended
						break;//case 4 break (big cinemas)
						}
				break; // udta punjab ended

				case 2: // conjuring 2 started
				printf("\n\3\3\3\tYOU HAVE SELECTED CONJURING 2\t\3\3\3");
				printf("\n");
				printf("\n\20 RELEASE DATE = 10TH JUNE 2016");
				printf("\n\20 RUN TIME = 2 HRS 16 MINS");
				printf("\n\20 DIRECTOR = JAMES WAN");
				printf("\n\20 GENRE = HORROR , THRILLER");
				printf("\n\20 LANGUAGE = HINDI");
				printf("\n\20 CAST = PATRICK WILSON,VERA FERMIGA,FRANCES OCONNOR,JAVIER BOTET,MARIA DOYLE KENNEDY");
				printf("\n\20 SYPNOSIS : ");
				printf("\n\4\4\4\tSELECT YOUR THEATRE\t\4\4\4\n");
				printf("\20 1. CINEPOLIS \n");
				printf("\20 2. PVR \n");
				printf("\20 3. ACROPOLIS \n");
				printf("\20 4. BIG CINEMAS \n");
				scanf("%d",&c);
				rec=rec*10+c;
					clrscr();
					switch(c)
					{
						case 1:
						printf("\3\3\3\tYOU HAVE SELECTED CINEPOLIS\t\3\3\3");
						printf("\n");
						printf("\4\4\4\tSELECT YOUR SEAT\t\4\4\4\n");
						printf("\20 1. GOLD       Rs.150\n");
						printf("\20 2. PLATINUM   Rs.180\n");
						printf("\20 3. ROYAL      Rs.210\n");
						scanf("%d",&d);
						rec=rec*10+d;
							switch(d)
							{

							case 1:
							printf("YOU HAVE SELECTED GOLD\n");
							printf("ENTER YOUR QUANTITY\n");
							scanf("%d",&q);
							printf("TOTAL QUANTITY IS : %d",q);
							sum=q*150;
							printf("\nTOTAL BILL : %d",sum);
							printf("\n\tYOUR BOOKING IS OVER");
							break;

							case 2:
							printf("YOU HAVE SELECTED PLATINUM\n");
							printf("ENTER YOUR QUANTITY\n");
							scanf("%d",&q);
							printf("TOTAL QUANTITY IS : %d \n",q);
							sum=q*180;
							printf("\nTOTAL BILL : %d",sum);
							printf("\nYOUR BOOKING IS OVER");
							break;

							case 3:
							printf("YOU HAVE SELECTED ROYAL\n");
							printf("ENTER YOUR QUANTITY\n");
							scanf("%d",&q);
							printf("TOTAL QUANTITY IS : %d",q);
							sum=q*210;
							printf("\nTOTAL BILL : %d",sum);
							printf("\nYOUR BOOKING IS OVER");
							break;
							}
						break;

						case 2:
						printf("\3\3\3\tYOU HAVE SELECTED PVR\t\3\3\3");
						printf("\n");
						printf("\4\4\4\tSELECT YOUR SEAT\t\4\4\4\n");
						printf("\20 1. GOLD       Rs.150\n");
						printf("\20 2. PLATINUM   Rs.180\n");
						printf("\20 3. ROYAL      Rs.210\n");
						scanf("%d",&d);
						rec=rec*10+d;

							switch(d)
							{

							case 1:
							printf("YOU HAVE SELECTED GOLD\n");
							printf("ENTER YOUR QUANTITY\n");
							scanf("%d",&q);
							printf("TOTAL QUANTITY IS : %d",q);
							sum=q*150;
							printf("\nTOTAL BILL : %d",sum);
							printf("\n\tYOUR BOOKING IS OVER");
							break;

							case 2:
							printf("YOU HAVE SELECTED PLATINUM\n");
							printf("ENTER YOUR QUANTITY\n");
							scanf("%d",&q);
							printf("TOTAL QUANTITY IS : %d",q);
							sum=q*180;
							printf("\nTOTAL BILL : %d",sum);
							printf("\nYOUR BOOKING IS OVER");
							break;

							case 3:
							printf("YOU HAVE SELECTED ROYAL\n");
							printf("ENTER YOUR QUANTITY\n");
							scanf("%d",&q);
							printf("TOTAL QUANTITY IS : %d",q);
							sum=q*210;
							printf("\nTOTAL BILL : %d",sum);
							printf("\nYOUR BOOKING IS OVER");
							break;

							}
						break;

						case 3:
						printf("\3\3\3\tYOU HAVE SELECTED ACROPOLIS\t\3\3\3");
						printf("\n");
						printf("\4\4\4\tSELECT YOUR SEAT\t\4\4\4\n");
						printf("\20 1. GOLD       Rs.150\n");
						printf("\20 2. PLATINUM   Rs.180\n");
						printf("\20 3. ROYAL      Rs.210\n");
						scanf("%d",&d);
						rec=rec*10+d;

							switch(d)
							{

							case 1:
							printf("YOU HAVE SELECTED GOLD\n");
							printf("ENTER YOUR QUANTITY\n");
							scanf("%d",&q);
							printf("TOTAL QUANTITY IS : %d",q);
							sum=q*150;
							printf("\nTOTAL BILL : %d",sum);
							printf("\nYOUR BOOKING IS OVER");
							break;

							case 2:
							printf("YOU HAVE SELECTED PLATINUM\n");
							printf("ENTER YOUR QUANTITY\n");
							scanf("%d",&q);
							printf("TOTAL QUANTITY IS : %d",q);
							sum=q*180;
							printf("\nTOTAL BILL : %d",sum);
							printf("\nYOUR BOOKING IS OVER");
							break;

							case 3:
							printf("YOU HAVE SELECTED ROYAL\n");
							printf("ENTER YOUR QUANTITY\n");
							scanf("%d",&q);
							printf("TOTAL QUANTITY IS : %d",q);
							sum=q*210;
							printf("\nTOTAL BILL : %d",sum);
							printf("\nYOUR BOOKING IS OVER");
							break;
							}
						break;

						case 4:
						printf("\3\3\3\tYOU HAVE SELECTED BIG CINEMAS\t\3\3\3");
						printf("\n");
						printf("\4\4\4\tSELECT YOUR SEAT\t\4\4\4\n");
						printf("\20 1. GOLD       Rs.150\n");
						printf("\20 2. PLATINUM   Rs.180\n");
						printf("\20 3. ROYAL      Rs.210\n");
						scanf("%d",&d);
						rec=rec*10+d;

							switch(d)
							{

							case 1:
							printf("YOU HAVE SELECTED GOLD\n");
							printf("ENTER YOUR QUANTITY\n");
							scanf("%d",&q);
							printf("TOTAL QUANTITY IS : %d",q);
							sum=q*150;
							printf("\nTOTAL BILL : %d",sum);
							printf("\nYOUR BOOKING IS OVER");
							break;

							case 2:
							printf("YOU HAVE SELECTED PLATINUM\n");
							printf("ENTER YOUR QUANTITY\n");
							scanf("%d",&q);
							printf("TOTAL QUANTITY IS : %d",q);
							sum=q*180;
							printf("\nTOTAL BILL : %d",sum);
							printf("\nYOUR BOOKING IS OVER");
							break;

							case 3:
							printf("YOU HAVE SELECTED ROYAL\n");
							printf("ENTER YOUR QUANTITY\n");
							scanf("%d",&q);
							printf("TOTAL QUANTITY IS : %d",q);
							sum=q*210;
							printf("\nTOTAL BILL : %d",sum);
							printf("\nYOUR BOOKING IS OVER");
							break;
							}
						 break;
						 }

				case 3: // houseful 3
				printf("\n\3\3\3\tYOU HAVE SELECTED HOUSEFUL 3\t\3\3\3");
				printf("\n");
				printf("\n\20 RELEASE DATE = 10TH JUNE 2016");
				printf("\n\20 RUN TIME = 2 HRS 16 MINS");
				printf("\n\20 DIRECTOR = JAMES WAN");
				printf("\n\20 GENRE = HORROR , THRILLER");
				printf("\n\20 LANGUAGE = HINDI");
				printf("\n\20 CAST = PATRICK WILSON,VERA FERMIGA,FRANCES OCONNOR,JAVIER BOTET,MARIA DOYLE KENNEDY");
				printf("\n\20 SYPNOSIS : ");
				printf("\n\4\4\4\tSELECT YOUR THEATRE\t\4\4\4\n");
				printf("\20 1. CINEPOLIS \n");
				printf("\20 2. PVR \n");
				printf("\20 3. ACROPOLIS \n");
				printf("\20 4. BIG CINEMAS \n");
				scanf("%d",&c);
				rec=rec*10+c;
					// clrscr();
					switch(c)
					{
						case 1:
						printf("\3\3\3\tYOU HAVE SELECTED CINEPOLIS\t\3\3\3");
						printf("\n");
						printf("\4\4\4\tSELECT YOUR SEAT\t\4\4\4\n");
						printf("\20 1. GOLD       Rs.150\n");
						printf("\20 2. PLATINUM   Rs.180\n");
						printf("\20 3. ROYAL      Rs.210\n");
						scanf("%d",&d);
						rec=rec*10+d;
							switch(d)
							{

							case 1:
							printf("YOU HAVE SELECTED GOLD\n");
							printf("ENTER YOUR QUANTITY\n");
							scanf("%d",&q);
							printf("TOTAL QUANTITY IS : %d",q);
							sum=q*150;
							printf("\nTOTAL BILL : %d",sum);
							printf("\n\tYOUR BOOKING IS OVER");
							break;

							case 2:
							printf("YOU HAVE SELECTED PLATINUM\n");
							printf("ENTER YOUR QUANTITY\n");
							scanf("%d",&q);
							printf("TOTAL QUANTITY IS : %d \n",q);
							sum=q*180;
							printf("\nTOTAL BILL : %d",sum);
							printf("\nYOUR BOOKING IS OVER");
							break;

							case 3:
							printf("YOU HAVE SELECTED ROYAL\n");
							printf("ENTER YOUR QUANTITY\n");
							scanf("%d",&q);
							printf("TOTAL QUANTITY IS : %d",q);
							sum=q*210;
							printf("\nTOTAL BILL : %d",sum);
							printf("\nYOUR BOOKING IS OVER");
							break;
							}
						break;

						case 2:
						printf("\3\3\3\tYOU HAVE SELECTED PVR\t\3\3\3");
						printf("\n");
						printf("\4\4\4\tSELECT YOUR SEAT\t\4\4\4\n");
						printf("\20 1. GOLD       Rs.150\n");
						printf("\20 2. PLATINUM   Rs.180\n");
						printf("\20 3. ROYAL      Rs.210\n");
						scanf("%d",&d);
						rec=rec*10+d;

							switch(d)
							{

							case 1:
							printf("YOU HAVE SELECTED GOLD\n");
							printf("ENTER YOUR QUANTITY\n");
							scanf("%d",&q);
							printf("TOTAL QUANTITY IS : %d",q);
							sum=q*150;
							printf("\nTOTAL BILL : %d",sum);
							printf("\n\tYOUR BOOKING IS OVER");
							break;

							case 2:
							printf("YOU HAVE SELECTED PLATINUM\n");
							printf("ENTER YOUR QUANTITY\n");
							scanf("%d",&q);
							printf("TOTAL QUANTITY IS : %d",q);
							sum=q*180;
							printf("\nTOTAL BILL : %d",sum);
							printf("\nYOUR BOOKING IS OVER");
							break;

							case 3:
							printf("YOU HAVE SELECTED ROYAL\n");
							printf("ENTER YOUR QUANTITY\n");
							scanf("%d",&q);
							printf("TOTAL QUANTITY IS : %d",q);
							sum=q*210;
							printf("\nTOTAL BILL : %d",sum);
							printf("\nYOUR BOOKING IS OVER");
							break;

							}
						break;

						case 3:
						printf("\3\3\3\tYOU HAVE SELECTED ACROPOLIS\t\3\3\3");
						printf("\n");
						printf("\4\4\4\tSELECT YOUR SEAT\t\4\4\4\n");
						printf("\20 1. GOLD       Rs.150\n");
						printf("\20 2. PLATINUM   Rs.180\n");
						printf("\20 3. ROYAL      Rs.210\n");
						scanf("%d",&d);
						rec=rec*10+d;

							switch(d)
							{

							case 1:
							printf("YOU HAVE SELECTED GOLD\n");
							printf("ENTER YOUR QUANTITY\n");
							scanf("%d",&q);
							printf("TOTAL QUANTITY IS : %d",q);
							sum=q*150;
							printf("\nTOTAL BILL : %d",sum);
							printf("\nYOUR BOOKING IS OVER");
							break;

							case 2:
							printf("YOU HAVE SELECTED PLATINUM\n");
							printf("ENTER YOUR QUANTITY\n");
							scanf("%d",&q);
							printf("TOTAL QUANTITY IS : %d",q);
							sum=q*180;
							printf("\nTOTAL BILL : %d",sum);
							printf("\nYOUR BOOKING IS OVER");
							break;

							case 3:
							printf("YOU HAVE SELECTED ROYAL\n");
							printf("ENTER YOUR QUANTITY\n");
							scanf("%d",&q);
							printf("TOTAL QUANTITY IS : %d",q);
							sum=q*210;
							printf("\nTOTAL BILL : %d",sum);
							printf("\nYOUR BOOKING IS OVER");
							break;
							}
						break;

						case 4:
						printf("\3\3\3\tYOU HAVE SELECTED BIG CINEMAS\t\3\3\3");
						printf("\n");
						printf("\4\4\4\tSELECT YOUR SEAT\t\4\4\4\n");
						printf("\20 1. GOLD       Rs.150\n");
						printf("\20 2. PLATINUM   Rs.180\n");
						printf("\20 3. ROYAL      Rs.210\n");
						scanf("%d",&d);
						rec=rec*10+d;

							switch(d)
							{

							case 1:
							printf("YOU HAVE SELECTED GOLD\n");
							printf("ENTER YOUR QUANTITY\n");
							scanf("%d",&q);
							printf("TOTAL QUANTITY IS : %d",q);
							sum=q*150;
							printf("\nTOTAL BILL : %d",sum);
							printf("\nYOUR BOOKING IS OVER");
							break;

							case 2:
							printf("YOU HAVE SELECTED PLATINUM\n");
							printf("ENTER YOUR QUANTITY\n");
							scanf("%d",&q);
							printf("TOTAL QUANTITY IS : %d",q);
							sum=q*180;
							printf("\nTOTAL BILL : %d",sum);
							printf("\nYOUR BOOKING IS OVER");
							break;

							case 3:
							printf("YOU HAVE SELECTED ROYAL\n");
							printf("ENTER YOUR QUANTITY\n");
							scanf("%d",&q);
							printf("TOTAL QUANTITY IS : %d",q);
							sum=q*210;
							printf("\nTOTAL BILL : %d",sum);
							printf("\nYOUR BOOKING IS OVER");
							break;
							}
						 break;
						 }

				case 4: //angry birds
				printf("\n\3\3\3\tYOU HAVE SELECTED ANGRY BIRDS\t\3\3\3");
				printf("\n");
				printf("\n\20 RELEASE DATE = 10TH JUNE 2016");
				printf("\n\20 RUN TIME = 2 HRS 16 MINS");
				printf("\n\20 DIRECTOR = JAMES WAN");
				printf("\n\20 GENRE = HORROR , THRILLER");
				printf("\n\20 LANGUAGE = HINDI");
				printf("\n\20 CAST = PATRICK WILSON,VERA FERMIGA,FRANCES OCONNOR,JAVIER BOTET,MARIA DOYLE KENNEDY");
				printf("\n\20 SYPNOSIS : ");
				printf("\n\4\4\4\tSELECT YOUR THEATRE\t\4\4\4\n");
				printf("\20 1. CINEPOLIS \n");
				printf("\20 2. PVR \n");
				printf("\20 3. ACROPOLIS \n");
				printf("\20 4. BIG CINEMAS \n");
				scanf("%d",&c);
				rec=rec*10+c;
					// clrscr();
					switch(c)
					{
						case 1:
						printf("\3\3\3\tYOU HAVE SELECTED CINEPOLIS\t\3\3\3");
						printf("\n");
						printf("\4\4\4\tSELECT YOUR SEAT\t\4\4\4\n");
						printf("\20 1. GOLD       Rs.150\n");
						printf("\20 2. PLATINUM   Rs.180\n");
						printf("\20 3. ROYAL      Rs.210\n");
						scanf("%d",&d);
						rec=rec*10+d;
							switch(d)
							{

							case 1:
							printf("YOU HAVE SELECTED GOLD\n");
							printf("ENTER YOUR QUANTITY\n");
							scanf("%d",&q);
							printf("TOTAL QUANTITY IS : %d",q);
							sum=q*150;
							printf("\nTOTAL BILL : %d",sum);
							printf("\n\tYOUR BOOKING IS OVER");
							break;

							case 2:
							printf("YOU HAVE SELECTED PLATINUM\n");
							printf("ENTER YOUR QUANTITY\n");
							scanf("%d",&q);
							printf("TOTAL QUANTITY IS : %d \n",q);
							sum=q*180;
							printf("\nTOTAL BILL : %d",sum);
							printf("\nYOUR BOOKING IS OVER");
							break;

							case 3:
							printf("YOU HAVE SELECTED ROYAL\n");
							printf("ENTER YOUR QUANTITY\n");
							scanf("%d",&q);
							printf("TOTAL QUANTITY IS : %d",q);
							sum=q*210;
							printf("\nTOTAL BILL : %d",sum);
							printf("\nYOUR BOOKING IS OVER");
							break;
							}
						break;

						case 2:
						printf("\3\3\3\tYOU HAVE SELECTED PVR\t\3\3\3");
						printf("\n");
						printf("\4\4\4\tSELECT YOUR SEAT\t\4\4\4\n");
						printf("\20 1. GOLD       Rs.150\n");
						printf("\20 2. PLATINUM   Rs.180\n");
						printf("\20 3. ROYAL      Rs.210\n");
						scanf("%d",&d);
						rec=rec*10+d;

							switch(d)
							{

							case 1:
							printf("YOU HAVE SELECTED GOLD\n");
							printf("ENTER YOUR QUANTITY\n");
							scanf("%d",&q);
							printf("TOTAL QUANTITY IS : %d",q);
							sum=q*150;
							printf("\nTOTAL BILL : %d",sum);
							printf("\n\tYOUR BOOKING IS OVER");
							break;

							case 2:
							printf("YOU HAVE SELECTED PLATINUM\n");
							printf("ENTER YOUR QUANTITY\n");
							scanf("%d",&q);
							printf("TOTAL QUANTITY IS : %d",q);
							sum=q*180;
							printf("\nTOTAL BILL : %d",sum);
							printf("\nYOUR BOOKING IS OVER");
							break;

							case 3:
							printf("YOU HAVE SELECTED ROYAL\n");
							printf("ENTER YOUR QUANTITY\n");
							scanf("%d",&q);
							printf("TOTAL QUANTITY IS : %d",q);
							sum=q*210;
							printf("\nTOTAL BILL : %d",sum);
							printf("\nYOUR BOOKING IS OVER");
							break;

							}
						break;

						case 3:
						printf("\3\3\3\tYOU HAVE SELECTED ACROPOLIS\t\3\3\3");
						printf("\n");
						printf("\4\4\4\tSELECT YOUR SEAT\t\4\4\4\n");
						printf("\20 1. GOLD       Rs.150\n");
						printf("\20 2. PLATINUM   Rs.180\n");
						printf("\20 3. ROYAL      Rs.210\n");
						scanf("%d",&d);
						rec=rec*10+d;

							switch(d)
							{

							case 1:
							printf("YOU HAVE SELECTED GOLD\n");
							printf("ENTER YOUR QUANTITY\n");
							scanf("%d",&q);
							printf("TOTAL QUANTITY IS : %d",q);
							sum=q*150;
							printf("\nTOTAL BILL : %d",sum);
							printf("\nYOUR BOOKING IS OVER");
							break;

							case 2:
							printf("YOU HAVE SELECTED PLATINUM\n");
							printf("ENTER YOUR QUANTITY\n");
							scanf("%d",&q);
							printf("TOTAL QUANTITY IS : %d",q);
							sum=q*180;
							printf("\nTOTAL BILL : %d",sum);
							printf("\nYOUR BOOKING IS OVER");
							break;

							case 3:
							printf("YOU HAVE SELECTED ROYAL\n");
							printf("ENTER YOUR QUANTITY\n");
							scanf("%d",&q);
							printf("TOTAL QUANTITY IS : %d",q);
							sum=q*210;
							printf("\nTOTAL BILL : %d",sum);
							printf("\nYOUR BOOKING IS OVER");
							break;
							}
						break;

						case 4:
						printf("\3\3\3\tYOU HAVE SELECTED BIG CINEMAS\t\3\3\3");
						printf("\n");
						printf("\4\4\4\tSELECT YOUR SEAT\t\4\4\4\n");
						printf("\20 1. GOLD       Rs.150\n");
						printf("\20 2. PLATINUM   Rs.180\n");
						printf("\20 3. ROYAL      Rs.210\n");
						scanf("%d",&d);
						rec=rec*10+d;

							switch(d)
							{

							case 1:
							printf("YOU HAVE SELECTED GOLD\n");
							printf("ENTER YOUR QUANTITY\n");
							scanf("%d",&q);
							printf("TOTAL QUANTITY IS : %d",q);
							sum=q*150;
							printf("\nTOTAL BILL : %d",sum);
							printf("\nYOUR BOOKING IS OVER");
							break;

							case 2:
							printf("YOU HAVE SELECTED PLATINUM\n");
							printf("ENTER YOUR QUANTITY\n");
							scanf("%d",&q);
							printf("TOTAL QUANTITY IS : %d",q);
							sum=q*180;
							printf("\nTOTAL BILL : %d",sum);
							printf("\nYOUR BOOKING IS OVER");
							break;

							case 3:
							printf("YOU HAVE SELECTED ROYAL\n");
							printf("ENTER YOUR QUANTITY\n");
							scanf("%d",&q);
							printf("TOTAL QUANTITY IS : %d",q);
							sum=q*210;
							printf("\nTOTAL BILL : %d",sum);
							printf("\nYOUR BOOKING IS OVER");
							break;
							}
						 break;
						 }

			break;
			}

			case 8:


			if(rec==2111)       //udta punjab cinepolis
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = UDTA PUNJAB\n2.YOUR THEATRE = CINEPOLIS\n");
				printf("3.YOUR TICKET = GOLD SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			else if(rec==2112)  //udta punjab cinepolis
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = UDTA PUNJAB\n2.YOUR THEATRE = CINEPOLIS\n");
				printf("3.YOUR TICKET = PLATINUM SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			else if(rec==2113)  //udta punjab cinepolis
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = UDTA PUNJAB\n2.YOUR THEATRE = CINEPOLIS\n");
				printf("3.YOUR TICKET = ROYAL SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			else if(rec==2121)  //udta punjab pvr
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = UDTA PUNJAB\n2.YOUR THEATRE = PVR\n");
				printf("3.YOUR TICKET = GOLD SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			else if(rec==2122)  //udta punjab pvr
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = UDTA PUNJAB\n2.YOUR THEATRE = PVR\n");
				printf("3.YOUR TICKET = PLATINUM SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			else if(rec==2123)  //udta punjab pvr
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = UDTA PUNJAB\n2.YOUR THEATRE = PVR\n");
				printf("3.YOUR TICKET = ROYAL SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			else if(rec==2131)  //udta punjab acropolis
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = UDTA PUNJAB\n2.YOUR THEATRE = ACROPOLIS\n");
				printf("3.YOUR TICKET = GOLD SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			else if(rec==2132)  //udta punjab acropolis
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = UDTA PUNJAB\n2.YOUR THEATRE = ACROPOLIS\n");
				printf("3.YOUR TICKET = PLATINUM SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			else if(rec==2133)  //udta punjab acropolis
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = UDTA PUNJAB\n2.YOUR THEATRE = ACROPOLIS\n");
				printf("3.YOUR TICKET = ROYAL SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			else if(rec==2141)  //udta punjab big cinemas
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = UDTA PUNJAB\n2.YOUR THEATRE = BIG CINEMAS\n");
				printf("3.YOUR TICKET = GOLD SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			else if(rec==2142)  //udta punjab big cinemas
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = UDTA PUNJAB\n2.YOUR THEATRE = BIG CINEMAS\n");
				printf("3.YOUR TICKET = PLATINUM SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			else if(rec==2143)  //udta punjab big cinemas
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = UDTA PUNJAB\n2.YOUR THEATRE = BIG CINEMAS\n");
				printf("3.YOUR TICKET = ROYAL SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			else if(rec==2211)  //conjuring 2 cinepolis
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = CONJURING 2\n2.YOUR THEATRE = CINEPOLIS\n");
				printf("3.YOUR TICKET = GOLD SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			else if(rec==2212)  //conjuring 2 cinepolis
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = CONJURING 2\n2.YOUR THEATRE = CINEPOLIS\n");
				printf("3.YOUR TICKET = PLATINUM SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			else if(rec==2213)  //conjuring 2 cinepolis
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = CONJURING 2\n2.YOUR THEATRE = CINEPOLIS\n");
				printf("3.YOUR TICKET = ROYAL SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			else if(rec==2221)  //conjuring 2 pvr
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = CONJURING 2\n2.YOUR THEATRE = PVR\n");
				printf("3.YOUR TICKET = GOLD SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			else if(rec==2222)  //conjuring 2 pvr
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = CONJURING 2\n2.YOUR THEATRE = PVR\n");
				printf("3.YOUR TICKET = PLATINUM SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			else if(rec==2223)  //conjuring 2 pvr
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = CONJURING 2\n2.YOUR THEATRE = PVR\n");
				printf("3.YOUR TICKET = ROYAL SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			else if(rec==2231)  //conjuring 2 acropolis
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = CONJURING 2\n2.YOUR THEATRE = ACROPOLIS\n");
				printf("3.YOUR TICKET = GOLD SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			else if(rec==2232)  //conjuring 2 acropolis
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = CONJURING 2\n2.YOUR THEATRE = ACROPOLIS\n");
				printf("3.YOUR TICKET = PLATINUM SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			else if(rec==2233)  //conjuring 2 acropolis
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = CONJURING 2\n2.YOUR THEATRE = ACROPOLIS\n");
				printf("3.YOUR TICKET = ROYAL SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			else if(rec==2241)  //conjuring 2 big cinemas
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = CONJURING 2\n2.YOUR THEATRE = BIG CINEMAS\n");
				printf("3.YOUR TICKET = GOLD SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			else if(rec==2242)  //conjuring 2 big cinemas
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = CONJURING 2\n2.YOUR THEATRE = BIG CINEMAS\n");
				printf("3.YOUR TICKET = PLATINUM SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			else if(rec==2243)  //conjuring 2 big cinemas
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = CONJURING 2\n2.YOUR THEATRE = BIG CINEMAS\n");
				printf("3.YOUR TICKET = ROYAL SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			else if(rec==2311)  //houseful 3 cinepolis
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = HOUSEFUL 3\n2.YOUR THEATRE = CINEPOLIS\n");
				printf("3.YOUR TICKET = GOLD SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			else if(rec==2312)  //houseful 3 cinepolis
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = HOUSEFUL 3\n2.YOUR THEATRE = CINEPOLIS\n");
				printf("3.YOUR TICKET = PLATINUM SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			else if(rec==2313)  //houseful 3 cinepolis
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = HOUSEFUL 3\n2.YOUR THEATRE = CINEPOLIS\n");
				printf("3.YOUR TICKET = ROYAL SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			else if(rec==2321)  //houseful 3 pvr
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = HOUSEFUL 3\n2.YOUR THEATRE = PVR\n");
				printf("3.YOUR TICKET = GOLD SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			else if(rec==2322)  //houseful 3 pvr
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = HOUSEFUL 3\n2.YOUR THEATRE = PVR\n");
				printf("3.YOUR TICKET = PLATINUM SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			else if(rec==2323)  //houseful 3 pvr
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = HOUSEFUL 3\n2.YOUR THEATRE = PVR\n");
				printf("3.YOUR TICKET = ROYAL SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			else if(rec==2331)  //houseful 3 acropolis
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = HOUSEFUL 3\n2.YOUR THEATRE = ACROPOLIS\n");
				printf("3.YOUR TICKET = GOLD SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			else if(rec==2332)  //houseful 3 acropolis
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = HOUSEFUL 3\n2.YOUR THEATRE = ACROPOLIS\n");
				printf("3.YOUR TICKET = PLATINUM SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			else if(rec==2333)  //houseful 3 acropolis
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = HOUSEFUL 3\n2.YOUR THEATRE = ACROPOLIS\n");
				printf("3.YOUR TICKET = ROYAL SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			else if(rec==2341)  //houseful 3 big cinemas
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = HOUSEFUL 3\n2.YOUR THEATRE = BIG CINEMAS\n");
				printf("3.YOUR TICKET = GOLD SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			else if(rec==2342)  //houseful 3 big cinemas
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = HOUSEFUL 3\n2.YOUR THEATRE = BIG CINEMAS\n");
				printf("3.YOUR TICKET = PLATINUM SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			else if(rec==2343)  //houseful 3 big cinemas
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = HOUSEFUL 3\n2.YOUR THEATRE = BIG CINEMAS\n");
				printf("3.YOUR TICKET = ROYAL SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			else if(rec==2411)  //angry birds cinepolis
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = ANGRY BIRDS\n2.YOUR THEATRE = CINEPOLIS\n");
				printf("3.YOUR TICKET = GOLD SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			else if(rec==2412)  //angry birds cinepolis
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = ANGRY BIRDS\n2.YOUR THEATRE = CINEPOLIS\n");
				printf("3.YOUR TICKET = PLATINUM SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			else if(rec==2413)  //angry birds cinepolis
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = ANGRY BIRDS\n2.YOUR THEATRE = CINEPOLIS\n");
				printf("3.YOUR TICKET = ROYAL SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			else if(rec==2421)  //angry birds pvr
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = ANGRY BIRDS\n2.YOUR THEATRE = PVR\n");
				printf("3.YOUR TICKET = GOLD SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			else if(rec==2422)  //angry birds pvr
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = ANGRY BIRDS\n2.YOUR THEATRE = PVR\n");
				printf("3.YOUR TICKET = PLATINUM SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			else if(rec==2423)  //angry birds pvr
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = ANGRY BIRDS\n2.YOUR THEATRE = PVR\n");
				printf("3.YOUR TICKET = ROYAL SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			else if(rec==2431)  //angry birds acropolis
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = ANGRY BIRDS\n2.YOUR THEATRE = ACROPOLIS\n");
				printf("3.YOUR TICKET = GOLD SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			else if(rec==2432)  //angry birds acropolis
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = ANGRY BIRDS\n2.YOUR THEATRE = ACROPOLIS\n");
				printf("3.YOUR TICKET = PLATINUM SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			else if(rec==2433)  //angry birds acropolis
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = ANGRY BIRDS\n2.YOUR THEATRE = ACROPOLIS\n");
				printf("3.YOUR TICKET = ROYAL SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			else if(rec==2441)  //angry birds big cinemas
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = ANGRY BIRDS\n2.YOUR THEATRE = BIG CINEMAS\n");
				printf("3.YOUR TICKET = GOLD SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			else if(rec==2442)  //angry birds big cinemas
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = ANGRY BIRDS\n2.YOUR THEATRE = BIG CINEMAS\n");
				printf("3.YOUR TICKET = PLATINUM SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			else if(rec==2443)  //angry birds big cinemas
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = ANGRY BIRDS\n2.YOUR THEATRE = BIG CINEMAS\n");
				printf("3.YOUR TICKET = ROYAL SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			else if(rec==2511)  //now you see me 2 cinepolis
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = NOW YOU SEE ME 2\n2.YOUR THEATRE = CINEPOLIS\n");
				printf("3.YOUR TICKET = GOLD SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			else if(rec==2512)  //now you see me 2 cinepolis
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = NOW YOU SEE ME 2\n2.YOUR THEATRE = CINEPOLIS\n");
				printf("3.YOUR TICKET = PLATINUM SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			else if(rec==2513)  //now you see me 2 cinepolis
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = NOW YOU SEE ME 2\n2.YOUR THEATRE = CINEPOLIS\n");
				printf("3.YOUR TICKET = ROYAL SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			else if(rec==2521)  //now you see me 2 pvr
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = NOW YOU SEE ME 2\n2.YOUR THEATRE = PVR\n");
				printf("3.YOUR TICKET = GOLD SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			else if(rec==2522)  //now you see me 2 pvr
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = NOW YOU SEE ME 2\n2.YOUR THEATRE = PVR\n");
				printf("3.YOUR TICKET = PLATINUM SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			else if(rec==2523)  //now you see me 2 pvr
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = NOW YOU SEE ME 2\n2.YOUR THEATRE = PVR\n");
				printf("3.YOUR TICKET = ROYAL SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			else if(rec==2531)  //now you see me 2 acropolis
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = NOW YOU SEE ME 2\n2.YOUR THEATRE = ACROPOLIS\n");
				printf("3.YOUR TICKET = GOLD SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			else if(rec==2532)  //now you see me 2 acropolis
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = NOW YOU SEE ME 2\n2.YOUR THEATRE = ACROPOLIS\n");
				printf("3.YOUR TICKET = PLATINUM SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			else if(rec==2533)  //now you see me 2 acropolis
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = NOW YOU SEE ME 2\n2.YOUR THEATRE = ACROPOLIS\n");
				printf("3.YOUR TICKET = ROYAL SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			else if(rec==2541)  //now you see me 2 big cinemas
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = NOW YOU SEE ME 2\n2.YOUR THEATRE = BIG CINEMAS\n");
				printf("3.YOUR TICKET = GOLD SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			else if(rec==2542)  //now you see me 2 big cinemas
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = NOW YOU SEE ME 2\n2.YOUR THEATRE = BIG CINEMAS\n");
				printf("3.YOUR TICKET = PLATINUM SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			else if(rec==2543)  //now you see me 2 big cinemas
			{
				printf("\n\t\t\4----- YOUR BOOKING DETAILS -----\4");
				printf("\n\n1.YOUR MOVIE = NOW YOU SEE ME 2\n2.YOUR THEATRE = BIG CINEMAS\n");
				printf("3.YOUR TICKET = ROYAL SEAT\n");
				printf("\n\t\t\4----- THANK YOU FOR USING BOOK MY SHOW -----\4");
			}
			getch();
			exit(0);
			break;

		} // main switch

	} // if finished
	else if(c1!=0)
	{
		printf("INVALID USERNAME\n");
		goto Login;
	}
	else
	{

		printf("INVALID PASSWORD");
		goto Password;
	}

getch();
return 0;
}
