#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>
#include <cstring>
#include<string>
#include<sstream>
#include<conio.h>
#include<dos.h>
#include<stdlib.h> //as system function is in the standard library
#include<stdio.h>
#include <windows.h>
#include<time.h>
void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
using namespace std;

char ctip [56][112] ={"rosu", "albastru", "negru", "galben","rosu", "albastru", "negru", "galben","rosu", "albastru", "negru", "galben","rosu", "albastru", "negru", "galben","rosu", "albastru", "negru", "galben","rosu", "albastru", "negru", "galben","rosu", "albastru", "negru", "galben","rosu", "albastru", "negru", "galben","rosu", "albastru", "negru", "galben","rosu", "albastru", "negru", "galben","rosu", "albastru", "negru", "galben","rosu", "albastru", "negru", "galben","rosu", "albastru", "negru", "galben","rosu", "albastru", "negru", "galben"};
//char ctip [24][106] ={"rosu", "albastru", "negru", "galben","rosu", "albastru", "negru", "galben","rosu", "albastru", "negru", "galben","rosu", "albastru", "negru", "galben","rosu", "albastru", "negru", "galben","rosu", "albastru", "negru", "galben"};
char cval [14][112]={"1","2","3","4","5","6","7","8","9","10","11","12","13","14"};


struct piese {
    string tipp;
    string  valp;
} piesa[107],masa[78];
struct player{
    string tipp;
    string  valp;
    int pozPeTabla;
    string NumeJucator;
}player[4][23],RecycleBin[4][40],etalare[10][23];


//char NumeJucator[4];
int nrJoc;
int fr[112]={0};
int np=1,x,val,tip,nrc=0, n0=0;
string stip, sval;

void Duble(int arr[], int size)
{
    int* count = new int[sizeof(int) * (size - 2)];
    int i;
    cout << " Repeating elements are ";
    for (i = 0; i < size; i++) {
        if (count[arr[i]] == 1)
            cout << arr[i] << " ";
        else
            count[arr[i]]++;
    }
}
/*void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
*/
void AmestecPiese()
{
  srand(time(NULL));
  piese *struct_instance = new piese;
  while (nrc<=105)
    {
      nrc++;
      x=rand()%112;
      if (fr[x]==0)
    {
        tip=x/4;
        val=x%14;
        stip =  ctip[tip];
        sval =  cval[val];
        if (sval=="14") // verific daca este jolly
         {
          n0++;
          if(n0 <= 2)
            {
             if (stip == "galben" || stip == "rosu" )//|| stip == "albastru" || stip == "negru" )
               {
                piesa[nrc].tipp = "Joly Joker";
                piesa[nrc].valp = sval;
                fr[x]=1;
               }
              else
               {
                fr[x]=0;
                nrc--;
                n0--;
               }
             }
             else
                {
                  fr[x]=1;
                  nrc--;
                 }
          }
          else
            {
             fr[x]=1;
             piesa[nrc].tipp = stip;
             piesa[nrc].valp = sval;
            }
       }
       else
        {
          nrc--;
       }
    }
    //afisare piese amestecate
/*         for(int ps=1;ps<=106;ps++)
    {
     cout<<"Piesa " << ps<<" # " << piesa[ps].valp <<" & "<<piesa[ps].tipp<< endl;

    }*/
}
int ConvertS( string myString) { // convertim un sir numeric intro valoare
   int x;
   stringstream ss( myString );
   ss >> x;
   return x;
}
int apasaEnter()
{
        int c;
        cout<<"apasa Enter to continue" <<endl;
        do
         {
          c = cin.get();
         }
       while(c!='\n');
}
void testJoc2(int jk)
{   jk--;
    player[jk][2].tipp ="Joly Joker";
    player[jk][2].valp = "14";
    player[jk][2].pozPeTabla = 3
    ;

    player[jk][0].tipp ="rosu";
    player[jk][0].valp = "2";
    player[jk][0].pozPeTabla = 1;

    player[jk][1].tipp ="rosu";
    player[jk][1].valp = "3";
    player[jk][1].pozPeTabla = 2;

    player[jk][3].tipp ="rosu";
    player[jk][3].valp = "4";
    player[jk][3].pozPeTabla = 4;

    player[jk][4].tipp ="rosu";
    player[jk][4].valp = "5";
    player[jk][4].pozPeTabla = 5;

    player[jk][5].tipp ="   ";
    player[jk][5].valp = "0";
    player[jk][5].pozPeTabla = 6;

    player[jk][6].tipp ="albastru";
    player[jk][6].valp = "7";
    player[jk][6].pozPeTabla = 7;

    player[jk][7].tipp ="rosu";
    player[jk][7].valp = "7";
    player[jk][7].pozPeTabla = 8;

    player[jk][8].tipp ="galben";
    player[jk][8].valp = "7";
    player[jk][8].pozPeTabla = 9;

    player[jk][9].tipp ="negru";
    player[jk][9].valp = "7";
    player[jk][9].pozPeTabla = 10;

    player[jk][10].tipp ="   ";
    player[jk][10].valp = "0";
    player[jk][10].pozPeTabla = 11;

    player[jk][11].tipp ="negru";
    player[jk][11].valp = "1";
    player[jk][11].pozPeTabla = 12;

    player[jk][12].tipp ="negru";
    player[jk][12].valp = "2";
    player[jk][12].pozPeTabla = 13;

    player[jk][13].tipp ="negru";
    player[jk][13].valp = "3";
    player[jk][13].pozPeTabla = 14;

    player[jk][14].tipp ="negru";
    player[jk][14].valp = "4";
    player[jk][14].pozPeTabla = 15;

    player[jk][15].tipp ="negru";
    player[jk][15].valp = "5";
    player[jk][15].pozPeTabla = 16;

    player[jk][16].tipp ="   ";
    player[jk][16].valp = "0";
    player[jk][16].pozPeTabla = 17;

    player[jk][17].tipp ="   ";
    player[jk][17].valp = "0";
    player[jk][17].pozPeTabla = 18;

    player[jk][18].tipp ="   ";
    player[jk][18].valp = "0";
    player[jk][18].pozPeTabla = 19;

    player[jk][19].tipp ="   ";
    player[jk][19].valp = "0";
    player[jk][19].pozPeTabla = 20;

    player[jk][20].tipp ="   ";
    player[jk][20].valp = "0";
    player[jk][20].pozPeTabla = 21;
}

