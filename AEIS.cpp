#include<iostream>
#include<fstream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;

int id;
int i;
int p=0;
int c=0;

struct person{
char name[100];
char iprice[100];
char months[100];
char pmonth[100];
char fprice[100];
char proname[100];
char pid[100];

};

void tmains();
void mains();
void src();
void rep();
void ps();
void cg();
void src1();
void src3();
void src2();
void led();
void mp();
void mcy();
void r();
void dis();
void edit();
void edit1();
void edit2();
void edit3();
void add();
void del();
person per[100];
int total=0;
int main(){

          char ch;
cout<<"                "<<endl;
                 cout << "        *"<<"               ************************************************"<< "        *"<< endl <<endl;
                cout << "        *"<<  "                  AFZAL ELECTRONICS INSTALLMENT SYSTEM "<< "                *"<<endl<<endl;
                  cout << "        *"<<"              ************************************************"<< "         *"<<endl<<endl;
cout<<"             "<<endl<<endl<<endl;
while(1){
cout<<"                              1. Manage Data "<<endl<<endl;
cout<<"                              2. Search Data "<<endl<<endl;
cout<<"                              3. Reports Of Afzal Electronics "<<endl<<endl;
cout<<"                              4. Exit the Program "<<endl;

ch=getch();
system("cls");
switch(ch){
        case '1':
            mains();
            break;
        case '2':
            src();
            break;
        case '3':
            rep();
            break;

       case '4':
    
       exit(0);
       break;

}
}


    return 0;
}

void mains(){
int sc;
    cout<<"1. Add data "<<endl;
    cout<<"2. update "<<endl;
    cout<<"3. Delete "<<endl;
    cout<<"4. Display"<<endl;
    cout<<"5. Exit"<<endl;
    cin>>sc;
switch(sc){
	case 1:
	add();
     break;
     case 2:
     	edit();
     	break;
     	case 3:
     		
     		break;
     		case 4:
     			dis();
     			break;
     		case 5:
     			exit(0);
}
}
void add(){
	int item,num;

do{

        cout<<"Enter the Data of Customer : "<<total+1<<endl<<endl;
        cout<<"Enter customer Name : "<<endl;
        cin>>per[total].name;
system("cls");
cout <<"                             ************************************************"<< endl ;
     
      cout<<"                                     -----Select the Product-----"<<endl;
       cout <<"                             ************************************************"<< endl <<endl<<endl;
       cout<<"1.  LED TV "<<endl;
       cout<<"2.  Mobile Phone "<<endl;
       cout<<"3.  MotorCycle "<<endl;
       cout<<"4.  Refrigerator "<<endl;

       cin>>item;
       system("cls");
      switch(item){
     case 1:
         {
          led();
     break;
         }
     case 2:
         {
           mp();
       break;
         }

     case 3:
         {
          mcy();
        break;
         }

     case 4:
         {
               r();
        break;
         }

     default:
        cout<<"-----Error-----"<<endl;
      }
      cout<<"You Want To Enter More Customers Data ? (1/0)"<<endl;
      cin>>num;

}while(num!=0);

   }

