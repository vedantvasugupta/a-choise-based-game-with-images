
#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_timer.h>
#include <SDL2/SDL_image.h>
int health = 100;
int mana = 100;
char name[50];
void healthfun(int damage);
void manafun(int manaloss);
void print_health_mana();
void dead();
int compare(char input[], char word[]);
int length(char test_word[]);
void fight_posideon();
void fight_ares();
void fight_hephaestus();
void fight_artemis();
void fight_minatour();
void fight_hydra();
void picture(char path[], int WINDOW_WIDTH, int WINDOW_HEIGHT);
int main()
{
    // printf("Vedant is the best you suck you loser\n\n\n\n");
    // SDL_Delay(500);

    printf("\e[1;1H\e[2J");
    //Taking name
    printf("Hello traveller please tell me your name: ");
    scanf(" %[^\n]s", name);
    char input[50];
    SDL_Delay(1000);
    // time(sleep(1)); //This will wait for 2 seconds before going to the next command
    printf("\e[1;1H\e[2J");
    //Story begins here

    printf("Hey you! You're finally awake! \n");
    SDL_Delay(1000);
    // time(sleep(1));
    printf("You open your eyes and everything seems like a figment of your imagination, your head hurts as if you're wearing a helmet of needles.  ");
    SDL_Delay(1000);
    // time(sleep(1));
    printf("\n%s You were awake for quite a while last night", name);
    time(sleep(1));
    //Sleep condition
    printf("\nWould you like to sleep for another five minutes? ");
    SDL_Delay(1000);
    // time(sleep(1));
    printf("\nYes or no: \n");
    scanf(" %[^\n]s", input);
    if (compare(input, "yes") == 0 || compare(input, "Yes") == 0 || compare(input, "YES") == 0)
    {
        printf("you wake up 3 hours later, and now that you can think with a clear head, you realize you missed the deadline.  ");
        dead();
    }
    //If sleep no
    printf("Your eyes might be clouded but your judgement is not. You remember you have the project deadline today, and get ready for the presentation.");
    //Bus or scooter
    printf("\nHow would you like to reach the college?");
    printf("\nBus or Scooter: ");
    scanf(" %[^\n]s", input);
    //Bus
    if (compare(input, "bus") == 0 || compare(input, "Bus") == 0 || compare(input, "BUS") == 0)
    {
        printf("\nYou get ready and go downstairs to see the breakfast table is laden with your favorite dishes");
        printf("\nToast, waffles, pancakes, omelet, bacon, whipped cream, maple sauce, strawberry milkshake, sandwiches, and cereal. ");
        printf("\nWould you like to have a heavy breakfast, so you can think clearly?");
        printf("\nYes or no: ");
        scanf(" %[^\n]s", input);
        if (compare(input, "yes") == 0 || compare(input, "Yes") == 0 || compare(input, "YES") == 0)
        {
            printf("Once you dive in, you keep drowning in the delicacies kept before you, which wastes your time and you miss the bus and the deadline.");
            printf("So much for gluttony");
            dead();
        }
        printf("Your eyes might be clouded but your judgement is not. You remember you have the project deadline today, and get ready for the presentation.");
        printf("\nYou leave for the class hurriedly, your vehicles engine's roars give you peace as you think you might just make it in time, right when a scooter pops up in your way.");
        printf("\nThe bus swerves to the right, and since you were the last one in, you are the first to fall out of the door, right into a deep ditch.");
        printf("\n\t\t\t\tYou Died");
    }
    //Scooter
    else if (compare(input, "scooter") == 0 || compare(input, "Scooter") == 0 || compare(input, "SCOOTER") == 0)
    {
        printf("\nYou get ready and go downstairs to see the breakfast table is laden with your favorite dishes");
        printf("\nToast, waffles, pancakes, omelet, bacon, whipped cream, maple sauce, strawberry milkshake, sandwiches, and cereal. ");
        printf("\nWould you like to have a heavy breakfast, so you can think clearly?");
        printf("\nYes or no: ");
        scanf(" %[^\n]s", input);
        if (compare(input, "yes") == 0 || compare(input, "Yes") == 0 || compare(input, "YES") == 0)
        {
            printf("\nYou satisfy your hunger, and get ready to nail the presentation");
        }
        else if (compare(input, "No") == 0 || compare(input, "no") == 0 || compare(input, "NO") == 0)
        {
            printf("\nYou ignore the voices from your stomach and listen to the ones from your gut, so, you leave with a strawberry lying at the corner of the table.");
        }
        printf("\nYou leave for the class hurriedly, your vehicles engine's roars give you peace as you think you might just make it in time, right when a bus pops up in your way.");
        printf("\nYou swerve to your right and lose control, and fall into a ditch nearby.");
        printf("\n\t\t\t\tYou Died");
    }
    SDL_Delay(5000);
    // time(sleep(5));
    printf("\nHey you! You're finally awake. ");
    //sun be idhar ek do line daal diyo about seeing the underworld
    SDL_Delay(3000);
    picture("resources/underworld.jpg", 190, 190);
    printf("\nA tall, cloaked figure leans over you with an empty face and green glowing eyes.");
    printf("\nGreeting's mortal. I am Charon, son of Erebus and Nyx.");
    printf("\nYou: with names like that, were your parents taking revenge on theirs.");
    printf("\nCharon: HOW DO YOU DISRESPECT THE GODDESS OF NIGHT! DO YOU THINK YOUR HUMOR IS AS DARK AS HER POWERS!? ");
    printf("You: Ehm... no?");
    SDL_Delay(1000);
    //time here
    printf("wait what!? Who are you? Where am I? \n");
    printf("Charon: you have perished. \n");
    printf("You: no u. \n");
    printf("Charon: these spells may work in your world foolish mortal, but here in the underworld, UNDER THE BOUNDARIES OF HADES! You have no power.");
    printf("Out of the 4 W's I shall answer one. So, choose wisely... ");
    printf("You can ask what, when, why, where: ");
    scanf(" %[^\n]s", input);
    if (compare(input, "what") == 0 || compare(input, "What") == 0 || compare(input, "WHAT") == 0 || compare(input, "what?") == 0 || compare(input, "What?") == 0 || compare(input, "WHAT?") == 0)
    {
        printf("You died in the accident, and are now being transported to underworld by the ferryman to the lord himself");
    }
    if (compare(input, "why") == 0 || compare(input, "Why") == 0 || compare(input, "WHY") == 0 || compare(input, "why?") == 0 || compare(input, "Why?") == 0 || compare(input, "WHY?") == 0)
    {
        printf("You died in the accident, and now it is time to judge your life. ");
    }
    if (compare(input, "when") == 0 || compare(input, "When") == 0 || compare(input, "WHEN") == 0 || compare(input, "when?") == 0 || compare(input, "When?") == 0 || compare(input, "WHEN?") == 0)
    {
        printf("It will take about 2 more mins to reach hades.");
    }
    if (compare(input, "where") == 0 || compare(input, "Where") == 0 || compare(input, "WHERE") == 0 || compare(input, "where?") == 0 || compare(input, "What?") == 0 || compare(input, "WHAT?") == 0)
    {
        printf("This is the underworld! And you are dead.");
    }
    printf("Charon: But enough small talk, we have arrived.\n");
    SDL_Delay(5000);
    //5 seconds here
    printf("A loud voice booms across the entire area! \n");
    printf("Hades:%s !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! I suppose Charon has briefed you about your fate in the underworld. BOW DOWN TO “THE UNSEEN ONE” HAAADEEEESSSSS!");
    printf("Do you bow down: \n");
    printf("\nYes or no: \n");
    scanf(" %[^\n]s", input);
    if (compare(input, "no") == 0 || compare(input, "No") == 0 || compare(input, "NO") == 0)
    {
        printf("You: I bow to no one!\n");
        printf("Hades: YOU FOOL! I CONDEMN THEE TO THE PIT OF TARTARUS WHERE THE MOST GRUESOME OF MONSTERS SHALL FEAST ON YOUR FLESH!\n");
        dead();
    }
    if (compare(input, "yes") == 0 || compare(input, "Yes") == 0 || compare(input, "YES") == 0)
    {
        printf("Hades: I have seen your files %s. You died for a mistake that was similar to what condemned me to these pits.\n", name);
    }
    printf("\nDo you asked what happened: ");
    printf("Yes or no: ");
    scanf(" %[^\n]s", input);
    if (compare(input, "yes") == 0 || compare(input, "Yes") == 0 || compare(input, "YES") == 0)
    {
        printf("Hades:  All shall be revealed when the TIME is right.\n");
    }
    //ask kashyap if else should be used or else if no
    printf("Nevertheless I have a job for you which might just be your redemption.\n");
    printf("Are you interested in the mission: ");
    printf("Yes or no: ");
    scanf(" %[^\n]s", input);
    if (compare(input, "no") == 0 || compare(input, "No") == 0 || compare(input, "NO") == 0)
    {
        printf("You are a weak and feeble mortal, with no guts to stand up for themselves. I condemn thee to the fields of asphodel! You mediocre waste of death. YOU SUFFER FOR ETERNITY. \n");
        dead();
    }
    //same here
    printf("Hades: I assume you are familiar with the name Zeus?\n");
    if (compare(input, "no") == 0 || compare(input, "No") == 0 || compare(input, "NO") == 0)
    {
        printf("Well anyway, he's my younger brother, and he lives in what you call heaven. When the real heaven is IN THE UNDERWORLD.  \n");
    }
    //same here
    printf("I am banished from entering Mount Olympus where he currently lives. \n");
    printf("It is in high up in the skies far invisible to the human eye, above the Bermuda triangle.\n");
    printf("He has a scroll hidden up there that I recently came to know about which might be MY shot at redemption. ");
    printf("Do you inquire further? ");
    printf("Yes or no: ");
    if (compare(input, "yes") == 0 || compare(input, "Yes") == 0 || compare(input, "YES") == 0)
    {
        printf("You: redemption to whom? \n");
        printf("Hades: that is a story for later. For now,");
    }
    //same here
    printf("I need you to recover the scroll. \n");
    printf("Hades: You can ask 1 question: "); //changed the script a bit here
    printf("You can ask what, when, where, why: ");
    scanf(" %[^\n]s", input);
    if (compare(input, "what") == 0 || compare(input, "What") == 0 || compare(input, "WHAT") == 0 || compare(input, "what?") == 0 || compare(input, "What?") == 0 || compare(input, "WHAT?") == 0)
    {
        printf("It is a scroll, kept in Zeus' manor in Mount Olympus. ");
    }
    else if (compare(input, "why") == 0 || compare(input, "Why") == 0 || compare(input, "WHY") == 0 || compare(input, "why?") == 0 || compare(input, "Why?") == 0 || compare(input, "WHY?") == 0)
    {
        printf("Do you not comprehend me when I say that is a story for later.");
    }
    else if (compare(input, "when") == 0 || compare(input, "When") == 0 || compare(input, "WHEN") == 0 || compare(input, "when?") == 0 || compare(input, "When?") == 0 || compare(input, "WHEN?") == 0)
    {
        printf("I need the scroll in Zeus’ manor RIGHT NOW! ");
    }
    else if (compare(input, "where") == 0 || compare(input, "Where") == 0 || compare(input, "WHERE") == 0 || compare(input, "where?") == 0 || compare(input, "What?") == 0 || compare(input, "WHAT?") == 0)
    {
        printf("Zeus’ manor in Mount Olympus.");
    }
    printf("\nYour mission, should you choose to accept it, is to recover that scroll as soon as possible.");
    printf("\nTo help you succeed, I offer you this sword made from stygian iron.");
    printf("and when all seems lost, and you need some bonus damage, here is some mana(magic) powder\n");
    mana = 50;
    print_health_mana();
    printf("now charon shall guide you out of the underworld, keep a look out when you cross the river styx again.\n");
    time(sleep(5));
    printf("before you can register anything else, you fin yourself halfway through the river, and see bright light at the other side.\n");
    printf("you remember hades telling you to be on the lookout whilst returning.\n");
    printf("Do you dip your hand in the water: \n");
    printf("Yes or no: \n");
    scanf(" %[^\n]s", input);
    if (compare(input, "yes") == 0 || compare(input, "Yes") == 0 || compare(input, "YES") == 0)
    {
        printf("you are hit with a sudden surge of energy as if liquid gold has replaced the blood flowing in your veins.\n\n");
        printf("your mana is boosted to 100");
        mana = 100;
        print_health_mana();
    }
    else if (compare(input, "no") == 0 || compare(input, "No") == 0 || compare(input, "NO") == 0)
    {
        printf("You ask charon how did we get here \n");
        printf("charon: how we got here is not important, where you are going however, holds the most value.");
    }
    printf("\nCharon: the time has come %s, your next choice shall decide your fate\n\n", &name);
    printf("\e[1;1H\e[2J");
    printf("TO ENTER MOUNT OLYMPUS, YOU SHALL POSSESS SOMETHING DEAR TO THE GODS.\n");
    printf("TO THE NORTH, YOU SHALL FIND ARES. CAPTURE HIS LEGO TANK TO PROCEED.\n");
    printf("TO THE EAST, YOU SHALL FIND ARTEMIS. CAPTURE HER BOWSTRING TO PROCEED.\n");
    printf("TO THE WEST, YOU SHALL FIND HEPHAESTUS. CAPTURE HIS GREASE TO PROCEED.\n");
    printf("TO THE SOUTH, YOU SHALL FIND POSEIDON, CAPTURE HIS RUBBER DUCKY TO PROCEED.\n");
    printf("where do you go?(north/south/east/west): ");
    char direction[50];
    scanf(" %[^\n]s", direction);
    printf("\e[1;1H\e[2J");
    printf("you choose to approach the %s direction\n", direction);
    printf("I see... a wise choice perhaps, given you know your capabilities.\n\nI wish you the best of luck. close your eyes\n");
    printf("Do you close your eyes? ");
    scanf(" %[^\n]s", input);
    if (compare(input, "yes") == 0 || compare(input, "Yes") == 0 || compare(input, "YES") == 0)
    {
        printf("you agree to what charon has to say, and close your eyes,");
        printf("\nwhen you open them you are in an unknown barren land, with an arrow dug in the earth... pointing towards %s", direction);
    }
    else if (compare(input, "no") == 0 || compare(input, "No") == 0 || compare(input, "NO") == 0)
    {
        printf("you are hit with a blinding white light, that clouds your vision.");
        printf("\nwhen your vision finally clears, you are in an unknown barren land, with an arrow dug in the earth... pointing towards %s", direction);
    }
    printf("\e[1;1H\e[2J");
    printf("you follow where the arrow points, and continue until your feet bleed\n");
    printf("the light of the day fades away, and an eerie fog sets in.\n");
    printf("you draw your sword, just in case...\n");
    SDL_Delay(1000);
    printf("seems like the smell of underworld stygian iron of your sword has drawn some enemies\n");
    if (compare(direction, "north") == 0 || compare(direction, "North") == 0 || compare(direction, "NORTH") == 0)
    {
        printf("a large figurine with the body of a giant, and the head of a bull approaches you.\n");
        printf("foolish mortal, if you wish to proceed in your path, you go through me. I AM MINOTAUR!!!\n\n");
        // picture("resources/minatour.jpg", 500, 500);
        printf("do you fight or do you flee?");
        scanf(" %[^\n]s", input);
        if (compare(input, "flee") == 0 || compare(input, "FLee") == 0 || compare(input, "FLEE") == 0)
        {
            printf("you try and flee from the scene, but the minotaur is fast and catches up on you.\n there is no other choice than to fight.\n");
        }
        else
        {
            printf("You tried to do something that wasn't an option and now not fighting is not an option\n")
        }
        fight_minatour();
    }
    else if (compare(direction, "south") == 0 || compare(direction, "South") == 0 || compare(direction, "SOUTH") == 0)
    {
        printf("as the thick fog fades away, you see a distant snake like creature, huge in size\n");
        printf("you see a head rise above the ground.\n and then another,\nAND ANOTHER,\nAND ANOTHER,\nUNTIL NINE SUCH HEADS POP UP");
        printf("\nyour history lesson comes of use, as you realise, it is a hydra!!");
        // picture("resources/hydra.jpg", 500, 500);
        printf("do you fight or do you flee?");
        scanf(" %[^\n]s", input);
        if (compare(input, "flee") == 0 || compare(input, "FLee") == 0 || compare(input, "FLEE") == 0)
        {
            printf("you try and flee from the scene, but the minotaur is fast and catches up on you.\n there is no other choice than to fight.\n");
        }
        else
        {
            printf("You tried to do something that wasn't an option and now not fighting is not an option\n")
        }
        fight_hydra();
    }
    else if (compare(direction, "east") == 0 || compare(direction, "East") == 0 || compare(direction, "EAST") == 0)
    {
        printf("as the thick fog fades away, you see a distant snake like creature, huge in size\n");
        printf("you see a head rise above the ground.\n and then another,\nAND ANOTHER,\nAND ANOTHER,\nUNTIL NINE SUCH HEADS POP UP");
        printf("\nyour history lesson comes of use, as you realise, it is a hydra!!");
        // picture("resources/hydra.jpg", 500, 500);
        printf("do you fight or do you flee?");
        scanf(" %[^\n]s", input);
        if (compare(input, "flee") == 0 || compare(input, "FLee") == 0 || compare(input, "FLEE") == 0)
        {
            printf("A LOUD HISSING SOUND BOOMS ACROSS THE SCENE, as you realise that you have no choice but to fight the hydra head on");
        }
        else
        {
            printf("You tried to do something that wasn't an option and now not fighting is not an option\n")
        }
        fight_hydra();
    }
    else if (compare(direction, "west") == 0 || compare(direction, "West") == 0 || compare(direction, "WEST") == 0)
    {
        printf("a large figurine with the body of a giant, and the head of a bull approaches you.\n");
        printf("foolish mortal, if you wish to proceed in your path, you go through me. I AM MINOTAUR!!!\n\n");
        // picture("resources/minatour.jpg", 500, 500);
        printf("do you fight or do you flee?");
        scanf(" %[^\n]s", input);
        if (compare(input, "flee") == 0 || compare(input, "FLee") == 0 || compare(input, "FLEE") == 0)
        {
            printf("you try and flee from the scene, but the minotaur is fast and catches up on you.\n there is no other choice than to fight.\n");
        }
        else
        {
            printf("You tried to do something that wasn't an option and now not fighting is not an option\n")
        }
        fight_minatour();
    }
    printf("GOOD JOB %s, but the job is not done yet.\n", name);
    printf("you continue your quest in the %s direction, and before you know it, the path gets more hostile.\n", direction);
    printf("but then a divine aura, with a hint of hostility sets in, as a bright light pops up in front of you\n");
    printf("A heavenly figure steps out of the sudden flash of light, it is surely... A GOD\n");
}
if (compare(direction, "north") == 0 || compare(direction, "North") == 0 || compare(direction, "NORTH") == 0)
{
    printf("\e[1;1H\e[2J");
    // picture("resources/ares.jpg", 500, 500);
    //In resources
    // chmod =rxw ares.jpg
    printf("I AM ARES! THE LITERAL GOD OF WAR!\n");
    printf("AND YOU FOOLISH MORTAL, DO YOU NOT REALISE! THAT WHAT YOU ARE DOING IS A SUICIDE MISSION!\n CHOOSING TO HELP HADES, WILL BE YOUR DEATH!\n");
    printf("%s: the joke is on you because I am already dead.\n");
    printf("seems like the win from my minotaur has clouded your judgement. let me send you back to the underworld, so you could literally be...\n");
    SDL_Delay(2000);
}