void testJoc1(int jk)
{   jk--;
    player[jk][0].tipp ="rosu";
    player[jk][0].valp = "1";
    player[jk][0].pozPeTabla = 1;

    player[jk][1].tipp ="rosu";
    player[jk][1].valp = "2";
    player[jk][1].pozPeTabla = 2;

    player[jk][2].tipp ="rosu";
    player[jk][2].valp = "3";
    player[jk][2].pozPeTabla = 3;

    player[jk][3].tipp ="rosu";
    player[jk][3].valp = "4";
    player[jk][3].pozPeTabla = 4;

    player[jk][4].tipp ="rosu";
    player[jk][4].valp = "5";
    player[jk][4].pozPeTabla = 5;

    player[jk][5].tipp ="   ";
    player[jk][5].valp = "0";
    player[jk][5].pozPeTabla = 6;

    player[jk][6].tipp ="albastru";
    player[jk][6].valp = "7";
    player[jk][6].pozPeTabla = 7;

    player[jk][7].tipp ="rosu";
    player[jk][7].valp = "7";
    player[jk][7].pozPeTabla = 8;

    player[jk][8].tipp ="galben";
    player[jk][8].valp = "7";
    player[jk][8].pozPeTabla = 9;

    player[jk][9].tipp ="negru";
    player[jk][9].valp = "7";
    player[jk][9].pozPeTabla = 10;

    player[jk][10].tipp ="   ";
    player[jk][10].valp = "0";
    player[jk][10].pozPeTabla = 11;

    player[jk][11].tipp ="negru";
    player[jk][11].valp = "1";
    player[jk][11].pozPeTabla = 12;

    player[jk][12].tipp ="negru";
    player[jk][12].valp = "2";
    player[jk][12].pozPeTabla = 13;

    player[jk][13].tipp ="negru";
    player[jk][13].valp = "3";
    player[jk][13].pozPeTabla = 14;

    player[jk][14].tipp ="negru";
    player[jk][14].valp = "4";
    player[jk][14].pozPeTabla = 15;

    player[jk][15].tipp ="negru";
    player[jk][15].valp = "5";
    player[jk][15].pozPeTabla = 16;

    player[jk][16].tipp ="   ";
    player[jk][16].valp = "0";
    player[jk][16].pozPeTabla = 17;

    player[jk][17].tipp ="   ";
    player[jk][17].valp = "0";
    player[jk][17].pozPeTabla = 18;

    player[jk][18].tipp ="   ";
    player[jk][18].valp = "0";
    player[jk][18].pozPeTabla = 19;

    player[jk][19].tipp ="   ";
    player[jk][19].valp = "0";
    player[jk][19].pozPeTabla = 20;

    player[jk][20].tipp ="   ";
    player[jk][20].valp = "0";
    player[jk][20].pozPeTabla = 21;
}

void DistribuirePiese(int k) //k este nr jucatorilor
{
 int poz,pozc, pozM;
 string nick;
   cout<<" afisare piesa intoarsa = " << piesa[106].valp  <<" & "<< piesa[106].tipp<< endl;
   int pivot=ConvertS(piesa[106].valp);//pivot este nr. gramezii
  cout<<"introduceti detalii jucator "<<endl;
   for (int nj=0;nj<k;nj++)
   {
       cout<< "nr. "<< nj+1<<"  nickname >> ";cin>> nick;
       player[nj][0].NumeJucator= nick;
   }

   if (pivot==14)  //daca piesa 106 este joker
   {
       cout<<"este necesara reamestecarea pieselor";

   }
      //k este nr de jucatori
      // NrGr este numarul gramezii
    for (int NrGr=0;NrGr<=1;NrGr++)
     {
       //cout<< " nr gramada = "<< NrGr<< endl;
       for(int jk=0;jk<=k-1;jk++)
      {
        //cout<< " nr jucator = "<< jk<< endl;
        pozc = ((pivot*7+1)+ 7*(jk+NrGr*k)); // determinam pozitia
        //cout<< " pozitia calculata = "<< pozc<< endl;
        for(int i=0;i<=6;i++)
          {
    // jucator 1

            if (pozc>105){
                poz=pozc-105;
               //  cout<< " Pozitia calculata >105 = "<< poz+i<< endl;
                 player[jk][7*NrGr+i].tipp = piesa[poz+i].tipp;
                 player[jk][7*NrGr+i].valp = piesa[poz+i].valp;
                 player[jk][7*NrGr+i].pozPeTabla = 7*NrGr+i+1;
              //  cout<<" afisare piesa jucator "<<jk<<"gramada "<< NrGr+1<<"  = " << ". Piesa" << i+1<<" # " << player[jk][7*NrGr+i].pozPeTabla  <<" & "<< player[jk][7*NrGr+i].valp <<" & "<<player[jk][7*NrGr+i].tipp<< endl;
                 }
            else       {
                 poz=pozc;
               // cout<< " Pozitia calculata <105 = "<< poz+i<< endl;
                  player[jk][7*NrGr+i].tipp = piesa[poz+i].tipp;
                  player[jk][7*NrGr+i].valp = piesa[poz+i].valp;
                  player[jk][7*NrGr+i].pozPeTabla = 7*NrGr+i+1;
                //cout<<" afisare piesa jucator"<<jk<<"gramada "<< NrGr+1<<"  = " << ". Piesa" << i+1<<" # " << player[jk][7*NrGr+i].pozPeTabla  <<" & "<< player[jk][7*NrGr+i].valp <<" & "<<player[jk][7*NrGr+i].tipp<< endl;

             }
            }
          }
         }
int z,jz;
 for(jz=0;jz<k;jz++)
 {
    for(z=14; z<=22; z++)
      {
          player[jz][z].tipp = "   ";
          player[jz][z].valp = "0";
          player[jz][z].pozPeTabla = z+1;
 //       cout<<" afisare piesa jucator"<<jz<<". Piesa" << z <<" # " << player[jz][z].pozPeTabla  <<" & "<< player[jz][z].valp <<" & "<<player[jz][z].tipp<< endl;
         }
      }
    player[0][14].tipp = piesa[pivot*7].tipp;
    player[0][14].valp = piesa[pivot*7].valp;
    player[0][14].pozPeTabla = 15;

    cout << " --Masa este pregatita - Start Joc --";   // impartim piesele pe masa
    apasaEnter();

   int PivotM = pivot+2*k; //13+2*4=21 21-15=6 21*7=147-105 42
   int pozPiv;
    pozPiv=PivotM*7+1;
     for(int i=0; i<=(15*7-14*k)-2; i++)
       {if (pozPiv>105){
                                    pozM=(PivotM*7-105)+i;
                                    masa[i].tipp = piesa[pozM+1].tipp;
                                    masa[i].valp = piesa[pozM+1].valp;
                                   }
                        else       {
                                    pozM=PivotM*7+i;
                                    masa[i].tipp = piesa[pozM+1].tipp;
                                    masa[i].valp = piesa[pozM+1].valp;
                                   //cout<<" afisare piesa masa ramase "<< pozM+1<<"  = " << ". Piesa" << i+1<<" # " << masa[i].valp  <<" & "<< masa[i].tipp<< endl;
                                   }
               pozPiv++;
       }
}
int VerificaRaspuns(string str)
{
int raspDa,raspNu;
string str_inp1("da");
string str_inp3("nu");
string str_inp2 = str.substr (0,2);
    raspDa = str_inp1.compare(str_inp2);
    raspNu = str_inp3.compare(str_inp2);
    if (raspDa == 0){
  return 1;
        //cout<<"play game";
    }
     if (raspNu == 0){
  return 2;}

}
int pressBtn()
{
    int c,r;
    string str;
     cout<<"   Raspunsul tau este  [da]/[nu] ?"<< endl;
  //  do{
       do
         {
          c = cin.get();
          str += c;
         }
       while(c!='\n');
       r = VerificaRaspuns(str);
       str.clear();
      // if (r==1){cout<<"play game"<<endl;
       return r;//}
     // }
 //   while (r!=2);
 //   cout<<"La revedere";
}
int Comanda()
{
    int MoveP,DropP,CloseG,PullP,NextP,demoP;
    int c,r;
    string str;

  //  do{
       do
         {
          c = cin.get();
          str += c;
         }
       while(c!='\n');


      string str_inp1 = str.substr (0,4);  // sirul tastat
      string str_inp2("move");             // comanda muta piesa de comparat
      string str_inp3("drop");
      string str_inp4("pull");
      string str_inp5("next");
      string str_inp6("iwin");
      string str_inp7("demo");


      str.clear();
    MoveP = str_inp2.compare(str_inp1);
    DropP = str_inp3.compare(str_inp1);
    PullP = str_inp4.compare(str_inp1);
    NextP = str_inp5.compare(str_inp1);
    CloseG= str_inp6.compare(str_inp1);
    demoP = str_inp7.compare(str_inp1);

    if (MoveP == 0){
  return 1;}
    if (DropP == 0){
  return 2;}
    if (PullP == 0){
  return 3;}
    if (NextP == 0){
  return 4;}
    if (CloseG == 0){
  return 5;}
    if (demoP == 0){
  return 7;}
}


