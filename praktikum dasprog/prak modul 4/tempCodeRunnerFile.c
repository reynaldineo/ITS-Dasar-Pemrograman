 for (int i = 0; i < x; i++)
    {
        if ((strcmp(neo[i].nama,cekNama) == 0 )&&(strcmp(neo[i].peran,cekPeran) == 0))
        {
            if (neo[i].stamina == 0)
            {
                printf("Yah, prajurit %s sudah tumbang sebagai %s :(", neo[i].nama, neo[i].peran);
            }
            else
            {
                printf("Prajurit %s masih berjuang sebagai %s dengan %d stamina!", neo[i].nama, neo[i].peran, neo[i].stamina);
            }
        }    
    }