else if (compare(direction, "south") == 0 || compare(direction, "South") == 0 || compare(direction, "SOUTH") == 0)
{
}
else if (compare(direction, "east") == 0 || compare(direction, "East") == 0 || compare(direction, "EAST") == 0)
{
}
else if (compare(direction, "west") == 0 || compare(direction, "West") == 0 || compare(direction, "WEST") == 0)
{
}
void dead()
{
    printf("\n\t\t\t\tYou Died");
    exit(0);
}
int compare(char input[], char word[])
{
    int l1 = length(input);
    int l2 = length(word);
    int max = l2;
    if (l1 > l2)
    {
        max = l1;
    }
    for (int i = 0; i < max; i++)
    {
        if (input[i] > word[i])
        {
            // printf("Enter")
            return 1;
        }
        else if (input[i] < word[i])
            return 1;
    }
    return 0;
}
int length(char test_word[])
{
    int count = 0;
    while (test_word[count] != '\0')
    {
        count++;
    }
    return count;
}
void print_health_mana()
{
    printf("|");
    for (int j = 0; j < health / 2; j++)
    {
        printf("*");
    }
    for (int j = 0; j < 50 - (health / 2); j++)
        printf(" ");
    printf("|");
    printf(" Your Health: %d\n", health);
    printf("|");
    for (int j = 0; j <= mana / 2; j++)
        printf("*");
    for (int j = 0; j < 50 - (mana / 2); j++)
        printf(" ");
    printf("|");
    printf(" Your Mana: %d\n", mana);
}
void healthfun(int damage)
{
    health = health - damage;
    if (health == 69)
    {
        printf("Your health is boosted NICE");
        health = 100;
    }
}
void manafun(int manaloss)
{
    mana = mana - manaloss;
    if (mana == 69)
    {
        printf("Your mana is boosted NICE");
        mana = 100;
    }
}
void fight_posideon()
{
    int posideon_health = 100;
    int posideon_mana = 0;
    printf("\e[1;1H\e[2J");
    char input[50];
    printf("Now you will fight posideon: ");
    print_health_mana;
    srand(time(0));
    int counter = -1;
    while (health > 0 && posideon_health > 0)
    {
        counter++;
        if (counter % 2 == 0)
        {
            printf("\e[1;1H\e[2J");
        }
        printf("\nWhat do you use mana or sword: ");
        scanf(" %[^\n]s", input);
        if (compare(input, "mana") == 0)
        {
            int temp_attack = rand() % 40;
            if (mana >= 10)
            {

                posideon_health = posideon_health - temp_attack;
                mana = mana - 10;
            }
            else
            {
                printf("\nYou don't have enough mana");
                printf("\nSo use a normal attack");
                goto not_enough_mana;
            }
            printf("You deal a damage of %d\n", temp_attack);
            print_health_mana();
            printf("posideon's health: %d\n", posideon_health);
        }
        else if (compare(input, "sword") == 0)
        {
            int temp_attack = rand() % 20;
        not_enough_mana:
            posideon_health = posideon_health - temp_attack;
            printf("You deal a damage of %d\n", temp_attack);
            printf("posideon's health: %d\n", posideon_health);
            print_health_mana();
        }
        else
        {
            printf("You missed noob");
            print_health_mana();
        }
        //Now posideon will attack
        if (posideon_health > 0)
        {
            printf("\nNow posideon attacks:\n");
            int decide = rand() % 2;
            time(sleep(2));
            if (decide == 1)
            {
            not_enough_mana_for_posideon:
                printf("Posideon uses his sword\n");
                int posideon_damage = rand() % 15;
                health = health - posideon_damage;
                printf("posideon deals a damage of %d\n", posideon_damage);
                print_health_mana();
            }
            else if (decide == 0)
            {
                if (posideon_mana < 10)
                {
                    goto not_enough_mana_for_posideon;
                }
                int posideon_damage = rand() % 30;
                health = health - posideon_damage;
                posideon_mana = posideon_damage - 10;
                printf("Posideon uses mana\n");
                printf("Posideon deals a damage of %d\n", posideon_damage);
                print_health_mana();
            }
        }
        time(sleep(4));
    }
}
void fight_ares()
{
    int ares_health = 100;
    int ares_mana = 100;
    printf("\e[1;1H\e[2J");
    char input[50];
    printf("Now you will fight ares: ");
    print_health_mana;
    srand(time(0));
    int counter = -1;
    while (health > 0 && ares_health > 0)
    {
        counter++;
        if (counter % 2 == 0)
        {
            printf("\e[1;1H\e[2J");
        }
        printf("\nWhat do you use mana or sword: ");
        scanf(" %[^\n]s", input);
        if (compare(input, "mana") == 0)
        {
            int temp_attack = rand() % 40;
            if (mana >= 10)
            {

                ares_health = ares_health - temp_attack;
                mana = mana - 10;
            }
            else
            {
                printf("\nYou don't have enough mana");
                printf("\nSo use a normal attack");
                goto not_enough_mana;
            }
            printf("You deal a damage of %d\n", temp_attack);
            print_health_mana();
            printf("ares's health: %d\n", ares_health);
        }
        else if (compare(input, "sword") == 0)
        {
            int temp_attack = rand() % 20;
        not_enough_mana:
            ares_health = ares_health - temp_attack;
            printf("You deal a damage of %d\n", temp_attack);
            printf("ares's health: %d\n", ares_health);
            print_health_mana();
        }
        else
        {
            printf("You missed noob");
            print_health_mana();
        }
        //Now ares will attack
        if (ares_health > 0)
        {
            printf("\nNow ares attacks:\n");
            int decide = rand() % 2;
            time(sleep(2));
            if (decide == 1)
            {
            not_enough_mana_for_ares:
                printf("ares uses his sword\n");
                int ares_damage = rand() % 15;
                health = health - ares_damage;
                printf("ares deals a damage of %d\n", ares_damage);
                print_health_mana();
            }
            else if (decide == 0)
            {
                if (ares_mana < 10)
                {
                    goto not_enough_mana_for_ares;
                }
                int ares_damage = rand() % 30;
                health = health - ares_damage;
                ares_mana = ares_damage - 10;
                printf("ares uses mana\n");
                printf("ares deals a damage of %d\n", ares_damage);
                print_health_mana();
            }
        }
        time(sleep(4));
    }
}
void fight_hephaestus()
{
    int hephaestus_health = 100;
    int hephaestus_mana = 100;
    printf("\e[1;1H\e[2J");
    char input[50];
    printf("Now you will fight hephaestus: ");
    print_health_mana;
    srand(time(0));
    int counter = -1;
    while (health > 0 && hephaestus_health > 0)
    {
        counter++;
        if (counter % 2 == 0)
        {
            printf("\e[1;1H\e[2J");
        }
        printf("\nWhat do you use mana or sword: ");
        scanf(" %[^\n]s", input);
        if (compare(input, "mana") == 0)
        {
            int temp_attack = rand() % 40;
            if (mana >= 10)
            {

                hephaestus_health = hephaestus_health - temp_attack;
                mana = mana - 10;
            }
            else
            {
                printf("\nYou don't have enough mana");
                printf("\nSo use a normal attack");
                goto not_enough_mana;
            }
            printf("You deal a damage of %d\n", temp_attack);
            print_health_mana();
            printf("hephaestus's health: %d\n", hephaestus_health);
        }
        else if (compare(input, "sword") == 0)
        {
            int temp_attack = rand() % 20;
        not_enough_mana:
            hephaestus_health = hephaestus_health - temp_attack;
            printf("You deal a damage of %d\n", temp_attack);
            printf("hephaestus's health: %d\n", hephaestus_health);
            print_health_mana();
        }
        else
        {
            printf("You missed noob");
            print_health_mana();
        }
        //Now hephaestus will attack
        if (hephaestus_health > 0)
        {
            printf("\nNow hephaestus attacks:\n");
            int decide = rand() % 2;
            time(sleep(2));
            if (decide == 1)
            {
            not_enough_mana_for_hepaestus:
                printf("hephaestus uses his sword\n");
                int hephaestus_damage = rand() % 15;
                health = health - hephaestus_damage;
                printf("hephaestus deals a damage of %d\n", hephaestus_damage);
                print_health_mana();
            }
            else if (decide == 0)
            {
                if (hephaestus_mana < 10)
                {
                    goto not_enough_mana_for_hepaestus;
                }
                int hephaestus_damage = rand() % 30;
                health = health - hephaestus_damage;
                hephaestus_mana = hephaestus_damage - 10;
                printf("hephaestus uses mana\n");
                printf("hephaestus deals a damage of %d\n", hephaestus_damage);
                print_health_mana();
            }
        }
        time(sleep(4));
    }
}
void fight_artemis()
{
    int artemis_health = 100;
    int artemis_mana = 100;
    printf("\e[1;1H\e[2J");
    char input[50];
    printf("Now you will fight artemis: ");
    print_health_mana;
    srand(time(0));
    int counter = -1;
    while (health > 0 && artemis_health > 0)
    {
        counter++;
        if (counter % 2 == 0)
        {
            printf("\e[1;1H\e[2J");
        }
        printf("\nWhat do you use mana or sword: ");
        scanf(" %[^\n]s", input);
        if (compare(input, "mana") == 0)
        {
            int temp_attack = rand() % 40;
            if (mana >= 10)
            {

                artemis_health = artemis_health - temp_attack;
                mana = mana - 10;
            }
            else
            {
                printf("\nYou don't have enough mana");
                printf("\nSo use a normal attack");
                goto not_enough_mana;
            }
            printf("You deal a damage of %d\n", temp_attack);
            print_health_mana();
            printf("artemis's health: %d\n", artemis_health);
        }
        else if (compare(input, "sword") == 0)
        {
            int temp_attack = rand() % 20;
        not_enough_mana:
            artemis_health = artemis_health - temp_attack;
            printf("You deal a damage of %d\n", temp_attack);
            printf("artemis's health: %d\n", artemis_health);
            print_health_mana();
        }
        else
        {
            printf("You missed noob");
            print_health_mana();
        }
        //Now artemis will attack
        if (artemis_health > 0)
        {
            printf("\nNow artemis attacks:\n");
            int decide = rand() % 2;
            time(sleep(2));
            if (decide == 1)
            {
            not_enough_mana_for_artemis:
                printf("artemis uses his sword\n");
                int artemis_damage = rand() % 15;
                health = health - artemis_damage;
                printf("artemis deals a damage of %d\n", artemis_damage);
                print_health_mana();
            }
            else if (decide == 0)
            {
                if (artemis_mana < 10)
                {
                    goto not_enough_mana_for_artemis;
                }
                int artemis_damage = rand() % 30;
                health = health - artemis_damage;
                artemis_mana = artemis_damage - 10;
                printf("artemis uses mana\n");
                printf("artemis deals a damage of %d\n", artemis_damage);
                print_health_mana();
            }
        }
        time(sleep(4));
    }
}
void fight_minotaur()
{
    int minotaur_health = 100;
    printf("\e[1;1H\e[2J");
    char input[50];
    printf("Now you will fight minotaur: ");
    print_health_mana;
    srand(time(0));
    int counter = -1;
    while (health > 0 && minotaur_health > 0)
    {
        counter++;
        if (counter % 2 == 0)
        {
            printf("\e[1;1H\e[2J");
        }
        printf("\nWhat do you use mana or sword: ");
        scanf(" %[^\n]s", input);
        if (compare(input, "mana") == 0)
        {
            int temp_attack = rand() % 40;
            if (mana >= 10)
            {

                minotaur_health = minotaur_health - temp_attack;
                mana = mana - 10;
            }
            else
            {
                printf("\nYou don't have enough mana");
                printf("\nSo use a normal attack");
                goto not_enough_mana;
            }
            printf("You deal a damage of %d\n", temp_attack);
            print_health_mana();
            printf("minotaur's health: %d\n", minotaur_health);
        }
        else if (compare(input, "sword") == 0)
        {
            int temp_attack = rand() % 20;
        not_enough_mana:
            minotaur_health = minotaur_health - temp_attack;
            printf("You deal a damage of %d\n", temp_attack);
            printf("minotaur's health: %d\n", minotaur_health);
            print_health_mana();
        }
        else
        {
            printf("You missed noob");
            print_health_mana();
        }
        //Now minotaur will attack
        if (minotaur_health > 0)
        {
            printf("\nNow minotaur attacks:\n");
            time(sleep(2));
            printf("minotaur uses his sword\n");
            int minotaur_damage = rand() % 10;
            health = health - minotaur_damage;
            printf("minotaur deals a damage of %d\n", minotaur_damage);
            print_health_mana();
        }
        time(sleep(4));
    }
}
void fight_hydra()
{
    int hydra_health = 100;
    printf("\e[1;1H\e[2J");
    char input[50];
    printf("Now you will fight hydra: ");
    print_health_mana;
    srand(time(0));
    int counter = -1;
    while (health > 0 && hydra_health > 0)
    {
        counter++;
        if (counter % 2 == 0)
        {
            printf("\e[1;1H\e[2J");
        }
        printf("\nWhat do you use mana or sword: ");
        scanf(" %[^\n]s", input);
        if (compare(input, "mana") == 0)
        {
            int temp_attack = rand() % 40;
            if (mana >= 10)
            {

                hydra_health = hydra_health - temp_attack;
                mana = mana - 10;
            }
            else
            {
                printf("\nYou don't have enough mana");
                printf("\nSo use a normal attack");
                goto not_enough_mana;
            }
            printf("You deal a damage of %d\n", temp_attack);
            print_health_mana();
            printf("hydra's health: %d\n", hydra_health);
        }
        else if (compare(input, "sword") == 0)
        {
            int temp_attack = rand() % 20;
        not_enough_mana:
            hydra_health = hydra_health - temp_attack;
            printf("You deal a damage of %d\n", temp_attack);
            printf("hydra's health: %d\n", hydra_health);
            print_health_mana();
        }
        else
        {
            printf("You missed noob");
            print_health_mana();
        }
        //Now hydra will attack
        if (hydra_health > 0)
        {
            printf("\nNow hydra attacks:\n");
            time(sleep(2));
            printf("hydra uses his sword\n");
            int hydra_damage = rand() % 10;
            health = health - hydra_damage;
            printf("hydra deals a damage of %d\n", hydra_damage);
            print_health_mana();
        }
        time(sleep(4));
    }
}