void AfisareTablaJucator(int kt)
{
  system("CLS");
  cout<<" TABLA DE JOC jucator " << player[kt-1][0].NumeJucator<< endl;
  for(int i=0;i<=22;i++){
    cout<<"Poz."<<player[kt-1][i].pozPeTabla<< " # " << player[kt-1][i].valp  <<" & "<< player[kt-1][i].tipp<< endl;
        }
        cout << endl;

}

void MutaPiesa(int k) // muta piesa jucatorului nr
{
    int OK=0,old_poz,new_poz;
    string tipnou,valnou,check;

    cout<<"jucator "<<k<<endl;
      do{
         cout<<" de pe pozitia >>";cin>> old_poz;
        }while(old_poz<=0 || old_poz>=24);

      do{
         cout<<" pe pozitia >> "; cin>> new_poz;
       }while(new_poz<=0 || new_poz>=23);


        cout<<" mut piesa jucatorului "<<player[k-1][0].NumeJucator<< endl;
        cout<<" de pe pozitia "<<old_poz<<" / pe poz >> "<<new_poz<<endl;
        cout <<"j "<< k-1<<" "<< player[k-1][0].NumeJucator<<" poz "<<player[k-1][new_poz-1].valp<< endl;
        check=player[k-1][new_poz-1].valp;

        if (check=="0")
          {
            cout<<" mut piesa din pozitia  "<<old_poz<<" in pozitia "<<new_poz <<endl;
            cout<<"Poz."<<player[k-1][old_poz-1].pozPeTabla<< " # " << player[k-1][old_poz-1].valp  <<" & "<< player[k-1][old_poz-1].tipp<< endl;
            valnou=player[k-1][old_poz-1].valp;
            player[k-1][new_poz-1].valp =valnou ;
            tipnou=player[k-1][old_poz-1].tipp;
            player[k-1][new_poz-1].tipp = tipnou;
            cout<<"Poz."<<player[k-1][new_poz-1].pozPeTabla<< " # " << player[k-1][new_poz-1].valp  <<" & "<< player[k-1][new_poz-1].tipp<< endl;

            player[k-1][old_poz-1].tipp= "   ";
            player[k-1][old_poz-1].valp="0";
            OK=1;
           // pressBtn;
          }

}

int NumaraRB(int k,int jk) // numara valorile pentru jucatorul k
{
int nrp=0;
for(int j=0; j<=(106-1-14*jk); j++)
 {
    if(RecycleBin[k-1][j].valp!="0")
    {
        nrp++;
    }
 }
return nrp;
}
int AruncPiesa(int k,int jk) // decartare piese nr 15 de pe tabla
{
    int OK=0,old_poz,new_poz,rsp;
    string tipnou,valnou;

    cout<<"jucator "<<k<<endl;
        do{
         cout<<" Trebuie sa decartezi o piesa. Alegerea ta este piesa de pe pozitia >>";cin>> old_poz;
        }while(old_poz<=0 || old_poz>=24);


        cout<<" Urmatoarea piesa a fost decartata "<< endl;
        cout<<"Poz."<<player[k-1][old_poz-1].pozPeTabla<< " # " << player[k-1][old_poz-1].valp  <<" & "<< player[k-1][old_poz-1].tipp<< endl;


       if (pressBtn()==1);
        {
            valnou=player[k-1][old_poz-1].valp;
            if (valnou !="0")
            {
               tipnou=player[k-1][old_poz-1].tipp;
               player[k-1][old_poz-1].tipp= "   ";
               player[k-1][old_poz-1].valp="0";
               int nrvalRB = NumaraRB(k-1,jk);
               RecycleBin[k-1][nrvalRB].tipp = tipnou;
               RecycleBin[k-1][nrvalRB].valp = valnou;
             /*  for(x=0;x<=nrvalRB;x++)
                {
                cout<<"Poz."<< x << " # " << RecycleBin[k-1][x].valp <<" & "<< RecycleBin[k-1][x].tipp<< endl;
                }*/
                return 1;
            }
            else
            {
                cout <<"Nu exista piesa pe pozitia indicata"<<endl;
                return 0;
            }
            do{
              rsp=pressBtn();
            }
            while (rsp!=1);
        }

}


