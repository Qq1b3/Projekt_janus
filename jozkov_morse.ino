int pauzaBodka = 100;
int pauzaCiarka = pauzaBodka * 3 ;
int pauzaPismena = pauzaBodka; //dlzka pauzy medzi pismenami
int pauzaMedzernik = pauzaCiarka; //dlzka pauzy medzernika
int pauzaMedziSlovom = pauzaBodka * 7 ; //dlzka pauzy medzi slovami
int led = 13;
String MorseCode="";
char i;
byte DlzkaMorseCode;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);

}

void doString(){                                          //rozlozenie stringu  
  DlzkaMorseCode = MorseCode.length();                    //ziskanie dlzky stringu
      for(int x=0;x<=DlzkaMorseCode;x++){                 //opakujeme do konca stringu
        i=MorseCode.charAt(x);                            //get character at pos x
        preklad();                                        //prelozime charakter do morseovho kodu
        }
  }

void loop() {
  while(Serial.available())
  {
    char AktualnePismeno = (char)Serial.read();
    MorseCode += AktualnePismeno;
        if(AktualnePismeno=='\n'){
          Serial.println(MorseCode);
          doString();
          }
    
    
    }
    delay(1000);
    MorseCode= "";
}

void MorseBodkaSvieti() //slučka pre bodku
{
  digitalWrite(led,HIGH); //Zasvieti ledku
  delay(pauzaBodka); //delay
 }


void MorseCiarkaSvieti() //slučka pre ciarku
{
    digitalWrite(led,HIGH); //Zasvieti ledku
  delay(pauzaCiarka); //delay  
  }

void MorseVypnutaLed(int zhasnute) //slučka pre ciarku
{
  digitalWrite(led,LOW); //Zasvieti ledku
  delay(zhasnute); //podrzi to zhasnute 
  }
//--------------

