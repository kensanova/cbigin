#include <stdio.h>

/*
* Chinese Zodiac sign checker for the given birth year.
* It displays lucky colors, numbers, flowers, and personal traits
* for the Zodiac sign.
*/
void dispalyZodiacSign(int year) {
/* Define Zodiac sign information */
  char *cZodiac[12][5][255] = {
    {
      "Rat",
      "Blue, Gold, Green",
      "2, 3",
      "Lily, African Violet",
      "With strong intuition and quick response, they always easily adapt themselves to a new environment. With rich imaginations and sharp observation, Rats can take advantage of various opportunities well."
    },
    {
      "Ox",
      "White, Yellow, Green",
      "1, 4",
      "Tulip, Morning Glory, Peach Blossom",
      "Oxes are known for diligence, dependability, strength and determination. Having an honest nature, Oxes have a strong patriotism for their country, have ideals and ambitions for life, and attach importance to family and work."
      },
    {
      "Tiger",
      "Blue, Grey, Orange, White",
      "1, 3, 4",
      "Yellow Lily, Cineraria",
      "People born in the year of the Tiger are brave, competitive, unpredictable, and self-confident. They are very charming and well-liked by others. But sometimes they are likely to be impetuous, irritable, and overindulged."
    },
    {
      "Rabbit",
      "Red, Pink, Purple, Blue",
      "3, 4, 6",
      "Plantain Lily, Jasmine",
      "Rabbits tend to be gentle, quiet, elegant, and alert; quick, skillful, kind, and patient; and particularly responsible. However, they might be superficial, stubborn, melancholy, and overly-discreet."
    },
    {
      "Dragon",
      "Gold, Silver, Grayish White",
      "1, 6, 7",
      "Dragon Flowers, Bleeding-heart Glory Bower, Dragon Flowers",
      "Among Chinese zodiac animals, the Dragon is the sole imaginary animal. The Dragon is the most vital and powerful beast in the Chinese zodiac, although with an infamous reputation for being a hothead and possessing a sharp tongue."
    },
    {
      "Snake",
      "Black, Red, Yellow",
      "2, 8, 9",
      "Orchid, Cactus",
      "In Chinese culture, the Snake is the most enigmatic animal among the twelve zodiac animals. People born in a year of the Snake are supposed to be the most intuitive."
    },
    {
      "Horse",
      "Yellow, Green",
      "2, 3, 7, and numbers containing them (like 23 and 37)",
      "Calla Lily, Jasmine",
      "People born in a year of the Horse are extremely animated, active and energetic. Horses love to be in a crowd, and they can usually be seen on such occasions as concerts, theater performances, meetings, sporting events, and parties."
    },
    {
      "Sheep",
      "Green, Red, Purple",
      "2, 7",
      "Carnation, Primrose",
      "People born in a year of the Goat are generally believed to be gentle mild-mannered, shy, stable, sympathetic, amicable, and brimming with a strong sense of kind-heartedness and justice."
    },
    {
      "Monkey",
      "White, Blue, Gold",
      "4, 9",
      "Hrysanthemum, Crape-myrtle",
      "People born in a year of the Monkey have magnetic personalities and are witty and intelligent. Personality traits like mischievousness, curiosity, and cleverness, make them very naughty."
    },
    {
      "Rooster",
      "Gold, Brown, Yellow",
      "5, 7, 8",
      "Gladiola, Cockscomb",
      "People born in a year of the Rooster are very observant, hardworking, resourceful, courageous, and talented. Roosters are very confident in themselves."
    },
    {
      "Dog",
      "Red, Green, Purple",
      "3, 4, 9",
      "Rose, Cymbidium Orchids",
      "Dogs are loyal and honest, amiable and kind, cautious and prudent. Due to having a strong sense of loyalty and sincerity, Dogs will do everything for the person who they think is most important."
    },
    {
      "Pig",
      "Yellow, Grey, Brown, Gold",
      "2, 5, 8",
      "Hydrangea, Daisy",
      "Pigs are diligent, compassionate, and generous. They have great concentration: once they set a goal, they will devote all their energy to achieving it. Though Pigs rarely seek help from others, they will not refuse to give others a hand."
    }
  };
  
  int i = year % 12;
  
/* Match the index of cZodiac with i */
  if (i < 4) {
    i = i + 8;
  } else {
    i = i - 4;
  }
  
  printf("\nYou were born in the year of %s.\n", cZodiac[i][0][0]);
  printf("\nYour lucky color is %s.\n", cZodiac[i][0][1]);
  printf("Your lucky number is %s.\n", cZodiac[i][0][2]);
  printf("Your lucky flower is %s.\n", cZodiac[i][0][3]);
  printf("\n%s\n", cZodiac[i][0][4]);
}

int main() {

  char name[15];
  int year;
  
  printf("What's your name? ");
  scanf("%s", name);  // Why not &name???
  printf("Hi, %s!\n", name);
  printf("What's your birth year? (ex: 1962): ");
  scanf("%d", &year);
  dispalyZodiacSign(year);
  
  return 0;
}