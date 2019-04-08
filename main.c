#include <stdio.h>
#include <stdlib.h>
#define VND 23225
#define CNY 6.7567
#define EURO 0.8928
#define GPB 0.7692
void Luachon(int *loaitien);
int main()
{
    int loaitien;
    Luachon(&loaitien);
    DoiTien(loaitien);

    return 0;
}
void Luachon(int *loaitien)
{
    do
    {
    printf("Nhap loai tien can doi\n");
    printf("1.vnd->usd 2.cny->usd 3.euro->usd 4.gpb->usd\n");
    scanf("%d", &*loaitien);

    }while(*loaitien<1 || *loaitien>4);
}
void DoiTien(int loaitien)
{
    float ketqua, sotien;
    do
    {
         switch (loaitien)
         {
         case 1:
          {
            printf("Nhap so tien can doi\n");
            scanf("%f", &sotien);
            if (sotien<=0)
                continue;
            ketqua=(float)sotien/VND;
            break;
          }
         case 2:
          {
            printf("Nhap so tien can doi\n");
            scanf("%f", &sotien);
            if (sotien<=0)
                continue;
            ketqua=(float)sotien/CNY;
            break;
          }
         case 3:
          {
            printf("Nhap so tien can doi\n");
            scanf("%f", &sotien);
            if (sotien<=0)
                continue;
            ketqua=(float)sotien/EURO;
            break;
          }
         default:
           {
            printf("Nhap so tien can doi\n");
            scanf("%f", &sotien);
            if (sotien<=0)
                continue;
            ketqua=(float)sotien/GPB;
           }
          }
    }while(sotien<=0);
    printf("%f", ketqua);
}
