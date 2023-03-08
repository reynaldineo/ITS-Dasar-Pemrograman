# include <stdio.h> 
int main ( )
{
    int totalpembelian, discount;
    printf ("Total pembelian = Rp ") ;
    scanf ("%d" , &totalpembelian) ;
    
   if (totalpembelian >= 100.000) 
   {
   discount = 0.05 * totalpembelian;
    printf ("Besarnya discount = Rp %d ",discount) ;
   }
    return 0;
}