#include <iostream>
using namespace std;

int main(){
    /*i++, i+=1 i = i+1
    int i = 0;
    int contar =0;
    for(i=4;i<=8;i+=2){ //4 hasta 8 
        cout<<i<<endl;
        contar++;
    }
    
    cout<<"i fuera: "<<i<<endl;
    cout<<"Ciclos: "<<contar<<endl;
    */

   /*for (int i=10;i>0;i--){
    cout<<i<<endl;
   }

   for (int i=0;i<10;i++){
    if (i==5){
        cout<<"if"<<endl;
        break;
        //continue;
    }
    cout<<i<<endl;
   }
   
    cout<<"Fuera del for"<<endl;

    */
/*
   for (float i = 0;i<1;i+=0.1){
    cout<<i<<endl;
   }
    cout<<"Fuera del for"<<endl;

    //int 4 bytes
    int tam = 0;
    int datos [] = {10,40,100,250,5000};
    tam = sizeof(datos)/sizeof(datos[0]);
    // cout<<tam<<endl;

    for (int i = 0; i < tam; i++)
    {
        cout<<datos[i]<<endl;
    }
    
*/

  /*  int datos[]={10,40,100,250,5000};

    for (int i:datos){
        cout<<i<<endl;
    }
    */

int inicio=0,fin=0,res=0;
cout <<"Ingrese tabla inicio:";
cin>>inicio;
cout <<"Ingrese tabla fin:";
cin>>fin;

for (int rango=inicio; rango<=fin;rango++){
	//cout<<i<<endl;
	for (int i=1; i<=10;i++){
		//cout<<ii<<endl;
	 res=rango*i;
     cout<<rango<<" X "<<i<<" = "<<res<<endl;
	 cout<<endl;
	}
}
 
 /*
int i=0;
while (i<5){
	cout<<i<<endl;
	i++;
}
int a=5;
while (a>0){
	cout<<a<<endl;
	a--;
}
*/

int ii=0;
do{
	ii++;
	cout<<"do while: "<<ii<<endl;
} while(ii<5);

char r;
do{
	cout<<"Desea ingresar otro valor: (s/n)"<<endl;
	cin>> r;
} while(r=='s' || r=='S');

system("pause");
}