void TragePiesa(int k,int ms) // trage o piesa din gramada
{
string tipnou,valnou;

    cout<<" trag piesa de pe masa masa  " <<endl;
            valnou=masa[ms-1].valp;
            player[k-1][22].valp =valnou ;
            tipnou=masa[ms-1].tipp;
            player[k-1][22].tipp = tipnou;
}

int NumaraV(int k) // numara piesele de pe tabla pentru jucatorul k
{
int nrp=0;
for(int j=0; j<=22; j++)
 {
    if(player[k-1][j].valp!="0")
    {
        nrp++;
    }
 }
// cout<<" nr calculat de piese pe tabla "<<nrp;

return nrp;
}
//  /*
 void SetColor(int ForgC)
 {
     WORD wColor;

      HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
      CONSOLE_SCREEN_BUFFER_INFO csbi;

                       //We use csbi for the wAttributes word.
     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
                 //Mask out all but the background attribute, and add in the forgournd     color
          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;
 }
void AfisareTablaJucatorColor(int kt)
{
  system("CLS");
  cout<<" TABLA DE JOC jucator " << player[kt-1][0].NumeJucator<< endl;
  for(int i=0;i<=22;i++){
        if (player[kt-1][i].tipp=="rosu"){
     SetColor(4);
      cout<<"Poz."<<player[kt-1][i].pozPeTabla<< " # " << player[kt-1][i].valp  <<" & "<< player[kt-1][i].tipp<< endl;
        }
        if (player[kt-1][i].tipp=="negru"){
     SetColor(5);
      cout<<"Poz."<<player[kt-1][i].pozPeTabla<< " # " << player[kt-1][i].valp  <<" & "<< player[kt-1][i].tipp<< endl;
        }
        if (player[kt-1][i].tipp=="albastru"){
     SetColor(1);
      cout<<"Poz."<<player[kt-1][i].pozPeTabla<< " # " << player[kt-1][i].valp  <<" & "<< player[kt-1][i].tipp<< endl;
        }
        if (player[kt-1][i].tipp=="galben"){
     SetColor(6);
      cout<<"Poz."<<player[kt-1][i].pozPeTabla<< " # " << player[kt-1][i].valp  <<" & "<< player[kt-1][i].tipp<< endl;
        }
        if (player[kt-1][i].tipp=="Joly Joker"){
     SetColor(2);
      cout<<"Poz."<<player[kt-1][i].pozPeTabla<< " # " << player[kt-1][i].valp  <<" & "<< player[kt-1][i].tipp<< endl;
        }
        if (player[kt-1][i].tipp=="   "){
     SetColor(7);

      //cout<<"Poz."<<player[kt-1][i].pozPeTabla<< " # " << player[kt-1][i].valp  <<" & "<< player[kt-1][i].tipp<< endl;
      cout<<"Poz."<<player[kt-1][i].pozPeTabla<< " # " << endl;
        }
}
cout << endl;
SetColor(7);
}

int NumaraEtal(int et) // numara piesele in grupa etalata de pe tabla pentru jucatorul k
{
int nrp=0;
string valEtalata;
//cout<<"Etalarea " << et;
for(int j=0; j<=13; j++)
 {
    valEtalata = etalare[et][j].valp;
 //   cout<<" ve "<< valEtalata<<endl;
    if (valEtalata!="0")
     {
 //     cout<<" / "<< etalare[et][j].valp<<endl;
      nrp++;
     }
     else{
 //       cout<<"#"<<endl;
     }
 }
// cout<<" nr calculat de piese din grupa etalata pe tabla "<<nrp;

return nrp;
}
// */


