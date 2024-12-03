#include <Wire.h> 

#include <LiquidCrystal_I2C.h> // Inclure la bibliothèque LiquidCrystal_I2C 



LiquidCrystal_I2C lcd(0x27, 16, 3); // Définissez l'adresse I2C du LCD à 0x27 pour un affichage de 16 caractères et 2 lignes 


const byte trigPin = 9; // Broche TRIGGER
const byte echoPin = 10;    // Broche ECHO*
long duree; // durée de l'echo 
int distance; // distance 



/** Fonction setup() */
int hauteur;
int vide;
int remplissage;
int pourcentage;
int valPrecedente; 
void setup() 

{ 

lcd.init(); // Initialise le LCD 

lcd.backlight(); // Allume le rétroéclairage pinMode(trigPin, OUTPUT); 

valPrecedente = 0;

   
  /* Initialise le port série */
  Serial.begin(115200);
   
  /* Initialise les broches */
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}
 
/** Fonction loop() */
void loop() {

  
int valActuelle;
// Émission d'un signal de durée 10 microsecondes 
   digitalWrite(trigPin, LOW); 
   delayMicroseconds(5); 
   digitalWrite(trigPin, HIGH); 
   delayMicroseconds(10); 
   digitalWrite(trigPin, LOW); 
 // Écoute de l'écho 
   duree = pulseIn(echoPin, HIGH); 
   // Calcul de la distance 
   distance = duree*0.034/2; 

 

hauteur = 155 - distance;



if (hauteur>=155){ remplissage = 6038; pourcentage = 100; }
if (hauteur==155){ remplissage = 6038; pourcentage = 100; }
if (hauteur==154){ remplissage = 6033; pourcentage = 99,9; }
if (hauteur==153){ remplissage = 6023; pourcentage = 99,8; }
if (hauteur==152){ remplissage = 6011; pourcentage = 99,5; }
if (hauteur==151){ remplissage = 5996; pourcentage = 99,3; }
if (hauteur==150){ remplissage = 5979; pourcentage = 99; }
if (hauteur==149){ remplissage = 5961; pourcentage = 98,7; }
if (hauteur==148){ remplissage = 5941; pourcentage = 98,4; }
if (hauteur==147){ remplissage = 5920; pourcentage = 98; }
if (hauteur==146){ remplissage = 5897; pourcentage = 97,7; }
if (hauteur==145){ remplissage = 5873; pourcentage = 97,3; }
if (hauteur==144){ remplissage = 5849; pourcentage = 96,9; }
if (hauteur==143){ remplissage = 5823; pourcentage = 96,4; }
if (hauteur==142){ remplissage = 5796; pourcentage = 96; }
if (hauteur==141){ remplissage = 5768; pourcentage = 95,5; }
if (hauteur==140){ remplissage = 5739; pourcentage = 95; }
if (hauteur==139){ remplissage = 5709; pourcentage = 94,5; }
if (hauteur==138){ remplissage = 5678; pourcentage = 94; }
if (hauteur==137){ remplissage = 5647; pourcentage = 93,5; }
if (hauteur==136){ remplissage = 5615; pourcentage = 93; }
if (hauteur==135){ remplissage = 5582; pourcentage = 92,4; }
if (hauteur==134){ remplissage = 5548; pourcentage = 91,9; }
if (hauteur==133){ remplissage = 5514; pourcentage = 91,3; }
if (hauteur==132){ remplissage = 5479; pourcentage = 90,7; }
if (hauteur==131){ remplissage = 5443; pourcentage = 90,2; }
if (hauteur==130){ remplissage = 5407; pourcentage = 89,6; }
if (hauteur==129){ remplissage = 5370; pourcentage = 88,9; }
if (hauteur==128){ remplissage = 5333; pourcentage = 88,3; }
if (hauteur==127){ remplissage = 5295; pourcentage = 87,7; }
if (hauteur==126){ remplissage = 5257; pourcentage = 87,1; }
if (hauteur==125){ remplissage = 5218; pourcentage = 86,4; }
if (hauteur==124){ remplissage = 5178; pourcentage = 85,8; }
if (hauteur==123){ remplissage = 5139; pourcentage = 85,1; }
if (hauteur==122){ remplissage = 5098; pourcentage = 84,4; }
if (hauteur==121){ remplissage = 5057; pourcentage = 83,8; }
if (hauteur==120){ remplissage = 5016; pourcentage = 83,1; }
if (hauteur==119){ remplissage = 4974; pourcentage = 82,4; }
if (hauteur==118){ remplissage = 4932; pourcentage = 81,7; }
if (hauteur==117){ remplissage = 4890; pourcentage = 81; }
if (hauteur==116){ remplissage = 4847; pourcentage = 80,3; }
if (hauteur==115){ remplissage = 4804; pourcentage = 79,6; }
if (hauteur==114){ remplissage = 4760; pourcentage = 78,8; }
if (hauteur==113){ remplissage = 4716; pourcentage = 78,1; }
if (hauteur==112){ remplissage = 4672; pourcentage = 77,4; }
if (hauteur==111){ remplissage = 4627; pourcentage = 76,6; }
if (hauteur==110){ remplissage = 4582; pourcentage = 75,9; }
if (hauteur==109){ remplissage = 4537; pourcentage = 75,1; }
if (hauteur==108){ remplissage = 4492; pourcentage = 74,4; }
if (hauteur==107){ remplissage = 4446; pourcentage = 73,6; }
if (hauteur==106){ remplissage = 4400; pourcentage = 72,9; }
if (hauteur==105){ remplissage = 4354; pourcentage = 72,1; }
if (hauteur==104){ remplissage = 4307; pourcentage = 71,3; }
if (hauteur==103){ remplissage = 4261; pourcentage = 70,6; }
if (hauteur==102){ remplissage = 4214; pourcentage = 69,8; }
if (hauteur==101){ remplissage = 4167; pourcentage = 69; }
if (hauteur==100){ remplissage = 4119; pourcentage = 68,2; }
if (hauteur==99){ remplissage = 4072; pourcentage = 67,4; }
if (hauteur==98){ remplissage = 4024; pourcentage = 66,6; }
if (hauteur==97){ remplissage = 3976; pourcentage = 65,8; }
if (hauteur==96){ remplissage = 3928; pourcentage = 65,1; }
if (hauteur==95){ remplissage = 3880; pourcentage = 64,3; }
if (hauteur==94){ remplissage = 3831; pourcentage = 63,5; }
if (hauteur==93){ remplissage = 3783; pourcentage = 62,6; }
if (hauteur==92){ remplissage = 3734; pourcentage = 61,8; }
if (hauteur==91){ remplissage = 3685; pourcentage = 61; }
if (hauteur==90){ remplissage = 3636; pourcentage = 60,2; }
if (hauteur==89){ remplissage = 3587; pourcentage = 59,4; }
if (hauteur==88){ remplissage = 3538; pourcentage = 58,6; }
if (hauteur==87){ remplissage = 3489; pourcentage = 57,8; }
if (hauteur==86){ remplissage = 3440; pourcentage = 57; }
if (hauteur==85){ remplissage = 3390; pourcentage = 56,2; }
if (hauteur==84){ remplissage = 3341; pourcentage = 55,3; }
if (hauteur==83){ remplissage = 3292; pourcentage = 54,5; }
if (hauteur==82){ remplissage = 3242; pourcentage = 53,7; }
if (hauteur==81){ remplissage = 3193; pourcentage = 52,9; }
if (hauteur==80){ remplissage = 3143; pourcentage = 52,1; }
if (hauteur==79){ remplissage = 3093; pourcentage = 51,2; }
if (hauteur==78){ remplissage = 3044; pourcentage = 50,4; }
if (hauteur==77){ remplissage = 2994; pourcentage = 49,6; }
if (hauteur==76){ remplissage = 2945; pourcentage = 48,8; }
if (hauteur==75){ remplissage = 2895; pourcentage = 47,9; }
if (hauteur==74){ remplissage = 2846; pourcentage = 47,1; }
if (hauteur==73){ remplissage = 2796; pourcentage = 46,3; }
if (hauteur==72){ remplissage = 2746; pourcentage = 45,5; }
if (hauteur==71){ remplissage = 2697; pourcentage = 44,7; }
if (hauteur==70){ remplissage = 2648; pourcentage = 43,8; }
if (hauteur==69){ remplissage = 2598; pourcentage = 43; }
if (hauteur==68){ remplissage = 2549; pourcentage = 42,2; }
if (hauteur==67){ remplissage = 2500; pourcentage = 41,4; }
if (hauteur==66){ remplissage = 2451; pourcentage = 40,6; }
if (hauteur==65){ remplissage = 2402; pourcentage = 39,8; }
if (hauteur==64){ remplissage = 2353; pourcentage = 39; }
if (hauteur==63){ remplissage = 2304; pourcentage = 38,2; }
if (hauteur==62){ remplissage = 2255; pourcentage = 37,4; }
if (hauteur==61){ remplissage = 2207; pourcentage = 36,5; }
if (hauteur==60){ remplissage = 2159; pourcentage = 35,7; }
if (hauteur==59){ remplissage = 2110; pourcentage = 34,9; }
if (hauteur==58){ remplissage = 2062; pourcentage = 34,2; }
if (hauteur==57){ remplissage = 2014; pourcentage = 33,4; }
if (hauteur==56){ remplissage = 1967; pourcentage = 32,6; }
if (hauteur==55){ remplissage = 1919; pourcentage = 31,8; }
if (hauteur==54){ remplissage = 1872; pourcentage = 31; }
if (hauteur==53){ remplissage = 1824; pourcentage = 30,2; }
if (hauteur==52){ remplissage = 1777; pourcentage = 29,4; }
if (hauteur==51){ remplissage = 1731; pourcentage = 28,7; }
if (hauteur==50){ remplissage = 1684; pourcentage = 27,9; }
if (hauteur==49){ remplissage = 1638; pourcentage = 27,1; }
if (hauteur==48){ remplissage = 1592; pourcentage = 26,4; }
if (hauteur==47){ remplissage = 1546; pourcentage = 25,6; }
if (hauteur==46){ remplissage = 1501; pourcentage = 24,9; }
if (hauteur==45){ remplissage = 1456; pourcentage = 24,1; }
if (hauteur==44){ remplissage = 1411; pourcentage = 23,4; }
if (hauteur==43){ remplissage = 1366; pourcentage = 22,6; }
if (hauteur==42){ remplissage = 1322; pourcentage = 21,9; }
if (hauteur==41){ remplissage = 1278; pourcentage = 21,2; }
if (hauteur==40){ remplissage = 1234; pourcentage = 20,4; }
if (hauteur==39){ remplissage = 1191; pourcentage = 19,7; }
if (hauteur==38){ remplissage = 1148; pourcentage = 19; }
if (hauteur==37){ remplissage = 1106; pourcentage = 18,3; }
if (hauteur==36){ remplissage = 1064; pourcentage = 17,6; }
if (hauteur==35){ remplissage = 1022; pourcentage = 16,9; }
if (hauteur==34){ remplissage = 981; pourcentage = 16,2; }
if (hauteur==33){ remplissage = 940; pourcentage = 15,6; }
if (hauteur==32){ remplissage = 900; pourcentage = 14,9; }
if (hauteur==31){ remplissage = 860; pourcentage = 14,2; }
if (hauteur==30){ remplissage = 820; pourcentage = 13,6; }
if (hauteur==29){ remplissage = 781; pourcentage = 12,9; }
if (hauteur==28){ remplissage = 743; pourcentage = 12,3; }
if (hauteur==27){ remplissage = 705; pourcentage = 11,7; }
if (hauteur==26){ remplissage = 668; pourcentage = 11,1; }
if (hauteur==25){ remplissage = 631; pourcentage = 10,4; }
if (hauteur==24){ remplissage = 595; pourcentage = 9,8; }
if (hauteur==23){ remplissage = 559; pourcentage = 9,3; }
if (hauteur==22){ remplissage = 524; pourcentage = 8,7; }
if (hauteur==21){ remplissage = 490; pourcentage = 8,1; }
if (hauteur==20){ remplissage = 456; pourcentage = 7,6; }
if (hauteur==19){ remplissage = 423; pourcentage = 7; }
if (hauteur==18){ remplissage = 391; pourcentage = 6,5; }
if (hauteur==17){ remplissage = 360; pourcentage = 6; }
if (hauteur==16){ remplissage = 329; pourcentage = 5,5; }
if (hauteur==15){ remplissage = 299; pourcentage = 5; }
if (hauteur==14){ remplissage = 271; pourcentage = 4,5; }
if (hauteur==13){ remplissage = 243; pourcentage = 4; }
if (hauteur==12){ remplissage = 216; pourcentage = 3,6; }
if (hauteur==11){ remplissage = 190; pourcentage = 3,1; }
if (hauteur==10){ remplissage = 165; pourcentage = 2,7; }
if (hauteur==9){ remplissage = 141; pourcentage = 2,3; }
if (hauteur==8){ remplissage = 118; pourcentage = 2; }
if (hauteur==7){ remplissage = 97; pourcentage = 1,6; }
if (hauteur==6){ remplissage = 77; pourcentage = 1,3; }
if (hauteur==5){ remplissage = 59; pourcentage = 1; }
if (hauteur==4){ remplissage = 42; pourcentage = 0,7; }
if (hauteur==3){ remplissage = 27; pourcentage = 0,5; }
if (hauteur==2){ remplissage = 15; pourcentage = 0,2; }
if (hauteur==1){ remplissage = 5; pourcentage = 0,1; }
if (hauteur==0){ remplissage = 0; pourcentage = 0; }

if (hauteur<=0){ remplissage = 0; pourcentage = 0; }


{valActuelle = hauteur;
if ( valActuelle != valPrecedente ){
  lcd.backlight();

      valPrecedente = valActuelle;
}} 



 lcd.setCursor(0, 0);
lcd.print("                ");
lcd.setCursor(0, 0);
 lcd.print("Hauteur " +  String (hauteur) + " cm");

lcd.setCursor(0, 1);
lcd.print("                 ");
 lcd.setCursor(0, 1);
lcd.print(String (remplissage) + " litre / " + String (pourcentage) + "%");
 
lcd.setCursor(0, 2);
lcd.print("                 ");
 lcd.setCursor(0, 2);
 lcd.print("Vide " +  String (distance) + " cm");

lcd.setCursor(0, 3);
lcd.print("                    ");

if (hauteur<15){
  lcd.setCursor(0, 3);
lcd.print("                    ");
 lcd.setCursor(0, 3);
 lcd.print("ATTENTION NIVEAU BAS");}

delay(5000);
lcd.noBacklight();



}
