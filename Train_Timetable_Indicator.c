//project created by Aniruddha Tayade.
//COPYRIGHT RESTRICTED..
//VERSION V1.0

#include <stdio.h>
#include <stdlib.h>


int main()
{
     int choice;
    //start of the program


    printf("\n\n************************WELCOME TO TRAIN TIMETABLE INDICATOR******************************\n\n");
    printf("\t\t\tWhere do you want to go???\n\n");


    printf("\t\t\tYOU ARE AT PALGHAR!!!\n\n");
    printf("NOTE: It is scalable only upto virar\n");


    printf("1.virar\n");
    printf("2.vaitarna\n");
    printf("3.saphale\n");
    printf("4.kelve road\n");
    printf("5.boisar\n");
    printf("6.vangaon\n");
    printf("7.dahanu road\n");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1: virar();
                break;

        case 2: vaitarna();
                break;

        case 3: saphale();
                break;

        case 4: kelveroad();
                break;

        case 5: boisar();
                break;

        case 6: vangaon();
                break;

        case 7: dahanuroad();
                break;

        default: printf("PLEASE ENTER CORRECT CHOICE !!! \n");
    }
}


//function virar
int virar()
{
      int choice,i;

    printf("NOTE:\t ALL TRAIN TIMING SHOULD BE IN 24-HOUR CLOCK\n\n");

    printf("ALL THE TRAINS ARE LOCALS,EXPRESS OR SHUTTLES\n\n");
     //ARRIVAL TIME
    int hour[29]={1,5,6,6,7,7,7,8,9,9,10,10,11,12,13,13,14,15,15,17,18,18,19,20,20,21,21,22,23};
    int minute[29]={50,28,01,16,10,40,51,49,05,21,10,40,45,16,17,55,50,30,55,55,10,52,40,20,37,20,41,13,10};
     //DESTINATION TIME
    int rhour[29]={2,6,6,6,7,8,8,9,9,10,10,11,12,13,13,14,15,16,16,18,18,19,20,21,21,22,22,23,23};
    int rminute[29]={43,6,41,51,55,25,37,28,50,5,50,20,25,20,56,35,33,15,37,35,52,40,27,00,30,00,30,00,50};

    while(1)
    {
        for(i=0;i<30;i++)
        {
            printf("TRAIN WILL ARRIVE AT\n");
            printf("%d:%d\t\n",hour[i],minute[i]);
            printf("TRAIN WILL REACH DESTINATION AT\n%d:%d\n\n",rhour[i],rminute[i]);
            printf("do you want to travel by this train \n");
            printf("if yes \t press 1\n");
            printf("if no \t press 0");
            scanf("%d",&choice);
            switch(choice)
            {
                case 1:  printf("YOU HAVE SELECTED THE TRAIN SUCCESSFULLY\n\nHAPPY JOURNEY\n\n");
                        exit(1);
                        break;

                case 0:  printf("next train is--->\n");
                        break;

                default:printf("enter correct choice please");
                        exit(1);

            }
        }
    }
}


//function vaitarna
int vaitarna()
{
   int choice,i;

    printf("NOTE:\t ALL TRAIN TIMING SHOULD BE IN 24-HOUR CLOCK\n\n");

    printf("ALL THE TRAINS ARE LOCALS,EXPRESS OR SHUTTLES\n\n");
    //ARRIVAL TIME
    int hour[27]={5,6,6,7,7,7,8,9,9,10,10,11,12,13,13,14,15,17,18,18,19,20,20,21,21,22,23};
    int minute[27]={28,01,16,10,40,51,49,05,21,10,40,45,16,17,55,50,30,55,55,10,52,40,20,37,20,41,10};
    //DESTINATION TIME
    int rhour[27]={5,6,6,7,8,8,9,9,9,10,11,12,12,13,14,15,15,16,18,18,19,20,20,21,21,22,23};
    int rminute[27]={55,24,38,37,3,22,13,28,46,33,3,8,45,40,18,13,56,18,18,33,22,12,43,7,43,4,40};

    while(1)
    {
        for(i=0;i<30;i++)
        {
            printf("TRAIN WILL ARRIVE AT\n");
            printf("%d:%d\t\n",hour[i],minute[i]);
            printf("TRAIN WILL REACH DESTINATION AT\n%d:%d\n\n",rhour[i],rminute[i]);
            printf("do you want to travel by this train \n");
            printf("if yes \t press 1\n");
            printf("if no \t press 0");
            scanf("%d",&choice);
            switch(choice)
            {
                case 1:  printf("YOU HAVE SELECTED THE TRAIN SUCCESSFULLY\n\nHAPPY JOURNEY\n\n");
                        exit(1);
                        break;

                case 0:  printf("next train is--->\n");
                        break;

                default:printf("enter correct choice please");
                        exit(1);
            }
        }
    }
}