int evaluareEtalare1(int nrEtalare,int nrPozPiesa, int NrPieseEtalate)
{
  int a,b,pozStart=0,pozC,j;
  int caz,Ok;
  string culoare1,culoare2,culoare3;
  do{
      a = ConvertS(etalare[nrEtalare][pozStart].valp);
      pozStart++;
    }
  while( a==14);     // daca incepe cu jolly
  b = ConvertS(etalare[nrEtalare][pozStart].valp);
  culoare1 = etalare[nrEtalare][pozStart].tipp;
  pozC=pozStart+1;
  do{
      culoare2 = etalare[nrEtalare][pozC].tipp;
      pozC++;
    }
  while( culoare2 =="Joly Joker");    // daca nu-i jolly
  pozC++;
  do{
       culoare3 = etalare[nrEtalare][pozC].tipp;
       pozC++;
      }
  while( culoare3 =="Joly Joker");     // daca nu-i jolly

  if (culoare1==culoare2 && culoare1==culoare3)
      {
      caz=1;
      }
  else
     { caz=2; }

 switch (caz)
 {
  case 1:   // aceeasi culoare
     {
       pozStart=0;
       do{   // daca este jolly
            a = ConvertS(etalare[nrEtalare][pozStart].valp);
            pozStart++;
         }
       while( a==14);

       do{ // daca este jolly
            b = ConvertS(etalare[nrEtalare][pozStart].valp);;
            j++;
         }
       while( a==14);
          a = ConvertS(etalare[nrEtalare][pozStart].valp);
          b = ConvertS(etalare[nrEtalare][pozStart+1].valp);;

       if (a==b-1) // sir crescator
        {
         Ok=0;
         for(int j=pozStart;j<=NrPieseEtalate-1;j++) // caut suitele de la 1 la 14 de aceeasi culare
           {
             a = ConvertS(etalare[nrEtalare][j].valp);
             do{// daca este jolly
                a = ConvertS(etalare[nrEtalare][j].valp);
                j++;
                }
             while( a==14);
             do{
                b = ConvertS(etalare[nrEtalare][j+1].valp);;
                j++;
                }
             while( a==14);
             a = ConvertS(etalare[nrEtalare][j].valp);
             b = ConvertS(etalare[nrEtalare][j+1].valp);
             if (a==b-1) { Ok=0;}
             else {Ok=1;}

           }
            if (Ok==0) { return 0;}
            else       { return 1;}
         }
    else
         {
            if (a==(b+1)) // sir crescator
            {
             Ok=0;
             for(int j=pozStart;j<=NrPieseEtalate-1;j++) // caut suitele de la 1 la 14 de aceeasi culare
               {
                 a = ConvertS(etalare[nrEtalare][j].valp);
                 do{ // daca este jolly
                     a = ConvertS(etalare[nrEtalare][j].valp);
                     j++;
                   }
                 while( a==14);
                 do{
                     b = ConvertS(etalare[nrEtalare][j+1].valp);;
                     j++;
                     }
                 while( a==14);
                 a = ConvertS(etalare[nrEtalare][j].valp);
                 b = ConvertS(etalare[nrEtalare][j+1].valp);
                if (a==b+1) { Ok=0;}
                else        { Ok=1;}

               }

              if (Ok==0) { return 0;}
              else       { return 1;}
            }
         }

    break;
}
  case 2:   // culori diferite
  {
    pozStart=0;
       do{  // daca este jolly
             a = ConvertS(etalare[nrEtalare][pozStart].valp);
             pozStart++;
         }
       while( a==14);

       do{
             b = ConvertS(etalare[nrEtalare][pozStart].valp);;
             j++;
         }
       while( a==14);
          a = ConvertS(etalare[nrEtalare][pozStart].valp);
          b = ConvertS(etalare[nrEtalare][pozStart+1].valp);;

    if (a==b-1) // sir crescator
     {
       Ok=0;
       for(int j=pozStart;j<=NrPieseEtalate-1;j++) // caut suitele de la 1 la 14 de aceeasi culare
         {
           a = ConvertS(etalare[nrEtalare][j].valp);
          do{  // daca este jolly
               a = ConvertS(etalare[nrEtalare][j].valp);
               j++;
            }
          while( a==14);
          do{
               b = ConvertS(etalare[nrEtalare][j+1].valp);;
               j++;
            }
          while( a==14);
          a = ConvertS(etalare[nrEtalare][j].valp);
          b = ConvertS(etalare[nrEtalare][j+1].valp);

          if (a==b-1) { Ok=0;}
          else {Ok=1;}
          Ok++;
         }
      if (Ok==0) { return 0;}
      else       { return 1;}
      }
    else
      {
       if (a==b+1) // sir crescator
        {
          Ok=0;
          for(int j=pozStart;j<=NrPieseEtalate-1;j++) // caut suitele de la 1 la 14 de aceeasi culare
           {
             a = ConvertS(etalare[nrEtalare][j].valp);
             do{ // daca este jolly
                a = ConvertS(etalare[nrEtalare][j].valp);
                j++;                }
             while( a==14);
             do{
                b = ConvertS(etalare[nrEtalare][j+1].valp);;
                j++;
                }
             while( a==14);
             a = ConvertS(etalare[nrEtalare][j].valp);
             b = ConvertS(etalare[nrEtalare][j+1].valp);
             if (a==b+1) { Ok=0;}
             else        { Ok=1;}

            }
            if (Ok==0) { return 0;}
            else       { return 1;}
          }
        }

    break;
  }
 }
  //--------------------------
//  apasaEnter();
}
//---------------------------


int evaluareEtalare2(int nrEtalare,int nrPozPiesa, int NrPieseEtalate)           // daca suita de etalare este ordonata descrescator  suita de culori identice
{
   int pozStart=0,a,b,j=0,Ok;
    a = ConvertS(etalare[nrEtalare][pozStart].valp);
  if (a==14)
    {
    do{    // daca este jolly
             a = ConvertS(etalare[nrEtalare][pozStart].valp);
           // cout<< "1 a ["<<pozStart<<"]= "<<a<<endl;
             pozStart++;
      }
    while( a==14);
    }
    b = ConvertS(etalare[nrEtalare][pozStart+1].valp);
    if (b==14)
    {
    do{
             b = ConvertS(etalare[nrEtalare][j+1].valp);
          //   cout<< "2 b ["<<pozStart<<"]= "<<a<<endl;
             j++;
      }
    while( b==14);
    }
       //a = ConvertS(etalare[nrEtalare][pozStart].valp);
       //b = ConvertS(etalare[nrEtalare][pozStart+1].valp);;
      // cout<< "3 a ["<<pozStart<<"]= "<<a<<endl;
     //  cout<< "4 b ["<<pozStart+1<<"]= "<<b<<endl;
    if (a==b-1) // sir crescator
      {
        Ok=0;
      //  cout<< "analiza tip 2 pentru "<< NrPieseEtalate-1<<endl;
        for(int j=pozStart;j<=NrPieseEtalate-1;j++) // caut suitele de la 1 la 14 de aceeasi culare
        {

           a = ConvertS(etalare[nrEtalare][j].valp);
     //      cout<< "5 a ["<<j<<"]= "<<a<<endl;
         if(a==14)
          {
           do{    // daca este jolly
                a = ConvertS(etalare[nrEtalare][j].valp);
     //            cout<< "6 a ["<<j<<"]= "<<a<<endl;
                j++;
             }
           while( a==14);
          }
              b = ConvertS(etalare[nrEtalare][j+1].valp);;
     //         cout<< "6 b ["<<j<<"]= "<<b<<endl;
         if(b==14)
          {
           do{
                b = ConvertS(etalare[nrEtalare][j+1].valp);;
     //           cout<< "7 b ["<<j<<"]= "<<b<<endl;
                j++;
             }
           while( b==14);
          }
           a = ConvertS(etalare[nrEtalare][j].valp);
           b = ConvertS(etalare[nrEtalare][j+1].valp);
      //     cout<< "8 OK ="<<Ok<<""<<endl;
      //     cout<< "9 a ["<<j<<"]= "<<a<<endl;
      //     cout<< "10 b ["<<j<<"]= "<<b<<endl;

           if (a==(b-1)) {
      //         cout<< "10x a ["<<j<<"]= "<<a<<endl;
     //          cout<< "10x b-1 ["<<j<<"]= "<<b-1<<endl;
                Ok=0;}
           else {
     //          cout<< "10y b-1 ["<<j<<"]= "<<b-1<<endl;
               Ok=1;}

     //    cout<< "11 OK ="<<Ok<<"  " <<endl;
 //        apasaEnter;
         }
       if (Ok==0) { return 0;}
        else       { return 1;}
      }
     else
         {
          if (a==b+1) // sir crescator
            {
              Ok=0;
              for(int j=pozStart;j<=NrPieseEtalate-1;j++) // caut suitele de la 1 la 14 de aceeasi culare
                {
                 a = ConvertS(etalare[nrEtalare][j].valp);
      //           cout<< "12 a ["<<j<<"]= "<<a<<endl;

                 do{   // daca este jolly
                     a = ConvertS(etalare[nrEtalare][j].valp);
      //           cout<< "13 b ["<<j<<"]= "<<b<<endl;
                     j++;}
                 while( a==14);
                 do{
                     b = ConvertS(etalare[nrEtalare][j+1].valp);
      //            cout<< "14 b ["<<j<<"]= "<<b<<endl;
                     j++;
                   }
                 while( a==14);
                 a = ConvertS(etalare[nrEtalare][j].valp);
                 b = ConvertS(etalare[nrEtalare][j+1].valp);
      //           cout<< "15 a ["<<j<<"]= "<<a<<endl;
      //           cout<< "16 b ["<<j<<"]= "<<b<<endl;
                 if (a==b+1) { Ok=0;}
                  else        { Ok=1;}

       //          cout<< "17 OK ="<<Ok<<"]"<<endl;
                }
               if (Ok==0) { return 0;}
                else       { return 1;}
            }
          }
//    apasaEnter();
}