void led(){
    int brand,month,price;
    int paypermonth,subtotal,installment,rate,totaln;
    char key;

cout<<"1. LG 55 inches smart ultra HD 4K OLED TV  (Rs 40,900) "<<endl;
cout<<"2. Samsung 40 Full HD Smart TV  (Rs 59,900) "<<endl;
cout<<"3. Sony 32 HD MART LED TV  (Rs 39,900) "<<endl;
cout<<"4. Panasonic 32 Smart HD LED TV  (Rs 39,500) "<<endl<<endl;
cout << "Which brand you will buy? " << endl;
cin >> brand;

cout<<"So You want to Buy---->  ";
switch(brand){
case 1:{
cout<<" LG 55 inches smart ultra HD 4K OLED TV "<<endl<<endl;
break;
}
case 2:{
cout<<" Samsung 40 Full HD Smart TV "<<endl<<endl;
break;
}
case 3:{
cout<<" Sony 32 HD MART LED TV "<<endl<<endl;
break;
}
case 4:{
cout<<" Panasonic 32 Smart HD LED TV "<<endl<<endl;
break;
}
default:

cout<<"  Nothing."<<endl;
}
if(brand==1 || brand==2 || brand==3 || brand==4 )
{
	cout << "Insert the number of months for installment : "<<endl;
		cin >> month;
system("cls");

        switch(brand){
case 1:
cout<<" Ecostar 32 SMART Android HD LED TV "<<endl<<endl;
price= 37900;
id= 1;
break;

case 2:
cout<<" Samsung 40 Full HD Smart TV "<<endl<<endl;
id= 2;
price= 59900;
break;

case 3:
cout<<" Sony 32 HD SMART LED TV "<<endl<<endl;
id= 3;
price= 39900;
break;

case 4:
cout<<" Panasonic 32 Smart HD LED TV "<<endl<<endl;
id= 4;
price= 37500;
break;
        }
subtotal=price/month;
rate=subtotal*0.1;
installment=subtotal+rate;
totaln=installment*month;
paypermonth=totaln/month;
cout<<"Product ID: "<<id<<
endl;
cout << "Initial price: Rs " << price << endl;
cout<<"Final Price : Rs "<<totaln<<endl;
cout << "Installment: " << month << " month(s)" << endl;
cout << "Installment you must pay per month : Rs " << paypermonth << " month(s)" <<  endl;
p=p+1;
c=c+1;
ofstream myfile;
myfile.open("umair.txt",ios::app);

   cout<<endl<<"Enter the Initial Price Written above : ";
cin>>per[total].iprice;
cin.ignore();
cout<<"Enter the Product Name Customer select : ";
    cin>>per[total].proname;
    cin.ignore();
cout<<"Enter the Final Price Written above : Rs ";
cin>>per[total].fprice;
cin.ignore();
cout << "Enter the Installment month(s) Written above: " ;
cin>>per[total].months;
cin.ignore();
cout << "Enter the Installment customer must pay per month written above: Rs ";
cin>>per[total].pmonth;
cin.ignore();
cout<<"Enter Product ID Written Above : ";
cin>>per[total].pid;
myfile<<"                Product ID : "<<per[total].pid<<endl;
myfile<<"                Customer Name : "<<per[total].name<<endl;
myfile<<"                Product Name : "<<per[total].proname<<endl;
myfile << "                Initial price: Rs " << per[total].iprice<< endl;
myfile<<"                Final Price : Rs "<<per[total].fprice<<endl;
myfile << "                Installment: " << per[total].months << " month(s)" << endl;
myfile << "                Installment you must pay per month : Rs " << per[total].pmonth<< " month(s)" <<  endl<<endl<<endl;
myfile.close();
 total++;
}
}
void mp(){
 int brand,month,price;
    int paypermonth,subtotal,installment,rate,totaln;
    char key;

cout<<"1. Vivo S1 (Rs 32,900) "<<endl;
cout<<"2. Vivo S1 pro (Rs 40,000) "<<endl;
cout<<"3. Infinix Zero X (Rs 42,000) "<<endl;
cout<<"4. OPPO A76 (Rs 38,200) "<<endl<<endl;
cout << "Which Brand you will buy? " << endl;
cin >> brand;

cout<<"So You want to Buy---->";
switch(brand){
case 1:{
cout<<" Vivo S1 "<<endl<<endl;
break;
}
case 2:{
cout<<" Vivo S1 pro "<<endl<<endl;
break;
}
case 3:{
cout<<" Infinix Zero X "<<endl<<endl;
break;
}
case 4:{
cout<<" OPPO A76 "<<endl<<endl;
break;
}
default:
cout<<"  Nothing."<<endl;
}
if(brand==1 || brand==2 || brand==3 || brand==4 )
{
	cout << "Insert the number of months for installment: "<<endl;
		cin >> month;
		system("cls");
        switch(brand){
case 1:
cout<<" Vivo S1  "<<endl;
id= 04;
price= 32900;
break;

case 2:
cout<<" Vivo S1 pro "<<endl<<endl;
id= 05;
price=40000;
break;

case 3:
cout<<"  Infinix Zero X "<<endl<<endl;
id= 06;
price= 42000;
break;

case 4:
cout<<"  OPPO A76 "<<endl<<endl;
id= 07;
price= 38200;
break;
        }
subtotal=price/month;
rate=subtotal*0.1;
installment=subtotal+rate;
totaln=installment*month;
paypermonth=totaln/month;
cout<<"Product ID: "<<id<<endl;
cout << "Initial price: Rs " << price << endl;
cout<<"Final Price : Rs "<<totaln<<endl;
cout << "Installment: " << month << " month(s)" << endl;
cout << "Installment you must pay per month : Rs " << paypermonth << " month(s)" <<  endl;
p=p+1;
c=c+1;
ofstream myfile;
myfile.open("umair.txt",ios::app);

   cout<<endl<<"Enter the Initial Price Written above : ";
cin>>per[total].iprice;
cin.ignore();
cout<<"Enter the Product Name Customer select : ";
    cin>>per[total].proname;
    cin.ignore();
cout<<"Enter the Final Price Written above : Rs ";
cin>>per[total].fprice;
cin.ignore();
cout << "Enter the Installment month(s) Written above: " ;
cin>>per[total].months;
cin.ignore();
cout << "Enter the Installment customer must pay per month written above: Rs ";
cin>>per[total].pmonth;
cin.ignore();
cout<<"Enter Product ID Written Above : ";
cin>>per[total].pid;
myfile<<"                Product ID : "<<per[total].pid<<endl;
myfile<<"                Customer Name : "<<per[total].name<<endl;
myfile<<"                Product Name : "<<per[total].proname<<endl;
myfile << "                Initial price: Rs " << per[total].iprice<< endl;
myfile<<"                Final Price : Rs "<<per[total].fprice<<endl;
myfile << "                Installment: " << per[total].months << " month(s)" << endl;
myfile << "                Installment you must pay per month : Rs " << per[total].pmonth<< " month(s)" <<  endl<<endl<<endl;
myfile.close();
 total++;
}
}
void mcy(){
 int brand,month,price;
    int paypermonth,subtotal,installment,rate,totaln;
    char key;

cout<<"1. United US 70cc (Rs 45,500) "<<endl;
cout<<"2. Honda CD 70 (Rs 90,000) "<<endl;
cout<<"3. Road Prince 125 Euro 2(Rs 77,500) "<<endl;
cout<<"4. United 100cc (Rs 61,000) "<<endl<<endl;
cout << "Which variant you will buy? " << endl;
cin >> brand;

cout<<"So You want to Buy---->";
switch(brand){
case 1:{
cout<<"  United US 70cc "<<endl<<endl;
break;
}
case 2:{
cout<<" Honda CD 70 "<<endl<<endl;
break;
}
case 3:{
cout<<" Road Prince 125 Euro 2 "<<endl<<endl;
break;
}
case 4:{
cout<<" United 100cc "<<endl<<endl;
break;
}
default:
cout<<"  Nothing."<<endl;
}
if(brand==1 || brand==2 || brand==3 || brand==4 )
{

	cout << "Insert the number of months for installment: "<<endl;
		cin >> month;
system("cls");
        switch(brand){
case 1:
cout<<" United US 70cc  "<<endl<<endl;
id= 8;
price= 45500;
break;

case 2:
cout<<" Honda CD 70 "<<endl<<endl;
id= 9;
price= 90000;
break;

case 3:
cout<<" Road Prince 125 Euro 2 "<<endl<<endl;
id= 10;
price= 77500;
break;

case 4:
cout<<"  United 100cc "<<endl<<endl;
id= 11;
price= 61000;
break;
        }
subtotal=price/month;
rate=subtotal*0.1;
installment=subtotal+rate;
totaln=installment*month;
paypermonth=totaln/month;
cout<<"Product ID: "<<id<<endl;
cout << "Initial price: Rs " << price << endl;
cout<<"Final Price : Rs "<<totaln<<endl;
cout << "Installment: " << month << " month(s)" << endl;
cout << "Installment you must pay per month : Rs " << paypermonth << " month(s)" <<  endl;
p=p+1;
c=c+1;
ofstream myfile;
myfile.open("umair.txt",ios::app);

   cout<<endl<<"Enter the Initial Price Written above : ";
cin>>per[total].iprice;
cin.ignore();
cout<<"Enter the Product Name Customer select : ";
    cin>>per[total].proname;
    cin.ignore();
cout<<"Enter the Final Price Written above : Rs ";
cin>>per[total].fprice;
cin.ignore();
cout << "Enter the Installment month(s) Written above: " ;
cin>>per[total].months;
cin.ignore();
cout << "Enter the Installment customer must pay per month written above: Rs ";
cin>>per[total].pmonth;
cin.ignore();
cout<<"Enter Product ID Written Above : ";
cin>>per[total].pid;
myfile<<"                Product ID : "<<per[total].pid<<endl;
myfile<<"                Customer Name : "<<per[total].name<<endl;
myfile<<"                Product Name : "<<per[total].proname<<endl;
myfile << "                Initial price: Rs " << per[total].iprice<< endl;
myfile<<"                Final Price : Rs "<<per[total].fprice<<endl;
myfile << "                Installment: " << per[total].months << " month(s)" << endl;
myfile << "                Installment you must pay per month : Rs " << per[total].pmonth<< " month(s)" <<  endl<<endl<<endl;
myfile.close();
 total++;
}
}
void r(){
     int brand,month,price;
    int paypermonth,subtotal,installment,rate,totaln;
    char key;

cout<<"1. Dawlance SBS 600 INV (Rs 90000) "<<endl;
cout<<"2. PEL Glass Door 2000 (Rs 44,900) "<<endl;
cout<<"3. Haier E-Star Series HRF-276(Rs 44,000) "<<endl<<endl;
cout << "Which variant you will buy? " << endl;
cin >> brand;
cout<<"So You want to Buy---->";
switch(brand){
case 1:{
cout<<" Dawlance SBS 600 INV "<<endl<<endl;
break;
}
case 2:{
cout<<" PEL Glass Door 2000  "<<endl<<endl;
break;
}
case 3:{
cout<<" Haier E-Star Series HRF-276 "<<endl<<endl;
break;
}

default:
cout<<"  Nothing."<<endl;
}
if(brand==1 || brand==2 || brand==3 || brand==4 )
{

	cout << "Insert the number of months for installment: "<<endl;
		cin >> month;
system("cls");
        switch(brand){
case 1:
cout<<" Dawlance SBS 600 INV "<<endl<<endl;
id= 12;
price= 90000;
break;

case 2:
cout<<" PEL Glass Door 2000 "<<endl<<endl;
id= 13;
price= 44900;
break;

case 3:
cout<<" Haier E-Star Series HRF-276 "<<endl<<endl;
id= 14;
price= 44000;
break;
        }
subtotal=price/month;
rate=subtotal*0.1;
installment=subtotal+rate;
totaln=installment*month;
paypermonth=totaln/month;
cout<<"Product ID: "<<id<<endl;
cout << "Initial price: Rs " << price << endl;
cout<<"Final Price : Rs "<<totaln<<endl;
cout << "Installment: " << month << " month(s)" << endl;
cout << "Installment you must pay per month : Rs " << paypermonth << " month(s)" <<  endl;
p=p+1;
c=c+1;
ofstream myfile;
myfile.open("umair.txt",ios::app);
   cout<<endl<<"Enter the Initial Price Written above : ";
cin>>per[total].iprice;
cin.ignore();
cout<<"Enter the Product Name Customer select : ";
    cin>>per[total].proname;
    cin.ignore();
cout<<"Enter the Final Price Written above : Rs ";
cin>>per[total].fprice;
cin.ignore();
cout << "Enter the Installment month(s) Written above: " ;
cin>>per[total].months;
cin.ignore();
cout << "Enter the Installment customer must pay per month written above: Rs ";
cin>>per[total].pmonth;
cin.ignore();
cout<<"Enter Product ID Written Above : ";
cin>>per[total].pid;
myfile<<"                Product ID : "<<per[total].pid<<endl;
myfile<<"                Customer Name : "<<per[total].name<<endl;
myfile<<"                Product Name : "<<per[total].proname<<endl;
myfile << "                Initial price: Rs " << per[total].iprice<< endl;
myfile<<"                Final Price : Rs "<<per[total].fprice<<endl;
myfile << "                Installment: " << per[total].months << " month(s)" << endl;
myfile << "                Installment you must pay per month : Rs " << per[total].pmonth<< " month(s)" <<  endl<<endl<<endl;
myfile.close();
 total++;
}
}
void edit1(){
string na;

cout<<"Enter The Name Of Customer You Are going to edit : "<<endl;
cin>>na;
if(total!=0){
   for(i=0;i<total;i++)


   if(na==per[i].name)

{
   cout<<"Previous Data was :"<<endl<<endl;
 cout << "================================================" << endl;
	cout <<"               "<<   per[i].name<<"'s  DATA  " << endl;
	cout << "================================================" << endl;

cout<<"                Product ID : "<<per[i].pid<<endl;
cout<<"                Customer Name : "<<per[i].name<<endl;
cout<<"                Product Name : "<<per[i].proname<<endl;
cout << "             Initial price: Rs " << per[i].iprice<< endl;
cout<<"                Final Price : Rs "<<per[i].fprice<<endl;
cout << "              Installment: " << per[i].months << " month(s)" << endl;
cout << "              Installment you must pay per month : Rs " << per[i].pmonth<< " month(s)" <<  endl<<endl<<endl;
cout<<"New data is :"<<endl;
cin >>per[i].pid;
cin >>per[i].name;
cin >>per[i].proname;
cin >> per[i].iprice;
cin >>per[i].fprice;
cin >> per[i].months ;
cin >> per[i].pmonth;

}

}
else
    cout<<endl<<"      NO DATA HAS ENTERED YET !!!       "<<endl<<endl;

}
void edit2(){
string pron;
cout<<"Enter The Name Of Product You want to update : "<<endl;
cin>>pron;
if(total!=0){
   for(i=0;i<total;i++)

   if(pron==per[i].proname)
{
cout <<"Previous data is :"<<endl;
 cout << "================================================" << endl;
	cout <<"               "<<   per[i].name<<"'s  DATA  " << endl;
	cout << "================================================" << endl;

cout<<"                Product ID : "<<per[i].pid<<endl;
cout<<"                Customer Name : "<<per[i].name<<endl;
cout<<"                Product Name : "<<per[i].proname<<endl;
cout << "                 Initial price: Rs " << per[i].iprice<< endl;
cout<<"                Final Price : Rs "<<per[i].fprice<<endl;
cout << "                Installment: " << per[i].months << " month(s)" << endl;
cout << "                Installment you must pay per month : Rs " << per[i].pmonth<< " month(s)" <<  endl<<endl<<endl;
cout<<"Enter your new data u want put :"<<endl;
cin>>per[i].pid;
cin>>per[i].name;
cin>>per[i].proname;
cin>>per[i].iprice;
cin>>per[i].fprice;
cin>>per[i].months;
}
}
else
    cout<<endl<<"      NO DATA HAS ENTERED YET !!!       "<<endl<<endl;



}
void edit3(){
string idp;
cout<<"Enter The ID Of Product You Are Looking For : "<<endl;
cin>>idp;
if(total!=0){
  for(i=0;i<total;i++)

   if(idp==per[i].pid)
{
 cout<<"Previous data is :"<<endl;
 cout << "================================================" << endl;
	cout <<"               "<<   per[i].name<<"'s  DATA  " << endl;
	cout << "================================================" << endl;

cout<<"                Product ID : "<<per[i].pid<<endl;
cout<<"                Customer Name : "<<per[i].name<<endl;
cout<<"                Product Name : "<<per[i].proname<<endl;
cout << "             Initial price: Rs " << per[i].iprice<< endl;
cout<<"                Final Price : Rs "<<per[i].fprice<<endl;
cout << "              Installment: " << per[i].months << " month(s)" << endl;
cout << "              Installment you must pay per month : Rs " << per[i].pmonth<< " month(s)" <<  endl<<endl<<endl;
cout<<"Add new data you want to update "<<endl;
cin>>per[i].pid;
cin>>per[i].name;
cin>>per[i].proname;
cin>>per[i].iprice;
cin>>per[i].fprice;
cin>>per[i].months;
}

}
else
    cout<<endl<<"      NO DATA HAS ENTERED YET !!!       "<<endl<<endl;
}


