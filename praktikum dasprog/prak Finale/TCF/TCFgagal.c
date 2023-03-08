#include <stdio.h>
#include <string.h>

struct base
{
    char namaTempat [100];
    int jumlahOrangTinggal;

};

struct base2
{
    char namaOrang[100];
    int umurOrang;
    long long noTelp;
};

struct base3
{
    char temenA[100];
    char temenB[100];
};




int main () {
    // jumlah lokasi
    int n;
    scanf("%d", &n);

    struct base data[n];
    struct base2 dataOrang[100];
    struct base3 dataTemen[100];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", data[i].namaTempat);

        scanf("%d", &data[i].jumlahOrangTinggal);

        // input data orang yg tinggal
        for (int j = 0; j < data[i].jumlahOrangTinggal; j++)
        {
            scanf("%s", dataOrang[j].namaOrang);
            scanf("%d", &dataOrang[j].umurOrang);
            scanf("%lld", &dataOrang[j].noTelp);
        }
    }

    int jumlahTemen;
    scanf("%d", &jumlahTemen);
    for (int i = 0; i < jumlahTemen; i++)
    {
        scanf("%s %s", dataTemen[i].temenA, dataTemen[i].temenB);
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", data[i].namaTempat);

        // print data org yg tinggal
        for (int j = 0; j < data[i].jumlahOrangTinggal; j++)
        {
            printf("Name: %s\n", dataOrang[j].namaOrang);
            printf("Age: %d\n", dataOrang[j].umurOrang);
            int paksa = 0;
            printf("Phone Number:%d%lld\n", paksa, dataOrang[j].noTelp);
            
            
            int cekTemen=0;
            for (int k = 0; i < 10; k++)
            {
                if (strcmp(dataOrang[j].namaOrang, dataTemen[k].temenA)==0)
                {
                    printf("His/Her bestie is:%s\n", dataTemen[k].temenB);
                    printf("His/Her contact info as follows\n");
                    cekTemen++;
                    break;
                }
            }

            // data temennya
            if (cekTemen!=0)
            {
                printf("Name: %s\n", dataTemen[cekTemen].temenB);
                
                for (int i = 0; i < n; i++)
                {
                    for (int j = 0; j < data[i].jumlahOrangTinggal; j++)
                    {
                        if (strcmp(dataTemen[cekTemen].temenB, dataOrang[j].namaOrang)==0)
                        {
                            printf("Age: %d\n", dataOrang[j].umurOrang);
                            int paksa=0;
                            printf("%d%lld\n", paksa, dataOrang[j].noTelp);
                            printf("\n");
                            break;
                        }
                    }
                }
            }
            
            if (cekTemen==0)
            {
                printf("His/Her bestie is: No one");
            }
            


        }
        
    }
    





    



    return 0;
}