int evaluareEtalare3(int nrEtalare,int nrPozPiesa, int NrPieseEtalate)// if 4    // daca suita de etalare este ordonata crescator suita de culori  identice
{
       int pozStart=0,a,b,j,Ok;
     pozStart=0;
     do{   // daca este jolly
          a = ConvertS(etalare[nrEtalare][pozStart].valp);
          pozStart++;
       }
     while( a==14);

     do{
          b = ConvertS(etalare[nrEtalare][pozStart].valp);;
          j++;
       }
     while( a==14);
     a = ConvertS(etalare[nrEtalare][pozStart].valp);
     b = ConvertS(etalare[nrEtalare][pozStart+1].valp);;

  if (a==b-1) // sir crescator
     {
      Ok=0;
      for(int j=pozStart;j<=NrPieseEtalate-1;j++) // caut suitele de la 1 la 14 de aceeasi culare
        {
          a = ConvertS(etalare[nrEtalare][j].valp);
          do{   // daca este jolly
              a = ConvertS(etalare[nrEtalare][j].valp);
              j++;
            }
          while( a==14);
          do{
              b = ConvertS(etalare[nrEtalare][j+1].valp);;
              j++;
            }
          while(a==14);
          a = ConvertS(etalare[nrEtalare][j].valp);
          b = ConvertS(etalare[nrEtalare][j+1].valp);
          if (a==b-1) { Ok=0;}
          else {Ok=1;}

         }
      if (Ok==0) { return 0;}
      else       { return 1;}
     }
      else
          {
            if (a==b+1) // sir crescator
              {
               Ok=0;
               for(int j=pozStart;j<=NrPieseEtalate-1;j++) // caut suitele de la 1 la 14 de aceeasi culare
                 {
                   a = ConvertS(etalare[nrEtalare][j].valp);

                   do{    // daca este jolly
                        a = ConvertS(etalare[nrEtalare][j].valp);
                        j++;
                     }
                   while( a==14);
                   do{
                        b = ConvertS(etalare[nrEtalare][j+1].valp);;
                        j++;
                     }
                   while( a==14);
                   a = ConvertS(etalare[nrEtalare][j].valp);
                   b = ConvertS(etalare[nrEtalare][j+1].valp);
                   if (a==b+1) { Ok=0;}
                   else        { Ok=1;}
                   Ok++;
                 }
               if (Ok==0) { return 0;}
               else       { return 1;}
              }
           }

 // apasaEnter();
}

// ----------------------------------------------------

int evaluareEtalare4(int nrEtalare,int nrPozPiesa, int NrPieseEtalate)           // daca este suita de aceleasi valori de culori diferite
{
 int a,b,pozStart=0,pozC;
 int caz,Ok,j;
  string culoare1,culoare2;
  pozStart=0;

  if (a==14)
    {
    do{    // daca este jolly
             a = ConvertS(etalare[nrEtalare][pozStart].valp);
 //            cout<< "1 a ["<<pozStart<<"]= "<<a<<endl;
             pozStart++;
      }
    while( a==14);
    }
    b = ConvertS(etalare[nrEtalare][pozStart+1].valp);
    if (b==14)
    {
    do{
             b = ConvertS(etalare[nrEtalare][j+1].valp);
 //            cout<< "2 b ["<<pozStart<<"]= "<<a<<endl;
             j++;
      }
    while( b==14);
    }
     b = ConvertS(etalare[nrEtalare][pozStart+1].valp);
     culoare2 = etalare[nrEtalare][pozStart+1].tipp;

    if (a==b && culoare1 != culoare2) // conditia sa avem aceeasi valoare dar culori diferite
    {
      Ok=0;
      for(int j=pozStart+1;j<=NrPieseEtalate-1;j++) // caut suitele de la 1 la 14 de aceeasi culare
         {
          do{
             b = ConvertS(etalare[nrEtalare][j].valp);;
             j++;
            }
          while( b==14);

//          cout<< "16 b ["<<j<<"]= "<<b<<endl;
          b = ConvertS(etalare[nrEtalare][j].valp);
          culoare2 = etalare[nrEtalare][j].tipp;
          if (a==b && culoare1 != culoare2)
             { Ok=0;}
          else
             { Ok=1;}

         }
      if (Ok==0) { return 0;}
      else       { return 1;}
    }
  else
    { return 1;}
 // apasaEnter();
}








