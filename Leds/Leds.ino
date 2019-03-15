int timer = 100, conteo = 8; 
int array[] ={13, 12, 11, 10, 9, 8 ,7, 6}; 

void setup(){
  for(int i = 0; i< conteo; i++){
    pinMode(array[i],OUTPUT);
  }
}

void loop(){
  for(int i = 0; i< conteo; i++){
  digitalWrite(array[i],HIGH);
  delay(timer);
  digitalWrite(array[i], LOW);  
  delay(timer);   
}
  for(int i = conteo-2; i>0; i--){
    digitalWrite(array[i], HIGH); 
    delay(timer);
    digitalWrite(array[i], LOW);  
    delay(timer); 
  }   
}