void picture(char path[], int WINDOW_WIDTH, int WINDOW_HEIGHT)
{
    printf("\e[1;1H\e[2J");
    int imgFlags = IMG_INIT_JPG; // or IMG_INIT_PNG;
    // not sure about the imgFlags parameter, read the docs.
    if (!(IMG_Init(imgFlags) & imgFlags))
    {
        printf("SDL_image could not initialize! SDL_image Error: %s\n", IMG_GetError());
    }
    int imgFlags2 = IMG_INIT_PNG; // or IMG_INIT_PNG;
    // not sure about the imgFlags parameter, read the docs.
    if (!(IMG_Init(imgFlags2) & imgFlags2))
    {
        printf("SDL_image could not initialize! SDL_image Error: %s\n", IMG_GetError());
    }
    // attempt to initialize graphics and timer system
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_TIMER) != 0)
    {
        printf("error initializing SDL: %s\n", SDL_GetError());
        exit(0);
    }
    printf("\e[1;1H\e[2J");
    SDL_Window *win = SDL_CreateWindow("Please close to continue...",
                                       SDL_WINDOWPOS_CENTERED,
                                       SDL_WINDOWPOS_CENTERED,
                                       WINDOW_WIDTH, WINDOW_HEIGHT, 0);
    if (!win)
    {
        printf("error creating window: %s\n", SDL_GetError());
        SDL_Quit();
        exit(0);
    }
    printf("\e[1;1H\e[2J");
    // create a renderer, which sets up the graphics hardware
    Uint32 render_flags = SDL_RENDERER_ACCELERATED;
    SDL_Renderer *rend = SDL_CreateRenderer(win, -1, render_flags);
    if (!rend)
    {
        printf("error creating renderer: %s\n", SDL_GetError());
        SDL_DestroyWindow(win);
        SDL_Quit();
        exit(0);
    }
    printf("\e[1;1H\e[2J");
    // load the image into memory using SDL_image library function
    SDL_Surface *surface = IMG_Load(path);
    if (!surface)
    {
        printf("error creating surface: %s\n", SDL_GetError());
        SDL_DestroyRenderer(rend);
        SDL_DestroyWindow(win);
        SDL_Quit();
        exit(0);
    }

    // load the image data into the graphics hardware's memory
    SDL_Texture *tex = SDL_CreateTextureFromSurface(rend, surface);
    SDL_FreeSurface(surface);
    if (!tex)
    {
        printf("error creating texture: %s\n", SDL_GetError());
        SDL_DestroyRenderer(rend);
        SDL_DestroyWindow(win);
        SDL_Quit();
        exit(0);
    }

    // struct to hold the position and size of the sprite
    SDL_Rect dest;

    // get and scale the dimensions of texture
    SDL_QueryTexture(tex, NULL, NULL, &dest.w, &dest.h);
    dest.w /= 2;
    dest.h /= 2;

    // set to 1 when window close button is pressed
    int close_requested = 0;

    // animation loop
    while (close_requested != 1)
    {
        // process events
        SDL_Event event;
        while (SDL_PollEvent(&event))
        {
            if (event.type == SDL_QUIT)
            {
                close_requested = 1;
                printf("Game close_requested");
            }
        }

        // clear the window
        SDL_RenderClear(rend);

        // draw the image to the window
        SDL_RenderCopy(rend, tex, NULL, &dest);
        SDL_RenderPresent(rend);

        // wait 1/60th of a second
        SDL_Delay(1000 / 60);
    }
    printf("File close_requested");
    // clean up resources before exiting
    SDL_DestroyTexture(tex);
    SDL_DestroyRenderer(rend);
    SDL_DestroyWindow(win);
    SDL_Quit();
}