int CuloarePiesa(string culoarePiesa)
{
    if (culoarePiesa=="rosu") { return 4;}
    if (culoarePiesa=="negru"){ return 5;}
        if (culoarePiesa=="albastru") {return 1;}
        if (culoarePiesa=="galben")   {return 6;}
        if (culoarePiesa=="Joly Joker"){return 2;}
                if (culoarePiesa=="   "){return 7;}
}




int IWINGame(int nrJk)
{
  int ii=0, OK[10],nr,i,n;
 // system("CLS");
 nr=NumaraV(nrJk);
 //cout << nr<<endl;

  if(NumaraV(nrJk)==14)   // identificare etalari jucator jk
  {
   //  cout<<"etalare "<< ii;
     i=0;
     for(int j=0;j<=22;j++)
    {

         if (player[nrJk-1][j].valp!="0")
            {

              SetColor (CuloarePiesa(player[nrJk-1][i].tipp));
              etalare[ii][i].tipp=player[nrJk-1][j].tipp;
              etalare[ii][i].valp=player[nrJk-1][j].valp;
   //         cout<<" # "<< ii <<"/"<<i<<". "<< etalare[ii][i].valp<<" - "<<etalare[ii][i].tipp<< " / "<<endl;
              i++;
            }
         else
            {
             n=i;
             SetColor(7);
             ii++;
             i=0;
               for (int kk=n;kk<=22;kk++)
               {
                 etalare[ii-1][kk].tipp="   ";
                 etalare[ii-1][kk].valp="0";
   //              cout<<" # "<< ii-1 <<"/"<<kk<<". "<< etalare[ii-1][kk].valp<<" - "<<etalare[ii-1][kk].tipp<< " / "<<endl;
               }
             }

    }
  }
//cout<<"-----------------"<<endl;
// analiza etalari

int NrEtalari=ii-1;
int ij=0; // numarul etalarii
do
{  OK[ij] =0;
   int NrPieseEtalate=NumaraEtal(ij);
  // cout<< "NrPieseEtalate" << NrPieseEtalate<<endl;
   if (NrPieseEtalate==14)
    {
     OK[ij]=evaluareEtalare1(ij,0,NrPieseEtalate);        // daca suita de etalare este ordonata crescator  suita de culori diferite
    }
 int j=0;
   if (NrPieseEtalate>2 && NrPieseEtalate< 12) // if 1
    {
 //   do{
       int a = ConvertS(etalare[ij][j].valp);
       int b = ConvertS(etalare[ij][j+1].valp);
       if (a == 14 || b == 14)     // if 2  // daca prima sau primele 2 carti sunt joljy
         {
          j++;
          if (NrPieseEtalate==j)
                 {
                  OK[ij]=0;
                 }
         }

       else {
       if (a==b-1)   // if 3   // daca suita de etalare este ordonata descrescator  suita de culori identice
         {
           OK[ij]=evaluareEtalare2(ij, j, NrPieseEtalate-1);
    //       cout<<" OK [ "<<ij<<"]=" << OK[ij]<<endl;
         }
       else
         {
          if (a==b+1) // if 4    // daca suita de etalare este ordonata crescator suita de culori  identice
             {
              OK[ij]=evaluareEtalare3(ij, j, NrPieseEtalate);
             }
          else
             {

              OK[ij]=evaluareEtalare4(ij, j, NrPieseEtalate-1); // daca este suita de aceleasi valori de culori diferite
      //        cout<<" OK [ "<<ij<<"]=" << OK[ij]<<endl;

             }      // end if 4
         } // end if 3
        } // end if 2
    //  } while(j<2);
    } // end if 1

    //cout<< "evaluare etalare nr " << ij <<endl;
   // apasaEnter();
ij++;
}

while(ij!=NrEtalari);

 // calculez nr de ok -uri -
int results = 0;
for(int ne=0;ne<=ij-1;ne++)
 {
 results=results+OK[ne];
 //cout<<"results OK"<<results<<endl;
 } // end for
  if (results==0)
   {
int cc=0;
    do{
     for (int c=0;c<8;c++)
      {
       system("CLS");
       SetColor(c);
       cout<<"      ----------------------------------------------------- "<<endl;
       cout<<endl;
       cout<<endl;
       cout<<endl;
       cout<<" Jucatorul "<<player[nrJk-1][0].NumeJucator << " a castigat aceasta runda" <<endl;
       cout<<endl;
       cout<<"            FELICITARI !!! "<<endl;
       cout<<endl;
       cout<<"                            Congratulation !!! "<<endl;
       cout<<endl;
       cout<<"                                            Great job !!! "<<endl;
       cout<<endl;
       cout<<"      ----------------------------------------------------- "<<endl;
       cc++;
       delay(200);
       }
      } while(cc<=24);
       apasaEnter();

       cout<<"      ----------------------------------------------------- "<<endl;
       cout<<endl;
       cout<<endl;
       cout<<endl;
       cout<<"  JOC INCHEIAT ! " <<endl;
       cout<<endl;
       cout<<"            Apasa orice tasta pentru a continua "<<endl;
       cout<<endl;
       cout<<" "<<endl;
       cout<<endl;
       cout<<"                                         Bye !  "<<endl;
       cout<<endl;
       cout<<"      ----------------------------------------------------- "<<endl;

    exit(0);
   } // end if
   else
    {
    cout<<" Jucatorul <<player[nrJk][0].NumeJucator" << " nu a castigat aceasta runda" <<endl;
    cout<<endl;
    cout<<"   eroare de aranjare  etalari"<<endl;
    cout<<endl;
    cout<<"                 rearanjati piesele conform regulilor jocului !!! "<<endl;
    cout<<endl;
    cout<<"                                   Revedeti cu atentie modul de etalare !!! "<<endl;
    cout<<endl;
    cout<<"      ----------------------------------------------------- "<<endl;
    apasaEnter();
    return 4;
    }

 } // end for


