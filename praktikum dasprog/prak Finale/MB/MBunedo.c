#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Database
{
  int cbomb;
  char lokasi[100], lokasijaga[100], namapenjaga[100];
};

int main()
{
  int N;
  scanf("%d", &N);
  char temp[100];
  char strtemp[100];
  char strtemploc[100];
  int numtemp;
  char perintah[100];
  struct Database info[N];
  int j = 0, k = 0, l, m;

  for (int i = 0; i < N; i++)
  {
    scanf("%s", perintah);
    if (strcmp(perintah, "set") == 0)
    {
      scanf("%s", temp);
      if (strcmp(temp, "*") == 0)
      {
        scanf("%s%s", info[k].namapenjaga, temp);
        scanf("%s", info[k].lokasijaga);
        k++;
      }

      else
      {
        strcpy(info[j].lokasi, temp);
        scanf("%d", &info[j].cbomb);
        j++;
      }
    }

    else if (strcmp(perintah, "chg") == 0)
    {
      scanf("%s", temp);
      if (strcmp(temp, "*") == 0)
      {
        scanf("%s", strtemp);
        scanf("%s", temp);
        if (strcmp(temp, "&") == 0)
        {
          scanf("%s", strtemploc);
          for (l = 0; l < k; l++)
          {
            if (strcmp(strtemp, info[l].namapenjaga) == 0)
            {
              strcpy(info[l].lokasijaga, strtemploc);
            }
          }
        }
        else
        {
          numtemp = atoi(temp);
          for (l = 0; l < k; l++)
          {
            if (strcmp(strtemp, info[l].namapenjaga) == 0)
            {
              for (m = 0; m < j; m++)
              {
                if (strcmp(info[l].lokasijaga, info[m].lokasi) == 0)
                {
                  info[m].cbomb = numtemp;
                }
              }
            }
          }
        }
      }
      else
      {
        strcpy(strtemp, temp);
        scanf("%d", &numtemp);
        for (l = 0; l < j; l++)
        {
          if (strcmp(strtemp, info[l].lokasi) == 0)
          {
            info[l].cbomb = numtemp;
          }
        }
      }
    }
    else
     {
       scanf("%s",temp) ;
       scanf("%s",strtemp) ;
       for(l = 0 ; l < k ; l++)
       {
         if(strcmp(strtemp,info[l].namapenjaga) == 0)
         {
           for(m = 0 ; m < j ; m++)
           {
             if(strcmp(info[l].lokasijaga,info[m].lokasi) == 0)
             {
               printf("%d\n" , info[m].cbomb) ;
             }
           }
         }
       }
     } 
  }
  return 0;
}