void preklad(){
  switch(i){
        case 'A':
            MorseBodkaSvieti();
            MorseVypnutaLed(pauzaPismena);
            MorseCiarkaSvieti();
            MorseVypnutaLed(pauzaPismena);
        break;

        case 'B':
            MorseCiarkaSvieti();
            MorseVypnutaLed(pauzaPismena);
            MorseBodkaSvieti();
            MorseVypnutaLed(pauzaPismena);
            MorseBodkaSvieti();
            MorseVypnutaLed(pauzaPismena);
            MorseBodkaSvieti();
            MorseVypnutaLed(pauzaPismena);
        break;  

        case 'C':
            MorseCiarkaSvieti();
            MorseVypnutaLed(pauzaPismena);
            MorseBodkaSvieti();
            MorseVypnutaLed(pauzaPismena);
            MorseCiarkaSvieti();
            MorseVypnutaLed(pauzaPismena);
            MorseBodkaSvieti();
            MorseVypnutaLed(pauzaPismena);
        break;

        case 'D':
            MorseCiarkaSvieti();
            MorseVypnutaLed(pauzaPismena);
            MorseBodkaSvieti();
            MorseVypnutaLed(pauzaPismena);
            MorseBodkaSvieti();
            MorseVypnutaLed(pauzaPismena);
        break;

        case 'E':
            MorseBodkaSvieti();
            MorseVypnutaLed(pauzaPismena);
        break;

        case 'F':
            MorseBodkaSvieti();
            MorseVypnutaLed(pauzaPismena);
            MorseBodkaSvieti();
            MorseVypnutaLed(pauzaPismena);
            MorseCiarkaSvieti();
            MorseVypnutaLed(pauzaPismena);
            MorseBodkaSvieti();
            MorseVypnutaLed(pauzaPismena);
        break;

        case 'G':
            MorseCiarkaSvieti();
            MorseVypnutaLed(pauzaPismena);
            MorseCiarkaSvieti();
            MorseVypnutaLed(pauzaPismena);
            MorseBodkaSvieti();
            MorseVypnutaLed(pauzaPismena);
        break;

        case 'H':
            MorseBodkaSvieti();
            MorseVypnutaLed(pauzaPismena);
            MorseBodkaSvieti();
            MorseVypnutaLed(pauzaPismena);
            MorseBodkaSvieti();
            MorseVypnutaLed(pauzaPismena);
            MorseBodkaSvieti();
            MorseVypnutaLed(pauzaPismena);
        break;

        case 'I':
            MorseBodkaSvieti();
            MorseVypnutaLed(pauzaPismena);
            MorseBodkaSvieti();
            MorseVypnutaLed(pauzaPismena);
        break;

        case 'J':
            MorseBodkaSvieti();
            MorseVypnutaLed(pauzaPismena);
            MorseCiarkaSvieti();
            MorseVypnutaLed(pauzaPismena);
            MorseCiarkaSvieti();
            MorseVypnutaLed(pauzaPismena);
            MorseCiarkaSvieti();
            MorseVypnutaLed(pauzaPismena);
        break;

        case 'K':
            MorseCiarkaSvieti();
            MorseVypnutaLed(pauzaPismena);
            MorseBodkaSvieti();
            MorseVypnutaLed(pauzaPismena);
            MorseCiarkaSvieti();
            MorseVypnutaLed(pauzaPismena);
        break;

        case 'L':
            MorseBodkaSvieti();
            MorseVypnutaLed(pauzaPismena);
            MorseCiarkaSvieti();
            MorseVypnutaLed(pauzaPismena);
            MorseBodkaSvieti();
            MorseVypnutaLed(pauzaPismena);
            MorseBodkaSvieti();
            MorseVypnutaLed(pauzaPismena);
        break;

        case 'M':
            MorseCiarkaSvieti();
            MorseVypnutaLed(pauzaPismena);
            MorseCiarkaSvieti();
            MorseVypnutaLed(pauzaPismena);
        break;

        case 'N':
            MorseCiarkaSvieti();
            MorseVypnutaLed(pauzaPismena);
            MorseBodkaSvieti();
            MorseVypnutaLed(pauzaPismena);
        break;

        case 'O':
            MorseCiarkaSvieti();
            MorseVypnutaLed(pauzaPismena);
            MorseCiarkaSvieti();
            MorseVypnutaLed(pauzaPismena);
            MorseCiarkaSvieti();
            MorseVypnutaLed(pauzaPismena);
        break;

        case 'P':
            MorseBodkaSvieti();
            MorseVypnutaLed(pauzaPismena);
            MorseCiarkaSvieti();
            MorseVypnutaLed(pauzaPismena);
            MorseCiarkaSvieti();
            MorseVypnutaLed(pauzaPismena);
            MorseBodkaSvieti();
            MorseVypnutaLed(pauzaPismena);
        break;

        case 'Q':
            MorseCiarkaSvieti();
            MorseVypnutaLed(pauzaPismena);
            MorseCiarkaSvieti();
            MorseVypnutaLed(pauzaPismena);
            MorseBodkaSvieti();
            MorseVypnutaLed(pauzaPismena);
            MorseCiarkaSvieti();
            MorseVypnutaLed(pauzaPismena);
        break;

        case 'R':
            MorseBodkaSvieti();
            MorseVypnutaLed(pauzaPismena);
            MorseCiarkaSvieti();
            MorseVypnutaLed(pauzaPismena);
            MorseBodkaSvieti();
            MorseVypnutaLed(pauzaPismena);
        break;

        case 'S':
            MorseBodkaSvieti();
            MorseVypnutaLed(pauzaPismena);
            MorseBodkaSvieti();
            MorseVypnutaLed(pauzaPismena);
            MorseBodkaSvieti();
            MorseVypnutaLed(pauzaPismena);
        break;

        case 'T':
            MorseCiarkaSvieti();
            MorseVypnutaLed(pauzaPismena);
        break;

        case 'U':
            MorseBodkaSvieti();
            MorseVypnutaLed(pauzaPismena);
            MorseBodkaSvieti();
            MorseVypnutaLed(pauzaPismena);
            MorseCiarkaSvieti();
            MorseVypnutaLed(pauzaPismena);
        break;

        case 'V':
            MorseBodkaSvieti();
            MorseVypnutaLed(pauzaPismena);
            MorseBodkaSvieti();
            MorseVypnutaLed(pauzaPismena);
            MorseBodkaSvieti();
            MorseVypnutaLed(pauzaPismena);
            MorseCiarkaSvieti();
            MorseVypnutaLed(pauzaPismena);
        break;

        case 'W':
            MorseBodkaSvieti();
            MorseVypnutaLed(pauzaPismena);
            MorseCiarkaSvieti();
            MorseVypnutaLed(pauzaPismena);
            MorseCiarkaSvieti();
            MorseVypnutaLed(pauzaPismena);
        break;

        case 'X':
            MorseCiarkaSvieti();
            MorseVypnutaLed(pauzaPismena);
            MorseBodkaSvieti();
            MorseVypnutaLed(pauzaPismena);
            MorseBodkaSvieti();
            MorseVypnutaLed(pauzaPismena);
            MorseCiarkaSvieti();
            MorseVypnutaLed(pauzaPismena);
        break;

        case 'Y':
            MorseCiarkaSvieti();
            MorseVypnutaLed(pauzaPismena);
            MorseBodkaSvieti();
            MorseVypnutaLed(pauzaPismena);
            MorseCiarkaSvieti();
            MorseVypnutaLed(pauzaPismena);
            MorseCiarkaSvieti();
            MorseVypnutaLed(pauzaPismena);
        break;

        case 'Z':
            MorseCiarkaSvieti();
            MorseVypnutaLed(pauzaPismena);
            MorseCiarkaSvieti();
            MorseVypnutaLed(pauzaPismena);
            MorseBodkaSvieti();
            MorseVypnutaLed(pauzaPismena);
            MorseBodkaSvieti();
            MorseVypnutaLed(pauzaPismena);
        break;
        
        default:
            MorseVypnutaLed(pauzaMedzernik);
        break;
        
        
    }

  }
  
