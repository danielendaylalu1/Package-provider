
#include <iostream>
using namespace std;
int a;char b;char c;char d;char e;char f;char g;char h;char i;int x = true;char confirm;int no;
void etioTele();
void mainMenu();
void selfAndGift();
void packages();
void oneBirrPackages();
void packageList();
void daily();
void weekly();
void confirmMessage();
void language();
void additionalService();
void myService();
void groupname();

int main()
{

etioTele();

}

void etioTele(){
while(x){
  cout<<"\t\t\tAASTU\n";
  cout<<"\t\tDepartment of Pre Engineering\n";
  cout<<"\t\tMOBILE PACKAGING\n";
  cout<<"\t\t================================\n";
  cout<<"\t\tStud Name\t\t\t\tStud ID\n";
  cout<<"\t\t1.Dagmawi Wossen\t\t\t0343/13\n";
  cout<<"\t\t2.Daniel Endaylalu\t\t\t0349/13\n";
  cout<<"\t\t3.Dejene Daniel\t\t\t\t0374/13\n";
  cout<<"\t\t4.Eden Sleshi\t\t\t\t0396/13\n";
  cout<<"\t\t5.Dureti Tolossa\t\t\t0389/13\n";
  cout<<"\t"<<endl;
int num;
cout<<"enter 999 to get ethio tele gebeta service"<<endl;
cout<<"\t"<<endl;
cin>>num;
system("clear");
if(num == 999){
system("clear");
mainMenu();
break;
}
}
}

void mainMenu(){
cout<<"Welcome to ethio gebeta"<<endl;
cout<<"1.Packages"<<endl;
cout<<"2.One Birr Package"<<endl;
cout<<"3.Additional Services"<<endl;
cout<<"4.Language Change"<<endl;
cout<<"5.My service"<<endl;
cout<<"6.to cancel service"<<endl;
cout<<"\t"<<endl;
cin>>a;
switch(a){
case 1:
system("clear");
selfAndGift();
break;
case 2:
system("clear");
selfAndGift();
break;
case 3:
system("clear");
additionalService();
break;
case 4:
system("clear");
language();
break;
case 5:
system("clear");
myService();
break;
case 6:
system("clear");
cout<<"service cancelled";
break;
default:
system("clear");
mainMenu();
}
}

void selfAndGift(){
cout<<"Package"<<endl;
cout<<"1.For Your Self"<<endl;
cout<<"2.For Gift"<<endl;
cout<<"*.Back"<<endl;
cout<<"c.to cancel service"<<endl;
cout<<"\t"<<endl;
cin>>b;
switch(b){
case '1':
if(a == 1){
system("clear");
packages();
}
else{
system("clear");
oneBirrPackages();
}
break;
case '2':
if(a == 1){
system("clear");
packages();
}
else{
system("clear");
oneBirrPackages();
break;
case '*':
system("clear");
mainMenu();
break;
case 'c':
system("clear");
cout<<"service cancelled";
break;
default:
system("clear");
selfAndGift();
}
}
}

void packages(){
if(b == '1'){
cout<<"for your self \n";
}
else{
cout<<"for Gift \n";
}
cout<<"1.Voice Package"<<endl;
cout<<"2.Internet Package"<<endl;
cout<<"3.Voice Plus Data Package"<<endl;
cout<<"4.Flexi Package"<<endl;
cout<<"*.Back"<<endl;
cout<<"#.Main menu"<<endl;
cout<<"c.to cancel service"<<endl;
cout<<"\t"<<endl;
cin>>c;
switch(c){

case '1':
system("clear");
cout<<"Voice package \n";
packageList();
break;
case '2':
system("clear");
cout<<"Internet package \n";
packageList();
break;
case '*':
system("clear");
selfAndGift();
break;
case '#':
mainMenu();
break;
case 'c':
system("clear");
cout<<"service cancelled";
break;
default:
system("clear");
packages();
}
}

