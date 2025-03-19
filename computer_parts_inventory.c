#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Cpu 
{
  int id;
  char name[50];
  int modelNum;
  float speed;
  float price;
};

struct MotherBoard
{
  char name[50];
  int id;
  int modelNum;
  float price;


};

struct Ram
{
  int memorySize;
  int speed;
  float priceRam;
};
void cpu(struct Cpu allCpus[5]);
void ram(struct Ram allMemory[5]);
void motherboard(struct MotherBoard allBoard[5]);
int main()
{
  struct Cpu allCpus[5];
    struct  Ram allMemory[5];
  struct  MotherBoard allBoard[5];
  cpu(allCpus);
  ram(allMemory);
  motherboard(allBoard);

  for (int x=0;x<5;x++)
  {
    printf("\n %s %d %d %.2f %.2f", allCpus[x].name, allCpus[x].id, allCpus[x].modelNum, allCpus[x].price, allCpus[x].speed);

  }

  for (int x=0;x<5;x++)
  {
    printf("\n%d %d %f", allMemory[x].memorySize, allMemory[x].speed, allMemory[x].priceRam);
  }

  for (int x=0;x<5;x++)
    {
        printf("\n %s %d %d %.2f", allBoard[x].name, allBoard[x].id, allBoard[x].modelNum, allBoard[x].price);
    }


return 0;
}

void cpu(struct Cpu allCpus[5])
{
  FILE *fp;
  fp=fopen("cpu.txt","r");
  if (fp==NULL)
{
  printf("Error reading file");
  printf("Program now terminating...");
  exit (0);
}
char line[100]; //c-string strcpy()
char *sp; //string pointer =
int x=0;
while (fgets(line,100,fp)!=NULL)
{
  //printf("\n%s", line);
  sp=strtok(line,",");
strcpy(allCpus[x].name,sp);


sp=strtok(NULL, ",");
allCpus[x].id=atoi(sp);

sp=strtok(NULL, ",");
allCpus[x].modelNum=atoi(sp);

sp=strtok(NULL, ",");
allCpus[x].price=atof(sp);

sp=strtok(NULL, ",");
allCpus[x].speed=atof(sp);

x++;

//printf("\n %s %d %d %.2f %.2f", allCpus[0].name, allCpus[0].id, allCpus[0].modelNum, allCpus[0].price, allCpus[0].speed);



}
fclose(fp);
}

void ram(struct Ram allMemory[5]) 
{
  FILE *fp;
  fp=fopen("ram.txt","r");
  if (fp==NULL)
{
  printf("Error reading file");
  printf("Program now terminating...");
  exit (0);
}
int value;
int x=0;
value=fscanf(fp,"%d,%d,%f", &allMemory[x].memorySize, &allMemory[x].speed, &allMemory[x].priceRam);

while (value != EOF)
{
  x++;
  value=fscanf(fp,"%d,%d,%f", &allMemory[x].memorySize, &allMemory[x].speed, &allMemory[x].priceRam);

}
fclose(fp);
}

void motherboard(struct MotherBoard allBoard[5])
{
  FILE *fp;
  fp=fopen("motherboard.txt","r");
  if (fp==NULL)
{
  printf("Error reading file");
  printf("Program now terminating...");
  exit (0);
}
char line[100]; //c-string strcpy()
char *sp; //string pointer =
int x=0;
while (fgets(line,100,fp)!=NULL)
{
  //printf("\n%s", line);
  sp=strtok(line,",");
strcpy(allBoard[x].name,sp);


sp=strtok(NULL, ",");
  allBoard[x].id=atoi(sp);

sp=strtok(NULL, ",");
  allBoard[x].modelNum=atoi(sp);

sp=strtok(NULL, ",");
  allBoard[x].price=atof(sp);


x++;

//printf("\n %s %d %d %.2f %.2f", allBoard[0].name, allBoard[0].id, allBoard[0].modelNum, allBoard[0].price);



}
fclose(fp);
}
