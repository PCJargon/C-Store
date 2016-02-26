/************************************************************************/
/* Welcome to a Classic "Choose Your Own Adventure"-stle program.	*/
/*   This one is called "The College Student".  Enjoy!			*/
/* Author:  Kim Janik							*/
/************************************************************************/
#include <stdio.h>
#include <time.h>

//Function Prototypes (We'll learn these in a few weeks).
void go_up(void);
void left_tunnel(void);
void right_tunnel(void);
void go_down(void);
void treasure(void);
void print_line(void);

int main(void)  {
   
    char choice;

    printf("Welcome to your adventure!  You were having a fantastic day on\n");
    printf("campus when you noticed something shiny over by Building 7. \n");
    printf("There on the ground was a quarter and when you reached down to\n");
    printf("grab it, you were transported here to this cave.  The wall\n");
    printf("behind you is blank.  There are two tunnels to the left and\n");
    printf("right.  In the middle is a ladder going up.  There is also a  \n");
    printf("dark, forbidding pit that you could climb into.  Which do you \n");
    printf("choose (u, l, r, d)?");
    scanf("%c", &choice);
    print_line();

    switch (choice)  {
      case 'u':
          go_up();
	  break;
      case 'l':
          left_tunnel();
	  break;
      case 'r':
          right_tunnel();
	  break;
      case 'd':
          go_down();
	  break;
    }
    printf("\n\t\t\tThe End.\n");
}

/************************************************************************/
/* Program Functions are below here					*/
/************************************************************************/
void go_up()  {
    char choice;
    printf("You climb up the ladder and find yourself at the top of a stone\n");
    printf("cliff.  The view is amazing but you do not know where you are.\n");
    printf("You see a narrow trail ahead or you could try to climb down \n");
    printf("cliff face directly.  Would you like to walk down the trail or\n");
    printf("climb down the cliff (w/c)?\n");
    scanf(" %c", &choice);
    print_line();
    if (choice == 'w')  {
        printf("You start down the trail.  It's rocky, but navigable.  You\n");
	printf("see a sign up ahead, with a bike leaning against it.  The\n");
	printf("sign only says 'The Easy Way or the Hard Way' with a tiny \n");
	printf("cryptic arrow.  Does it mean the bike is the easy way?\n");
	printf("Do you want to try to ride the bike or just keep walking \n");
	printf("down the trail (b/t)?\n");
        scanf(" %c", &choice);
        print_line();
        if (choice == 'b')  {
	    printf("Eagles soar overhead as you sit upon the bike.  The \n");
	    printf("bike takes off into the air and soon you have joined\n");
	    printf("the birds in the sky.  Somehow, the bike know where to\n");
	    printf("go and you wind up back on campus as the proud owner \n");
	    printf("of a magic bike.\n");
	    return;
        }  else  {
            printf("You walk for what seems like miles but finally reach a \n");
	    printf("tiny village at the base of the mountain.  You learn \n");
	    printf("you are in Nepal.  You have to barter your school \n");
	    printf("supplies to get a ride to the airport and then call a\n");
	    printf("*really* good friend to get the money for a ticket \n");
	    printf("home.  That was the most expensive shiny quarter ever.\n");
	}
    }  else  {
        printf("Over the railing you go.  How hard can it be to climb \n");
        printf("*down* the mountain?  You're doing great until a strong \n");
        printf("gust of wind makes you lose your footing. You fall \n");
	while (1)  {
            printf("down and ");
	    fflush(stdout);
	    sleep( 1 );
	}
    }
}

void left_tunnel()  {
    char choice;
    int i;

    printf("You walk down the tunnel and notice the fine shimmer of the \n");
    printf("walls.  You can't tell where the light is coming from but it \n");
    printf("is pretty.  So pretty that you don't notice the cage until \n");
    printf("it comes down around you.  The only thing in the corner is a \n");
    printf("small metal lever.  Do you want to pull the lever?\n");
    scanf(" %c", &choice);
    print_line();
    for (i = 0; i < 6 ; i++)  {
	 if (choice == 'y')  {
         printf("You hit the lever.  ");
	     if (i == 3)  {
                printf("You know how a mouse must feel.  ");
                printf("Do you want to pull the lever?\n");
	     }  else if  (i == 5){
                printf("The cage start slowly rolling upward.\n");
                print_line();
	        treasure();
                return;
	     }  else {
                printf("Do you want to pull the lever?\n");
	     }
             scanf(" %c", &choice);
	 } else {
             printf("You don't pull the lever.  You sure are bored.  Do you\n");
	     printf("want to pull the lever?");
             scanf(" %c", &choice);
	     i--;
	 }
    }
}

