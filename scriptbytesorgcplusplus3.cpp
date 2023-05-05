#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}

#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}

#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}

#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}

#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}

#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}

#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}

#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}

#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}

#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}

#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}

#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}

#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}

#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}

#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}

#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}

#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}

#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}

#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}

#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}

#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}

#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}

#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}

#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}
#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}

#include <stdio.h>
/* Dairenin alanı ve çevresini hesaplama*/
//Dairenin Alanı = Pi x r x r
//Dairenin çevresi= 2 x pi x r (r=yarıçap)
#define PI 3.14
int main(void){
double yaricap,alan,cevre;
printf(“Dairenin alani ve cevresi icin yaricapi giriniz lutfen :”);
scanf(“%lf”,&yaricap);
//java da Scanner,bizden yani kullanıcıdan veri alma işlemi
cevre=2*PI*yaricap;
alan=PI*yaricap*yaricap;
printf(“Dairenin Alani : %f”,alan);
printf(“\nDairenin Cevresi : %f”,cevre);
printf(“\n***********************************”);
printf(“\nDiger islemlerle devam edelim.”);
printf(“\n***********************************”);
//Dik üçgen
/* Kenarlar için h,b,c
Alan = b × c / 2
Çevre = h+ b + c = 12 birim */
int b,c,h,du_alan,du_cevre;
printf(“\nDik ucgen icin kenarlari giriniz lutfen,3 tane : “);
scanf(“%d%d%d”,&b,&c,&h);
du_alan=(b*c)/2;
du_cevre=b+c+h;
printf(“\nDik ucgen Alani :%d “,du_alan);
printf(“\nDik Ucgen Cevre :%d “,du_cevre);
printf(“\n***********************************”);
/*
Kare
Çevre = 4a
Alan = a2 */
int a,k_alan,k_cevre;
printf(“\nKare icin kenar giriniz lutfen : “);
scanf(“%d”,&a);
k_alan=a*a;
printf(“\nKare alani :%d “,k_alan);
k_cevre=4*a;
printf(“\nKare cevre: %d”,k_cevre);
printf(“\n***********************************”);
/* Dikdörtgen
Dikdörtgenin Çevresi = 2(K + U)
Dikdörtgenin Alanı = K x U */
int kk,uk,dik_alan,dikd_cevre;
printf(“\nDikdortgen icin kenar giriniz (2 kenar) lutfen : “);
scanf(“%d%d”,&kk,&uk);
dik_alan=kk*uk;
printf(“\nDikdortgenin alani :%d”,dik_alan);
dikd_cevre=2*(kk+uk);
printf(“\nDikdortgenin cevresi :%d”,dikd_cevre);
printf(“\n***********************************”);
return 0;

}