void startJoc(int kt,int nrJoc) //kt este nr de jucatori, nrJoc nr jocului activ in sesiune pentru utilizare viitoare
{

int raspuns,comanda,m=1,i;
int mmax,nr,flag1=0,flag2=1,flagNext=0;
int jk;
//for(int jj=1;jj<=kt;jj++){AfisareTablaJucator(jj);}
//apasaEnter();

      // cout<<"Start joc pas 2"<<endl;
      // stabilire ordine jucatori pentru mai multe jocuri
      //afiseaza Tabla jucator
do{
for(i=1;i<=kt;i++)
{
  //  cout<<"Start joc pas 3 + "<< i  <<endl;

    system("CLS");
       cout<<"               Afisati TABLA DE JOC  pentru " << player[i-1][0].NumeJucator<<" ?"<<endl;
        cout <<endl;
        cout <<"   introduceti raspusul / tasteaza da / nu . Apasa Enter pentu a valida decizia \n"<<endl<<endl;
     nr = NumaraV(i);//numar piesele de pe tabla
     if(nr>14)
       {
           flag1=1;
        }
        else{
           flag1=0;
        }
     do{
        nr=0;
        if(raspuns ==1){
          do{
           // AfisareTablaJucator(i);
            AfisareTablaJucatorColor(i);
            cout<<endl;
            cout<<"Astept o comanda :"<<endl;
            cout<<"  #move(muta piesa) | #Pull (trage piesa) | #Drop (da piesa) | #next (urmatorul jucator)  |  #iWin inchide joc  |#demo}" <<endl;
            comanda=Comanda();

            if (comanda==1){
                cout<<"muta piesa "<<endl;
                MutaPiesa(i) ;
               // pressBtn();
            }

             if (comanda==2){  // decartare piesa de pe tabla
                nr = NumaraV(i);//numar piesele de pe tabla
                if(nr>14)
                  {
                    AruncPiesa(i,kt);
                    nr=0;
                    flag1=1;
                  }
                }
             if (comanda==3)
              {
                if (flag1==0)
                 {
                    cout<<"trage o piesa de pe masa"<<endl;
                    nr = NumaraV(i);//functie pentru numarat piesele de pe tabla
                   // cout<<"nr piese pe tabla "<<nr<<endl;
                   if(nr<=14)
                     {
                       nr=0;
                       TragePiesa(i , m);
                       flag2=1;
                       m++;
                       mmax=i*14+1;
                       if(m>mmax)
                        {
                         cout<<"Jocul nu poate fi incheiat"<<"Nu mai exista piese pe masa!"<<endl;
                         cout<<"REMIZA"<<endl;
                        }
                      }
                    flag1=1;
                  }
                  else{
                       // nr = NumaraV(i);//functie pentru numarat piesele de pe tabla
                       // cout<<"aveti "<< nr <<" piese pe tabla "<<endl;
                       cout<<"Nu mai aveti aceasta optiune valida in acest tur"<<endl;
                       }

                  pressBtn();
               }



             if (comanda==4){

                cout<<"trec la jucatorul urmator "<<endl;
                nr = NumaraV(i);//numar piesele de pe tabla
                if (flag1=0){
                    cout<<"trebuie sa tragi o carte "<<endl;
                }
                 else {
                  if(nr>14)
                  {
                    cout<<"Aveti obligatia de a depune o carte pe masa pentru a continua"<<endl;
                    int ap = AruncPiesa(i,kt);
                    nr=0;
                    if (ap!=0){
                            comanda=6;
                            flag1=1;
                            }
                  }
                  else{
                        if(flag2==0)
                        {
                            cout<<"trebuie sa tragi o piesa de pe masa"<<endl;
                            apasaEnter;
                        }
                        else {
                        comanda=6;
                        flag2=1;
                        }
                        }
                        flagNext=1;
                        i++;
                        system("CLS");
                 //pressBtn();
                 }

                }

             if (comanda==5){
                cout<<" inchide joc etalare "<<endl;
                IWINGame(i);
                pressBtn();
                }
             if (comanda==7){
                cout<<" Joc demonstrativ ? "<<endl;

                raspuns = pressBtn();
                 if(raspuns ==1){
                 testJoc1(i);
                                }
             }
             }
            while(comanda!=6);}

               cout<< "Este randul la joc pentru   >>  "<<i <<"  "<<endl;
               cout<<endl;
               cout<< " Afisez tabla de joc ?"<<endl;
               cout<<endl;
//               cout<<"   Raspunsul tau este  [da]/[nu] ?"<< endl;
               jk=i;
               raspuns = pressBtn();
               if(raspuns ==1){

               // flagNext=0;
               }
             else
               {
                 i=jk-1;
               }
        }
    while (raspuns!=2); // 2 este raspuns Nu se va avea in vedere continuarea numai dupa decartare piesa 15
        flag1=0;
      }
     }while(m<=(106-kt*14+1));// a fost trasa ultima piesa din gramada

 // continuam cu alt joc?
}


int main()
{
    int k=1;
    int raspuns;
    nrJoc=1;

    system("CLS");
    cout<< "# --------------------------# "<<endl;
    cout<<endl;
    cout<< " Program  Joc de REMI"<<endl;
    cout<<endl;
    cout<<"  Versiune .V.01 Beta 2023"<< endl;
    cout<<endl;
    cout<<endl;
    cout<< " Program realizat de"<<endl;
    cout<<endl;
    cout<<"                Elev: BOANTA Mario Andrei"<< endl;
    cout<<"                Elev: DRAGHICI Laurian"<< endl;
    cout<<"                Colegiul Gh.M. Murgoci - Braila"<< endl;
    cout<<"                                     CLS - XI-B"<< endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
  do{
    AmestecPiese();
// introducere nr de jucatori
    do{
      cout <<"nr de jucatori = " ;cin >> k;
      system("CLS");
     }
     while (k<2 || k>4);
//  introducere nickname jucatori
     // de generat functia pentru introducerea numele>>>   getPlayerName(k);
     // default numele celui de al doilea jucator va fi PCPlayer sau ceva de genul human || computer player

    //getPlayerName(k);
// functie distribuire piese catre jucatori;
    DistribuirePiese(k);
    //testJoc1();
// initiere joc;
    startJoc(k,nrJoc);
    system("CLS");
    cout<< " Mai jucam o data ? da/nu  - raspunsul este - " <<endl;
    cout <<"            Tastati da /nu si Apasa Enter pentu a valida decizia \n";

        raspuns = pressBtn();
        if(raspuns ==1){
        nrJoc++;

        }
    }while (raspuns!=2);

    return 0;

}