//FUNCTION SAPHALE
int saphale()
{
      int choice,i;

    printf("NOTE:\t ALL TRAIN TIMING SHOULD BE IN 24-HOUR CLOCK\n\n");

    printf("ALL THE TRAINS ARE LOCALS,EXPRESS OR SHUTTLES\n\n");
     //ARRIVAL TIME
    int hour[29]={1,5,6,6,7,7,7,8,9,9,10,10,11,12,13,13,14,15,15,17,18,18,19,20,20,21,21,22,23};
    int minute[29]={50,28,1,16,10,40,51,49,5,21,10,40,45,16,17,55,50,30,55,55,10,52,40,20,37,20,41,13,10};
     //DESTINATION TIME
    int rhour[29]={2,5,6,6,7,7,8,9,9,9,10,10,12,12,13,14,15,15,16,18,18,19,20,20,20,21,21,22,23};
    int rminute[29]={14,45,16,13,28,55,15,5,20,37,25,55,0,35,32,10,5,47,10,9,25,11,4,35,53,35,56,30,25};

    while(1)
    {
        for(i=0;i<30;i++)
        {
            printf("TRAIN WILL ARRIVE AT\n");
            printf("%d:%d\t\n",hour[i],minute[i]);
            printf("TRAIN WILL REACH DESTINATION AT\n%d:%d\n\n",rhour[i],rminute[i]);
            printf("do you want to travel by this train \n");
            printf("if yes \t press 1\n");
            printf("if no \t press 0");
            scanf("%d",&choice);
            switch(choice)
            {
                case 1:  printf("YOU HAVE SELECTED THE TRAIN SUCCESSFULLY\n\nHAPPY JOURNEY\n\n");
                        exit(1);
                        break;

                case 0:  printf("next train is--->\n");
                        break;

                default:printf("enter correct choice please");
                        exit(1);

            }
        }
    }
}


//FUNCTION KELVE ROAD
int kelveroad()
{
      int choice,i;

    printf("NOTE:\t ALL TRAIN TIMING SHOULD BE IN 24-HOUR CLOCK\n\n");

    printf("ALL THE TRAINS ARE LOCALS,EXPRESS OR SHUTTLES\n\n");
     //ARRIVAL TIME
    int hour[29]={1,5,6,6,7,7,7,8,9,9,10,10,11,12,13,13,14,15,15,17,18,18,19,20,20,21,21,22,23};
    int minute[29]={50,28,01,16,10,40,51,49,05,21,10,40,45,16,17,55,50,30,55,55,10,52,40,20,37,20,41,13,10};
     //DESTINATION TIME
    int rhour[29]={2,5,6,6,7,7,8,8,9,9,10,10,11,12,13,14,14,15,16,18,18,19,19,20,20,21,21,22,23};
    int rminute[29]={3,38,10,24,21,48,8,58,13,30,18,48,53,27,25,3,58,40,3,3,18,2,58,28,46,28,49,23,18};

    while(1)
    {
        for(i=0;i<30;i++)
        {
            printf("TRAIN WILL ARRIVE AT\n");
            printf("%d:%d\t\n",hour[i],minute[i]);
            printf("TRAIN WILL REACH DESTINATION AT\n%d:%d\n\n",rhour[i],rminute[i]);
            printf("do you want to travel by this train \n");
            printf("if yes \t press 1\n");
            printf("if no \t press 0");
            scanf("%d",&choice);
            switch(choice)
            {
                case 1:  printf("YOU HAVE SELECTED THE TRAIN SUCCESSFULLY\n\nHAPPY JOURNEY\n\n");
                        exit(1);
                        break;

                case 0:  printf("next train is--->\n");
                        break;

                default:printf("enter correct choice please");
                        exit(1);

            }
        }
    }
}