void dis(){

ifstream file;
file.open("umair.txt");
for(i=0;i<total;i++)
{
  cout << "================================================" << endl;
	cout <<"               "<<   per[i].name<<"'s  DATA  " << endl;
	cout << "================================================" << endl;
	file>>per[total].pid>>per[total].name>>per[total].proname>> per[total].iprice>>per[total].fprice>>per[total].months>> per[total].pmonth  ;


cout<<"                Product ID : "<<per[i].pid<<endl;
cout<<"                Customer Name : "<<per[i].name<<endl;
cout<<"                Product Name : "<<per[i].proname<<endl;
cout << "                Initial price: Rs " << per[i].iprice<< endl;
cout<<"                Final Price : Rs "<<per[i].fprice<<endl;
cout << "                Installment: " << per[i].months << " month(s)" << endl;
cout << "                Installment you must pay per month : Rs " << per[i].pmonth<< " month(s)" <<  endl<<endl<<endl;
}
file.close();
}
void src()
{
    int sc;
    cout<<"1. Search By Customer Name "<<endl;
    cout<<"2. Search By Product Name "<<endl;
    cout<<"3. Search By Product ID "<<endl;
    cin>>sc;
switch(sc){
case 1:
    src1();
    break;
case 2:
    src2();
    break;
    case 3:
    src3();
    break;
    default:
        cout<<"No More Options."<<endl;
}

}
void src1(){
string na;

cout<<"Enter The Name Of Customer You Are Looking For : "<<endl;
cin>>na;
if(total!=0){
   for(i=0;i<total;i++)


   if(na==per[i].name)

{

 cout << "================================================" << endl;
	cout <<"               "<<   per[i].name<<"'s  DATA  " << endl;
	cout << "================================================" << endl;

cout<<"                Product ID : "<<per[i].pid<<endl;
cout<<"                Customer Name : "<<per[i].name<<endl;
cout<<"                Product Name : "<<per[i].proname<<endl;
cout << "             Initial price: Rs " << per[i].iprice<< endl;
cout<<"                Final Price : Rs "<<per[i].fprice<<endl;
cout << "              Installment: " << per[i].months << " month(s)" << endl;
cout << "              Installment you must pay per month : Rs " << per[i].pmonth<< " month(s)" <<  endl<<endl<<endl;

}

}
else
    cout<<endl<<"      NO DATA HAS ENTERED YET !!!       "<<endl<<endl;

}
void src2(){
string pron;
cout<<"Enter The Name Of Product You Are Looking For : "<<endl;
cin>>pron;
if(total!=0){
   for(i=0;i<total;i++)

   if(pron==per[i].proname)
{

 cout << "================================================" << endl;
	cout <<"               "<<   per[i].name<<"'s  DATA  " << endl;
	cout << "================================================" << endl;

cout<<"                Product ID : "<<per[i].pid<<endl;
cout<<"                Customer Name : "<<per[i].name<<endl;
cout<<"                Product Name : "<<per[i].proname<<endl;
cout << "                 Initial price: Rs " << per[i].iprice<< endl;
cout<<"                Final Price : Rs "<<per[i].fprice<<endl;
cout << "                Installment: " << per[i].months << " month(s)" << endl;
cout << "                Installment you must pay per month : Rs " << per[i].pmonth<< " month(s)" <<  endl<<endl<<endl;
}
}
else
    cout<<endl<<"      NO DATA HAS ENTERED YET !!!       "<<endl<<endl;



}
void src3(){
string idp;
cout<<"Enter The ID Of Product You Are Looking For : "<<endl;
cin>>idp;
if(total!=0){
  for(i=0;i<total;i++)

   if(idp==per[i].pid)
{

 cout << "================================================" << endl;
	cout <<"               "<<   per[i].name<<"'s  DATA  " << endl;
	cout << "================================================" << endl;

cout<<"                Product ID : "<<per[i].pid<<endl;
cout<<"                Customer Name : "<<per[i].name<<endl;
cout<<"                Product Name : "<<per[i].proname<<endl;
cout << "             Initial price: Rs " << per[i].iprice<< endl;
cout<<"                Final Price : Rs "<<per[i].fprice<<endl;
cout << "              Installment: " << per[i].months << " month(s)" << endl;
cout << "              Installment you must pay per month : Rs " << per[i].pmonth<< " month(s)" <<  endl<<endl<<endl;
}

}
else
    cout<<endl<<"      NO DATA HAS ENTERED YET !!!       "<<endl<<endl;
}
void edit(){
	 int sc;
    cout<<"1. Edit data By Customer Name "<<endl;
    cout<<"2. Edit data By Product Name "<<endl;
    cout<<"3. Edit data By Product ID "<<endl;
    cin>>sc;
switch(sc){
case 1:
    edit1();
    break;
case 2:
    edit2();
    break;
    case 3:
    edit3();
    break;
    default:
        cout<<"No More Options."<<endl;
}

}
void rep(){
    int rp;
cout<<"1. Products Sold "<<endl;
cout<<"2. Customers Gained "<<endl;
cin>>rp;
switch(rp){
case 1:
    ps();
    break;
case 2:
    cg();
    break;
default:
    cout<<"No More Options."<<endl;
}
}
void ps(){
cout << "================================================" << endl;
	cout <<"           "<<   p<<" Product's have been sold    " << endl;
	cout << "================================================" << endl;
}
void cg(){
cout << "================================================" << endl;
	cout <<"           "<<   c<<" customer's have been gained.    " << endl;
	cout << "================================================" << endl;
}


