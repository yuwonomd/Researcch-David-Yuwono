/*
 * coba buat waktu di tampilkan ke serial
 * library Time.h
*/
#include <Time.h>
int t1,t2,selisih;
boolean flagt2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  setTime(00,55,00,24,7,14);//(jam, menit, detik, tanggal, Bulan, Tahun)
  flagt2 = true;
}

void loop() {
  // put your main code here, to run repeatedly:
  /* if(day() >= 29 && month() == 2 && year() == 16){
      setTime(0,0,0,1,3,16); }
   else if(day() >= 30 && month() == 4 && year() == 16){
      setTime(0,0,0,1,5,16); }
   else if(day() >= 30 && month() == 6 && year() == 16){
      setTime(0,0,0,1,7,16); }
   else if(day() >= 30 && month() == 9 && year() == 16){
      setTime(0,0,0,1,10,16); }
   else if(day() >= 30 && month() == 11 && year() == 16){
      setTime(0,0,0,1,12,16); }*/
// Menampilkan Minute
      Serial.print (minute());
      Serial.print (" :");
// Menampilkan detik
      Serial.println (second());
      if (second() >= 5){
        t1 = second();
        Serial.print ("Second  t1 : ");
        Serial.println (t1);
        flagt2 = true;  // Pemberian flag
        while (flagt2){
          Serial.print (minute());
          Serial.print (" :");
          Serial.println (second());
          delay(1000);
          if (second()== 20){ 
            t2 = second();
            Serial.print ("Second  t2 : ");
            Serial.println (t2);
            selisih = t2-t1; // menhitung selisih waktu
            Serial.print ("Selisih : ");
            Serial.println (selisih);
            setTime(0,0,0,0,0,0);
            flagt2 = !flagt2; //nilai flag di kembalikan kembali
            }
          }
        }
         
          
      delay(1000);

}