//FUNCTION BOISAR
int boisar()
{
      int choice,i;

    printf("NOTE:\t ALL TRAIN TIMING SHOULD BE IN 24-HOUR CLOCK\n\n");

    printf("ALL THE TRAINS ARE LOCALS,EXPRESS OR SHUTTLES\n\n");
     //ARRIVAL TIME
    int hour[29]={1,4,5,5,6,6,7,7,8,9,9,11,11,12,12,12,12,13,14,15,17,17,18,19,19,21,21,22,23};
    int minute[29]={15,38,13,33,8,48,26,49,16,3,43,20,38,6,8,28,48,53,47,49,9,52,33,43,59,8,42,18,31};
     //DESTINATION TIME
    int rhour[29]={1,4,5,5,6,7,7,8,8,9,9,11,11,12,12,12,13,14,15,16,17,18,18,19,20,21,21,22,23};
    int rminute[29]={37,49,26,46,21,1,38,10,28,16,56,32,51,18,21,40,2,6,1,3,22,4,46,56,11,20,54,39,43};

    while(1)
    {
        for(i=0;i<30;i++)
        {
            printf("TRAIN WILL ARRIVE AT\n");
            printf("%d:%d\t\n",hour[i],minute[i]);
            printf("TRAIN WILL REACH DESTINATION AT\n%d:%d\n\n",rhour[i],rminute[i]);
            printf("do you want to travel by this train \n");
            printf("if yes \t press 1\n");
            printf("if no \t press 0");
            scanf("%d",&choice);
            switch(choice)
            {
                case 1:  printf("YOU HAVE SELECTED THE TRAIN SUCCESSFULLY\n\nHAPPY JOURNEY\n\n");
                        exit(1);
                        break;

                case 0:  printf("next train is--->\n");
                        break;

                default:printf("enter correct choice please");
                        exit(1);

            }
        }
    }
}


//FUNCTION VANGAON
int vangaon()
{
      int choice,i;

    printf("NOTE:\t ALL TRAIN TIMING SHOULD BE IN 24-HOUR CLOCK\n\n");

    printf("ALL THE TRAINS ARE LOCALS,EXPRESS OR SHUTTLES\n\n");
     //ARRIVAL TIME
    int hour[28]={1,4,5,5,6,6,7,8,9,9,11,11,12,12,12,12,13,14,15,17,17,18,19,19,21,21,22,23};
    int minute[28]={15,38,13,33,8,48,49,16,3,43,20,38,6,8,28,48,53,47,49,9,52,33,43,59,8,42,18,31};
     //DESTINATION TIME
    int rhour[28]={1,5,5,5,6,7,7,8,9,10,11,11,12,12,12,13,14,15,16,17,18,18,20,20,21,22,22,23};
    int rminute[28]={48,1,37,53,28,8,47,40,24,3,44,58,28,30,48,11,13,36,18,32,15,53,3,21,28,3,47,53};

    while(1)
    {
        for(i=0;i<29;i++)
        {
            printf("TRAIN WILL ARRIVE AT\n");
            printf("%d:%d\t\n",hour[i],minute[i]);
            printf("TRAIN WILL REACH DESTINATION AT\n%d:%d\n\n",rhour[i],rminute[i]);
            printf("do you want to travel by this train \n");
            printf("if yes \t press 1\n");
            printf("if no \t press 0");
            scanf("%d",&choice);
            switch(choice)
            {
                case 1:  printf("YOU HAVE SELECTED THE TRAIN SUCCESSFULLY\n\nHAPPY JOURNEY\n\n");
                        exit(1);
                        break;

                case 0:  printf("next train is--->\n");
                        break;

                default:printf("enter correct choice please");
                        exit(1);

            }
        }
    }
}


//FUNCTION DAHANU
int dahanuroad()
{
      int choice,i;

    printf("NOTE:\t ALL TRAIN TIMING SHOULD BE IN 24-HOUR CLOCK\n\n");

    printf("ALL THE TRAINS ARE LOCALS,EXPRESS OR SHUTTLES\n\n");
     //ARRIVAL TIME
    int hour[29]={1,4,5,5,6,6,7,8,9,9,11,11,12,12,12,12,13,14,15,17,17,18,19,19,21,21,22,23};
    int minute[29]={15,38,13,33,8,48,49,16,3,43,20,38,6,8,28,48,53,47,49,9,52,33,43,59,8,42,18,31};
     //DESTINATION TIME
    int rhour[29]={2,5,5,6,6,7,8,9,9,10,12,12,12,12,13,13,14,15,16,18,18,19,20,20,21,22,23,0};
    int rminute[29]={4,17,56,15,56,30,20,5,50,35,1,20,45,55,15,35,40,52,45,5,48,15,25,42,50,25,5,11};

    while(1)
    {
        for(i=0;i<30;i++)
        {
            printf("TRAIN WILL ARRIVE AT\n");
            printf("%d:%d\t\n",hour[i],minute[i]);
            printf("TRAIN WILL REACH DESTINATION AT\n%d:%d\n\n",rhour[i],rminute[i]);
            printf("do you want to travel by this train \n");
            printf("if yes \t press 1\n");
            printf("if no \t press 0");
            scanf("%d",&choice);
            switch(choice)
            {
                case 1:  printf("YOU HAVE SELECTED THE TRAIN SUCCESSFULLY\n\nHAPPY JOURNEY\n\n");
                        exit(1);
                        break;

                case 0:  printf("next train is--->\n");
                        break;

                default:printf("enter correct choice please");
                        exit(1);

            }
        }
    }
}