void right_tunnel()  {
    char choice;
    int yourlife = 20;
    int monsterlife = 20;
    printf("You walk down the tunnel for several minutes.  You round a \n");
    printf("corner to the right and notice something shiny lying in the \n");
    printf("darkness.  Do you want to pick it up (y/n)?\n");
    scanf(" %c", &choice);
    print_line();
    if (choice == 'n')  {
        printf("You have had quite enough of shiny things for today. You \n");
        printf("ignore it and keep walking.  Soon, you hear the sound of\n");
        printf("water.  Do you want to walk towards it (y/n)?");
        scanf(" %c", &choice);
        print_line();
            if (choice == 'y')  {
                printf("At last, you reach the source of the noise when\n");
                printf("you enter an immense cavern with a waterfall \n");
                printf("from floor to ceiling.  A hand reaches from the \n");
		printf("water and pulls you in.  Somehow, you know you \n");
		printf("will never leave this place...\n");
		return;
            }  else  {
		printf("On the wall is a display.  It is showing you a \n");
		printf("familiar scene.  You watch yourself walking along \n");
		printf("and spotting that fateful quarter.  You want to \n");
		printf("yell, 'No!' as you bend down to pick it up.  You \n");
		printf("lightly bang your head against the screen and feel\n");
		printf("a warm buzzing sensation.  You open your eyes and\n");
		printf("are back where you started in the courtyard.  You\n");
		printf("shake your head and think, 'I have got to drink\n");
		printf("less caffeine.'\n");
		return;
	    }
    }  else  {
        printf("You scrape away the dust to reveal a large sword.  You \n");
	printf("continue walking and admiring the beautiful metalwork.  A\n");
	printf("large bull-headed monster steps out in front of you.\n");
	do  {
	    printf("Do you want to fight or run (f/r)?\n");
            scanf(" %c", &choice);
            print_line();
            if (choice == 'f')  {
	        printf("You attack!  \n");
		monsterlife -= (rand(time(NULL))%6);
		yourlife -= (rand(time(NULL))%5);
	        printf("The monster is at %d life ", monsterlife);
	        printf("and you are at %d life\n", yourlife);
            }  else  {
	        printf("The monster attacks you!  \n");
	        printf("You fight back!  \n");
		monsterlife -= (rand(time(NULL))%3);
		yourlife -= (rand(time(NULL))%7);
	        printf("The monster is at %d life ", monsterlife);
	        printf("and you are at %d life\n", yourlife);
	    }
	}  while (yourlife > 0 && monsterlife > 0);
	if (yourlife <= 0)  {
            print_line();
            printf("Dang it; you died!");
	    return;
	}  else  {
            print_line();
            printf("Never did you realize it would be so easy to vanquish\n");
	    printf("a monster.  You open the door behind the beast and \n");
	    printf("return home with the sword as proof of the your amazing\n");
	    printf("tale.\n");
	    return;
	}
    }
}

void go_down()  {
    char choice;
    printf("You lean down and start crawling into the pit.  It is pitch \n");
    printf("black and you can't see anything, but you can feel something \n");
    printf("thick squish between your fingers.  Finally, you see light up\n");
    printf("ahead.  There is a narrow crack in the ceiling and you think \n");
    printf("you can fit through.  Do you want to try (y/n)?");
    scanf(" %c", &choice);
    print_line();

    if (choice == 'y')  {
	printf("You wiggle through the crack and arrive in an open tunnel,\n");
	printf("covered in mud.\n");
        print_line();
        right_tunnel();
    }
    else  {
	printf("Realization dawns as the tunnel starts to get steeper \n");
	printf("and steeper; you are in real trouble here.  You start to \n");
	printf("slide until you finally land in black pit of water.  You\n");
	printf("cannot swim.\n");
	return;
    }
}

void treasure()  {
    char choice;
    print_line();
    printf("Two doors appear out of nowhere.  A small man with a handlebar\n");
    printf("mustache stands between them.  He does not say a word but\n");
    printf("simply points at the left door.  Do you want to go through the\n");
    printf("left door or the right (l/r)?\n");
    scanf(" %c", &choice);
    print_line();
    if (choice == 'l')  {
        printf("Under the impression he is telling the truth, you open the\n");
	printf("left door.  Behind it is a large box of treasure, so heavy\n");
	printf("you can barely lift it.  The man comes into the room and \n");
	printf("opens another door for you.  You find yourself safely back\n");
	printf("at home and very, very rich.");
    }
    else  {
        printf("Even though he seems trustworthy enough, you choose the \n");
        printf("right door.  Inside, there is an open platform with a \n");
        printf("giant hot air balloon inside.  You crawl inside and push \n");
        printf("large button marked 'Home'\n");
    }
    return;
}

void print_line()  {
    printf("\n\t\t\t---\n\n");
}