void oneBirrPackages(){
if(b == '1'){
cout<<"for your self \n";
}
else{
cout<<"for Gift \n";
}
cout<<"1.4min 1hour voice package"<<endl;
cout<<"2.20mb 1hour internet package"<<endl;
cout<<"3.20txt 1hour message package"<<endl;
cout<<"*.Back"<<endl;
cout<<"#.Main menu"<<endl;
cout<<"c.to cancel service"<<endl;
cout<<"\t"<<endl;
cin>>d;
switch(d){
case '1':
system("clear");
confirmMessage();
break;
case '2':
system("clear");
confirmMessage();
break;
case '3':
system("clear");
confirmMessage();
break;
case '*':
system("clear");
selfAndGift();
break;
case '#':
system("clear");
mainMenu();
break;
case 'c':
system("clear");
cout<<"service cancelled";
break;
default:
system("clear");
oneBirrPackages();
}
}

void packageList(){
cout<<"1.Daily"<<endl;
cout<<"2.Weekly"<<endl;
cout<<"3.Monthly"<<endl;
cout<<"4.Night"<<endl;
cout<<"*.Back"<<endl;
cout<<"#.Main menu"<<endl;
cout<<"c.to cancel service"<<endl;
cout<<"\t"<<endl;
cin>>e;
switch(e){
case '1':
system("clear");
daily();
break;
case '2':
system("clear");
weekly();
break;
case '*':
packages();
break;
case '#':
mainMenu();
break;
case 'c':
system("clear");
cout<<"service cancelled";
break;
default:
system("clear");
packageList();
}
}

void daily(){
if(c == '1'){
cout<<"Daily"<<endl;
cout<<"1.Birr 3 for 12 min"<<endl;
cout<<"2.Birr 5 for 20 min"<<endl;
cout<<"3.Birr 10 for 45 min"<<endl;
cout<<"*.Back"<<endl;
cout<<"#.Main menu"<<endl;
cout<<"c.to cancel service"<<endl;
cout<<"\t"<<endl;
cin>>f;
switch(f){
case '1':
system("clear");
confirmMessage();
break;
case '2':
system("clear");
confirmMessage();
break;
case '3':
system("clear");
confirmMessage();
break;
case '*':
system("clear");
packageList();
break;packageList();
case '#':
system("clear");
mainMenu();
break;
case 'c':
system("clear");
cout<<"service cancelled";
break;
default:
system("clear");
daily();
}
}
else{
cout<<"Daily"<<endl;
cout<<"1.Birr 3 for 35 mb"<<endl;
cout<<"2.Birr 5 for 75 mb"<<endl;
cout<<"3.Birr 12 for 200 mb"<<endl;
cout<<"*.Back"<<endl;
cout<<"#.Main menu"<<endl;
cout<<"c.to cancel service"<<endl;
cout<<"\t"<<endl;
cin>>f;
switch(f){
case '1':
system("clear");
confirmMessage();
break;
case '2':
system("clear");
confirmMessage();
break;
case '3':
system("clear");
confirmMessage();
break;
case '*':
system("clear");
packageList();
break;packageList();
case '#':
system("clear");
mainMenu();
break;
case 'c':
system("clear");
cout<<"service cancelled";
break;
default:
system("clear");
daily();
}
}
}

