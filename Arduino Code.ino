int potPin = A5; 
int sseg2A = 5, sseg2B = 4, sseg2C = 3, sseg2D = 2; 
int sseg1A = 11, sseg1B = 10, sseg1C = 9, sseg1D = 8;  
//Creating variables for sseg and potentiometer which are mapped to their respective locations on the Arduino board


void setup()
{
  pinMode(potPin, INPUT);		//Setting sseg displays as output and potentiometer as input
  pinMode(sseg2A, OUTPUT);
  pinMode(sseg2B, OUTPUT);
  pinMode(sseg2C, OUTPUT);
  pinMode(sseg2D, OUTPUT);
  pinMode(sseg1A, OUTPUT);
  pinMode(sseg1B, OUTPUT);
  pinMode(sseg1C, OUTPUT);
  pinMode(sseg1D, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int potMeasure = analogRead(A5);			//Measures value of potentiometer 
  potMeasure = map(potMeasure, 0, 1023, 0, 99); 	//Maps potentiometers regular value of 0-1023 to 0-99
  Serial.println(potMeasure);				//Prints potentiometer value on the serial monitor (for personal checking)
  
  int num1 = potMeasure/10%10;		//Method to obtain the first digit of a double digit int
  int num2 = potMeasure%10; 		//Method to obtain the second digit of a double digit in
  int i, digit, ssegNum;
  
  for(i = 1; i<3; i++){
    if(i == 1){
      digit = num1;
      ssegNum = 1; 
    }
    else if(i == 2){
      digit = num2; 
      ssegNum = 2; 
    }
    else {
      break;
      Serial.println("Error");
    }
    
    switch(digit){		//Switch statement calls respective function based on first and second digit
      case 0:
          display(0, 0, 0, 0, ssegNum);
          break;
      case 1: 
          display(0, 0, 0, 1, ssegNum);
          break;
      case 2:
          display(0, 0, 1, 0, ssegNum);
          break;
      case 3: 
          display(0, 0, 1, 1, ssegNum);
          break;
      case 4: 
          display(0, 1, 0, 0, ssegNum);
          break;
      case 5:
          display(0, 1, 0, 1, ssegNum);
          break;
      case 6:
          display(0, 1, 1, 0, ssegNum);
          break;
      case 7: 
          display(0, 1, 1, 1, ssegNum);
          break;
      case 8:
          display(1, 0, 0, 0, ssegNum);
          break;
      case 9:
          display(1, 0, 0, 1, ssegNum);
          break;
  	}  
  }
}

void display(int a, int b, int c, int d, int ssegNum){	
  
  if(ssegNum == 1){				
    digitalWrite(sseg1A, a);				
  	digitalWrite(sseg1B, b);
  	digitalWrite(sseg1C, c);
  	digitalWrite(sseg1D, d);
  }
  else if(ssegNum == 2){
  	digitalWrite(sseg2A, a);
  	digitalWrite(sseg2B, b);
  	digitalWrite(sseg2C, c);
  	digitalWrite(sseg2D, d);
  }
  else Serial.println("Error");		
}
