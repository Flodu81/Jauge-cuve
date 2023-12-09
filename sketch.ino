#include <Wire.h> 

#include <LiquidCrystal_I2C.h> // Inclure la bibliothèque LiquidCrystal_I2C 



LiquidCrystal_I2C lcd(0x27, 16, 3); // Définissez l'adresse I2C du LCD à 0x27 pour un affichage de 16 caractères et 2 lignes 


const byte TRIGGER_PIN = 9; // Broche TRIGGER
const byte ECHO_PIN = 10;    // Broche ECHO
 
/* Constantes pour le timeout */
const unsigned long MEASURE_TIMEOUT = 25000UL; // 25ms = ~8m à 340m/s

/* Vitesse du son dans l'air en mm/us */
const float SOUND_SPEED = 340.0 / 1000;

/** Fonction setup() */
int hauteur;
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
  pinMode(TRIGGER_PIN, OUTPUT);
  digitalWrite(TRIGGER_PIN, LOW); // La broche TRIGGER doit être à LOW au repos
  pinMode(ECHO_PIN, INPUT);
}
 
/** Fonction loop() */
void loop() {

  
int valActuelle;



  /* 1. Lance une mesure de distance en envoyant une impulsion HIGH de 10µs sur la broche TRIGGER */
  digitalWrite(TRIGGER_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIGGER_PIN, LOW);
  
  /* 2. Mesure le temps entre l'envoi de l'impulsion ultrasonique et son écho (si il existe) */
  long measure = pulseIn(ECHO_PIN, HIGH, MEASURE_TIMEOUT);
   
  /* 3. Calcul la distance à partir du temps mesuré */
  float distance_mm =  measure / 2.0 * SOUND_SPEED;

hauteur = 140 - distance_mm/ 10.0, 2;



if (hauteur>=140){ remplissage = 6158; pourcentage = 100; }
if (hauteur==140){ remplissage = 6158; pourcentage = 100; }
if (hauteur==139){ remplissage = 6151; pourcentage = 99,9; }
if (hauteur==138){ remplissage = 6140; pourcentage = 99,7; }
if (hauteur==137){ remplissage = 6125; pourcentage = 99,5; }
if (hauteur==136){ remplissage = 6107; pourcentage = 99,2; }
if (hauteur==135){ remplissage = 6088; pourcentage = 98,9; }
if (hauteur==134){ remplissage = 6066; pourcentage = 98,5; }
if (hauteur==133){ remplissage = 6042; pourcentage = 98,1; }
if (hauteur==132){ remplissage = 6017; pourcentage = 97,7; }
if (hauteur==131){ remplissage = 5990; pourcentage = 97,3; }
if (hauteur==130){ remplissage = 5962; pourcentage = 96,8; }
if (hauteur==129){ remplissage = 5933; pourcentage = 96,3; }
if (hauteur==128){ remplissage = 5902; pourcentage = 95,8; }
if (hauteur==127){ remplissage = 5870; pourcentage = 95,3; }
if (hauteur==126){ remplissage = 5837; pourcentage = 94,8; }
if (hauteur==125){ remplissage = 5803; pourcentage = 94,2; }
if (hauteur==124){ remplissage = 5768; pourcentage = 93,7; }
if (hauteur==123){ remplissage = 5732; pourcentage = 93,1; }
if (hauteur==122){ remplissage = 5695; pourcentage = 92,5; }
if (hauteur==121){ remplissage = 5657; pourcentage = 91,9; }
if (hauteur==120){ remplissage = 5618; pourcentage = 91,2; }
if (hauteur==119){ remplissage = 5578; pourcentage = 90,6; }
if (hauteur==118){ remplissage = 5538; pourcentage = 89,9; }
if (hauteur==117){ remplissage = 5497; pourcentage = 89,3; }
if (hauteur==116){ remplissage = 5455; pourcentage = 88,6; }
if (hauteur==115){ remplissage = 5412; pourcentage = 87,9; }
if (hauteur==114){ remplissage = 5369; pourcentage = 87,2; }
if (hauteur==113){ remplissage = 5325; pourcentage = 86,5; }
if (hauteur==112){ remplissage = 5281; pourcentage = 85,8; }
if (hauteur==111){ remplissage = 5236; pourcentage = 85; }
if (hauteur==110){ remplissage = 5190; pourcentage = 84,3; }
if (hauteur==109){ remplissage = 5144; pourcentage = 83,5; }
if (hauteur==108){ remplissage = 5097; pourcentage = 82,8; }
if (hauteur==107){ remplissage = 5050; pourcentage = 82; }
if (hauteur==106){ remplissage = 5002; pourcentage = 81,2; }
if (hauteur==105){ remplissage = 4954; pourcentage = 80,4; }
if (hauteur==104){ remplissage = 4905; pourcentage = 79,7; }
if (hauteur==103){ remplissage = 4856; pourcentage = 78,9; }
if (hauteur==102){ remplissage = 4806; pourcentage = 78; }
if (hauteur==101){ remplissage = 4756; pourcentage = 77,2; }
if (hauteur==100){ remplissage = 4706; pourcentage = 76,4; }
if (hauteur==99){ remplissage = 4655; pourcentage = 75,6; }
if (hauteur==98){ remplissage = 4604; pourcentage = 74,8; }
if (hauteur==97){ remplissage = 4552; pourcentage = 73,9; }
if (hauteur==96){ remplissage = 4501; pourcentage = 73,1; }
if (hauteur==95){ remplissage = 4448; pourcentage = 72,2; }
if (hauteur==94){ remplissage = 4396; pourcentage = 71,4; }
if (hauteur==93){ remplissage = 4343; pourcentage = 70,5; }
if (hauteur==92){ remplissage = 4290; pourcentage = 69,7; }
if (hauteur==91){ remplissage = 4237; pourcentage = 68,8; }
if (hauteur==90){ remplissage = 4183; pourcentage = 67,9; }
if (hauteur==89){ remplissage = 4130; pourcentage = 67,1; }
if (hauteur==88){ remplissage = 4076; pourcentage = 66,2; }
if (hauteur==87){ remplissage = 4021; pourcentage = 65,3; }
if (hauteur==86){ remplissage = 3967; pourcentage = 64,4; }
if (hauteur==85){ remplissage = 3912; pourcentage = 63,5; }
if (hauteur==84){ remplissage = 3858; pourcentage = 62,7; }
if (hauteur==83){ remplissage = 3803; pourcentage = 61,8; }
if (hauteur==82){ remplissage = 3747; pourcentage = 60,8; }
if (hauteur==81){ remplissage = 3692; pourcentage = 60; }
if (hauteur==80){ remplissage = 3637; pourcentage = 59,1; }
if (hauteur==79){ remplissage = 3581; pourcentage = 58,2; }
if (hauteur==78){ remplissage = 3526; pourcentage = 57,3; }
if (hauteur==77){ remplissage = 3470; pourcentage = 56,3; }
if (hauteur==76){ remplissage = 3414; pourcentage = 55,4; }
if (hauteur==75){ remplissage = 3359; pourcentage = 54,5; }
if (hauteur==74){ remplissage = 3303; pourcentage = 53,6; }
if (hauteur==73){ remplissage = 3247; pourcentage = 52,7; }
if (hauteur==72){ remplissage = 3191; pourcentage = 51,8; }
if (hauteur==71){ remplissage = 3135; pourcentage = 50,9; }
if (hauteur==70){ remplissage = 3079; pourcentage = 50; }
if (hauteur==69){ remplissage = 3023; pourcentage = 49,1; }
if (hauteur==68){ remplissage = 2967; pourcentage = 48,2; }
if (hauteur==67){ remplissage = 2911; pourcentage = 47,3; }
if (hauteur==66){ remplissage = 2855; pourcentage = 46,4; }
if (hauteur==65){ remplissage = 2799; pourcentage = 45,5; }
if (hauteur==64){ remplissage = 2743; pourcentage = 44,5; }
if (hauteur==63){ remplissage = 2687; pourcentage = 43,6; }
if (hauteur==62){ remplissage = 2632; pourcentage = 42,7; }
if (hauteur==61){ remplissage = 2576; pourcentage = 41,8; }
if (hauteur==60){ remplissage = 2521; pourcentage = 40,9; }
if (hauteur==59){ remplissage = 2465; pourcentage = 40; }
if (hauteur==58){ remplissage = 2410; pourcentage = 39,1; }
if (hauteur==57){ remplissage = 2355; pourcentage = 38,2; }
if (hauteur==56){ remplissage = 2300; pourcentage = 37,3; }
if (hauteur==55){ remplissage = 2245; pourcentage = 36,5; }
if (hauteur==54){ remplissage = 2191; pourcentage = 35,6; }
if (hauteur==53){ remplissage = 2136; pourcentage = 34,7; }
if (hauteur==52){ remplissage = 2082; pourcentage = 33,8; }
if (hauteur==51){ remplissage = 2028; pourcentage = 32,9; }
if (hauteur==50){ remplissage = 1974; pourcentage = 32,1; }
if (hauteur==49){ remplissage = 1921; pourcentage = 31,2; }
if (hauteur==48){ remplissage = 1867; pourcentage = 30,3; }
if (hauteur==47){ remplissage = 1814; pourcentage = 29,5; }
if (hauteur==46){ remplissage = 1762; pourcentage = 28,6; }
if (hauteur==45){ remplissage = 1709; pourcentage = 27,8; }
if (hauteur==44){ remplissage = 1657; pourcentage = 26,9; }
if (hauteur==43){ remplissage = 1605; pourcentage = 26,1; }
if (hauteur==42){ remplissage = 1554; pourcentage = 25,2; }
if (hauteur==41){ remplissage = 1502; pourcentage = 24,4; }
if (hauteur==40){ remplissage = 1452; pourcentage = 23,6; }
if (hauteur==39){ remplissage = 1401; pourcentage = 22,8; }
if (hauteur==38){ remplissage = 1351; pourcentage = 21,9; }
if (hauteur==37){ remplissage = 1302; pourcentage = 21,1; }
if (hauteur==36){ remplissage = 1253; pourcentage = 20,3; }
if (hauteur==35){ remplissage = 1204; pourcentage = 19,6; }
if (hauteur==34){ remplissage = 1156; pourcentage = 18,8; }
if (hauteur==33){ remplissage = 1108; pourcentage = 18; }
if (hauteur==32){ remplissage = 1060; pourcentage = 17,2; }
if (hauteur==31){ remplissage = 1014; pourcentage = 16,5; }
if (hauteur==30){ remplissage = 967; pourcentage = 15,7; }
if (hauteur==29){ remplissage = 922; pourcentage = 15; }
if (hauteur==28){ remplissage = 877; pourcentage = 14,2; }
if (hauteur==27){ remplissage = 832; pourcentage = 13,5; }
if (hauteur==26){ remplissage = 788; pourcentage = 12,8; }
if (hauteur==25){ remplissage = 745; pourcentage = 12,1; }
if (hauteur==24){ remplissage = 703; pourcentage = 11,4; }
if (hauteur==23){ remplissage = 661; pourcentage = 10,7; }
if (hauteur==22){ remplissage = 620; pourcentage = 10,1; }
if (hauteur==21){ remplissage = 579; pourcentage = 9,4; }
if (hauteur==20){ remplissage = 540; pourcentage = 8,8; }
if (hauteur==19){ remplissage = 501; pourcentage = 8,1; }
if (hauteur==18){ remplissage = 463; pourcentage = 7,5; }
if (hauteur==17){ remplissage = 426; pourcentage = 6,9; }
if (hauteur==16){ remplissage = 390; pourcentage = 6,3; }
if (hauteur==15){ remplissage = 355; pourcentage = 5,8; }
if (hauteur==14){ remplissage = 320; pourcentage = 5,2; }
if (hauteur==13){ remplissage = 287; pourcentage = 4,7; }
if (hauteur==12){ remplissage = 255; pourcentage = 4,1; }
if (hauteur==11){ remplissage = 225; pourcentage = 3,7; }
if (hauteur==10){ remplissage = 195; pourcentage = 3,2; }
if (hauteur==9){ remplissage = 167; pourcentage = 2,7; }
if (hauteur==8){ remplissage = 140; pourcentage = 2,3; }
if (hauteur==7){ remplissage = 115; pourcentage = 1,9; }
if (hauteur==6){ remplissage = 92; pourcentage = 1,5; }
if (hauteur==5){ remplissage = 70; pourcentage = 1,1; }
if (hauteur==4){ remplissage = 50; pourcentage = 0,8; }
if (hauteur==3){ remplissage = 33; pourcentage = 0,5; }
if (hauteur==2){ remplissage = 18; pourcentage = 0,3; }
if (hauteur==1){ remplissage = 6; pourcentage = 0,1; }
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
lcd.print("                ");
 lcd.setCursor(0, 1);
lcd.print(String (remplissage) + " litre / " + String (pourcentage) + "%");
 

delay(5000);
lcd.noBacklight();



}