void weekly(){
if(c == '1'){
cout<<"weekly"<<endl;
cout<<"1.Birr 15 for 70 min"<<endl;
cout<<"2.Birr 20 for 100 min"<<endl;
cout<<"3.Birr 25 for 130 min"<<endl;
cout<<"*.Back"<<endl;
cout<<"#.Main menu"<<endl;
cout<<"c.to cancel service"<<endl;
cout<<"\t"<<endl;
cin>>f;
switch(f){
case '1':
system("clear");
confirmMessage();
break;
case '2':
system("clear");
confirmMessage();
break;
case '3':
system("clear");
confirmMessage();
break;
case '*':
system("clear");
packageList();
break;packageList();
case '#':
system("clear");
mainMenu();
break;
case 'c':
system("clear");
cout<<"service cancelled";
break;
default:
system("clear");
daily();
}
}
else{
cout<<"weekly"<<endl;
cout<<"1.Birr 24 for 300 mb"<<endl;
cout<<"2.Birr 38 for 600 mb"<<endl;
cout<<"3.Birr 56 for 1 Gb"<<endl;
cout<<"*.Back"<<endl;
cout<<"#.Main menu"<<endl;
cout<<"c.to cancel service"<<endl;
cout<<"\t"<<endl;
cin>>f;
switch(f){
case '1':
system("clear");
confirmMessage();
break;
case '2':
system("clear");
confirmMessage();
break;
case '3':
system("clear");
confirmMessage();
break;
case '*':
system("clear");
packageList();
break;
case '#':
system("clear");
mainMenu();
break;
case 'c':
system("clear");
cout<<"service cancelled";
break;
default:
system("clear");
daily();
}
}
}
void language(){
cout<<"Change Language"<<endl;
cout<<"1.English"<<endl;
cout<<"2.Amharic"<<endl;
cout<<"3.Oromic"<<endl;
cout<<"4.Tigrenga"<<endl;
cout<<"*.Back"<<endl;
cout<<"c.to cancle"<<endl;
cout<<"\t"<<endl;
cin>>g;

switch(g){
case '*':
system("clear");
mainMenu();
break;
case 'c':
system("clear");
cout<<"service cancelled";
break;
default:
system("clear");
language();
}
}

void additionalService(){
cout<<"Additional service"<<endl;
cout<<"*.Back"<<endl;
cout<<"c.to cancle"<<endl;
cout<<"\t"<<endl;
cin>>h;

switch(h){
case '*':
system("clear");
mainMenu();
break;
case 'c':
system("clear");
cout<<"service cancelled";
break;
default:
system("clear");
additionalService();
}
}

void myService(){
cout<<"My service"<<endl;
cout<<"*.Back"<<endl;
cout<<"c.to cancle"<<endl;
cout<<"\t"<<endl;
cin>>i;

switch(i){
case '*':
system("clear");
mainMenu();
break;
case 'c':
system("clear");
cout<<"service cancelled";
break;
default:
system("clear");
myService();
}
}
void confirmMessage(){
if(b == '1'){
system("clear");
cout<<"You have chosen to purchase a package \n To confirm press 1 \n To cancel press other key \n #.Main menu \n";
cin>>confirm;
if(confirm == '1'){
system("clear");
cout<<"Dear Customer,"<<endl<<"Your order is successfully submited."<<endl<<"You will get SMS notification shortly for confirmation."<<endl;
}
else if(confirm == '#'){
system("clear");
mainMenu();
}
else{
system("clear");
cout<<"Service canclled \n";
}
}
else{
system("clear");
cout<<"Please enter the number \n";
cin>>no;
system("clear");
cout<<"You have chosen to purchase a gift package \n To confirm press 1 \n To cancel press other key \n #.Main menu \n";
cin>>confirm;
}
if(confirm == '1'){
system("clear");
cout<<"Dear Customer,"<<endl<<"Your order is successfully submited."<<endl<<"You will get SMS notification shortly for confirmation."<<endl;
}
else if(confirm == '#'){
system("clear");
mainMenu();
}
else{
system("clear");
cout<<"Service canclled \n";
}
}
void groupname(){
  cout<<"\t\t\tAASTU\n";
  cout<<"\t\tDepartment of Pre Engineering\n";
  cout<<"\t\tMOBILE PACKAGING\n";
  cout<<"\t\t================================\n";
  cout<<"\t\tStud Name\t\t\t\tStud ID\n";
  cout<<"\t\t1.Dagmawi Wossen\t\t\t0343/13\n";
  cout<<"\t\t2.Daniel Endaylalu\t\t\t0349/13\n";
  cout<<"\t\t3.Dejene Daniel\t\t\t\t0374/13\n";
  cout<<"\t\t4.Eden Sleshi\t\t\t\t0396/13\n";
  cout<<"\t\t5.Dureti Tolossa\t\t\t0389/13\n";
}
