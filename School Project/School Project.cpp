#include <iostream>
#include <string>
#include<cmath>
using namespace std;
int x;
string isim;
int ilksayi;
int ikincisayi;

int main()
{
    //cout << "bir sayi giriniz :";
    //cin >> x;
    //cout << "girdiginiz sayi : " << x;
    
    /*cout << "isminizi giriniz :";
    getline(cin, isim);
    cout << "merhaba "<< isim;*/

    /*cout << "ilksayiyi giriniz :";
    cin >> ilksayi; 
    cout << "ikincisayiyi giriniz :";
    cin >> ikincisayi;
    cout << "seklin alani :" << ilksayi * ikincisayi;*/
    
    /*cout << "kalan hesaplama uygulamasına hosgeldiniz"<<endl;
    cout << "kalan hesaplamak icin ilk sayiyi giriniz :";
    cin >> ilksayi;
    cout << "kalan hesaplamak icin ikinci sayiyi giriniz :";
    cin >> ikincisayi;
    int kalan = ilksayi % ikincisayi;
    cout << "Kalan :" << kalan;*/
    
   //int yas;
   // cout << "siteye hosgeldiniz giris yapmak icin resit olmanız gerekmektedir lutfen yasinizi giriniz :";
   // cin >> yas;
   // if (yas>=18) 
   // {
   //     cout << "siteye girebilirsiniz";
   // }
   // else if (yas<=0) 
   // {
   //     cout << "girdiginiz yas gecerli degil lutfen gecerli bir deger giriniz";
   // }
   // else
   // {
   //     cout << "resit degilsiniz siteye giremezsiniz"; 
   // }
    //double quiz1; //10
    //double quiz2; //10
    //double vize1; //30
    //double final1; //50
    //cout << "Not ortalamsi hesaplama programi" << endl;
    //cout << "quiz notunuzu giriniz :";
    //cin >> quiz1;
    //cout << "2.quiz notunuzu giriniz :";
    //cin >> quiz2;
    //cout << "vize notunuz giriniz :";
    //cin >> vize1;
    //cout << "final notunuzu giriniz :";
    //cin >> final1;
    //double ortalama1;
    //ortalama1 = (quiz1 + quiz2 + 3 * vize1 + 5 * final1) / 10;
   
     //ORTALAMA PROGRAMI
     

    //if (ortalama1>100)
    //{
    // cout << "Yanlis not girdiniz lutfen kontrol edip tekrar giriniz" << endl;   

    //}
    //else if (ortalama1>80)
    //{
    //    
    //    cout << "Tebrikler aa ile gectiniz" << endl;
    //}
    //else if(ortalama1>60)
    //{
    //    cout << "Tebrikler gectiniz" << endl;
    //    
    //}
    //else
    //{
    //   
    //    cout << "uzgunum kaldiniz" << endl;
    //}
    //cout << "Ortalamaniz :" << ortalama1 << endl;
   
    
    /*int z = 1;
    int t = 0;
    while (z<=1000)
    {
        t = t + z;
        z++;
    }*/
  /*  
    cout << "Total: " << t << endl;*/
    /*int t = 0;
    int sayac = 0;
    for (int i = 1; i<=10; i++)
    {
        t = t + i;
        sayac++;
    }
    cout << t << endl;
    cout << sayac;*/
    /*int sayi1, sayi2;
    char islem;
    
     cout <<"ilk sayiyi giriniz :";
     cin >> sayi1;
     cout << "ikinci sayiyi giriniz :";
     cin >> sayi2;
     cout << "yapmak istediginiz islemi giriniz(+,-,*,/) :";
     cin >> islem;
     int sonuc;

     
        switch (islem)
        {
        case'+':
            sonuc= sayi1 + sayi2;
            cout << "sonuc : " << sonuc;
            break;
        case'-':
            sonuc = sayi1 - sayi2;
            cout << "sonuc : " << sonuc;
            break;
        case'/':
            sonuc = sayi1 / sayi2;
            cout << "sonuc : " << sonuc;
            break;
        case'*':
            sonuc = sayi1 * sayi2;
            cout << "sonuc : " << sonuc;
            break;
        default:
            cout << "hatali islem girdiniz";
            break;
        }*/




//int matris[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//    
//    for (int i =0; i< 3;)
//    {
//        for (int j = 0; j < 3; j++) 
//        {
//            cout << matris[i][j] << " ";
//        
//            }
//        i++;
//        cout << endl;
//    }

int matris[3][3];
     
for (int i = 0; i <3; i++)
{
    for (int j = 0; j < 3;j++)
    {
        cout << "Matrisin " << i+1 << ".inci satir " << j+1 << ".nci sutun elemanini giriniz : ";
        cin >> matris[i][j];
    }

}
    for (int i =0; i< 3;)
    {
        for (int j = 0; j < 3; j++) 
        {
            cout << matris[i][j] << " ";
        
            }
        i++;
        cout << endl;
    }

    
    
    return 0;

}