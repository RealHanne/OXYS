enum State_enum {Relanti, CNP, Masurare, Alerta, Salvare_24};
enum Senzor_enum {NONE, Sensor_puls, ecran, BOTH};

void state_machine_run(uint8_t senzor);
void introdu_CNP();
void salveaza_CNP();
void masoara_puls();
void input_user();
void masoara_sat();
void mas_alerta();
void user_nou() ;// 
void timp_24h();
uint8_t read_IR();

uint8_t state= Relanti;



void setup() {
  // put your setup code here, to run once:

}

void loop() {
  state_machine_run(read_IR());
  delay(10);

}
void state_machine_run(uint8_t senzor)
{
  switch(state)
  {
    case Relanti:
      if(senzor==NONE){
      //
       }
    break;

    case CNP:
    if(senzor==ecran){
      introdu_CNP();
      salveaza_CNP(); 
      }
    break;

      if(){
      case Masurare:
      if(senzor==Senzor_puls){
           masoara_puls();
           masoara_sat();
      }
       break;
      }
   else(){
     case Alerta:
     if(senzor==Senzor_puls){
      //
     }
     break; 
   }
      
  }
}
