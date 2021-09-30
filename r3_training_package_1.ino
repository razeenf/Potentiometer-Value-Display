int potPin = A5; 
int sseg2A = 5, sseg2B = 4, sseg2C = 3, sseg2D = 2; 
int sseg1A = 11, sseg1B = 10, sseg1C = 9, sseg1D = 8;  
//Creating variables for sseg and potentiometer which are mapped to their respective locations on the Arduino board


void setup()
{
  pinMode(potPin, INPUT);		//Setting sseg displays as input and potentiometer as output
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
  int potMeasure = analogRead(A5);					//Measures value of potentiometer 
  potMeasure = map(potMeasure, 0, 1023, 0, 99); 	//Maps potentiometers regular value of 0-1023 to 0-99
  Serial.println(potMeasure);						//Prints potentiometer value on the serial monitor (for personal checking)
  
  int num1 = potMeasure/10%10;		//Method to obtain the first digit of a double digit int
  int num2 = potMeasure%10; 		//Method to obtain the second digit of a double digit int
  
  switch(num1){		//Switch statement calls respective function based on first digit
    case 0:
    	zero(1);
    	break;
    case 1: 
    	one(1);
    	break;
    case 2:
    	two(1);
    	break;
    case 3: 
    	three(1);
    	break;
    case 4: 
    	four(1);
    	break;
    case 5:
    	five(1);
    	break;
    case 6:
    	six(1);
    	break;
    case 7: 
   		seven(1);
    	break;
    case 8:
    	eight(1);
    	break;
    case 9:
    	nine(1);
    	break;
  }
  
  switch(num2){		//Calls respective function based on second digit
    case 0:
    	zero(2);
    	break;
    case 1: 
    	one(2);
    	break;
    case 2:
    	two(2);
    	break;
    case 3: 
    	three(2);
    	break;
    case 4: 
    	four(2);
    	break;
    case 5:
    	five(2);
    	break;
    case 6:
    	six(2);
    	break;
    case 7: 
   		seven(2);
    	break;
    case 8:
    	eight(2);
    	break;
    case 9:
    	nine(2);
    	break;
  }
}

//Fucntions used to set sseg displays to a specfic digit

void zero(int ssegNum){		//Passing a interger value of 1 or 2 to clarify which display to write to
  if(ssegNum == 1){				
    digitalWrite(sseg1A, 0);		//Integer numbers are set using binary values which can be simply done due to the decoders 			
  	digitalWrite(sseg1B, 0);
  	digitalWrite(sseg1C, 0);
  	digitalWrite(sseg1D, 0);
  }
  else if(ssegNum == 2){
  	digitalWrite(sseg2A, 0);
  	digitalWrite(sseg2B, 0);
  	digitalWrite(sseg2C, 0);
  	digitalWrite(sseg2D, 0);
  }
  else Serial.println("Error");		//If an integer not 1 or 2 is passed an error is displayed in the serial monitor
}

void one(int ssegNum){
  if(ssegNum == 1){
    digitalWrite(sseg1A, 0);
    digitalWrite(sseg1B, 0);
    digitalWrite(sseg1C, 0);
    digitalWrite(sseg1D, 1);
  }
  else if(ssegNum == 2){
  	digitalWrite(sseg2A, 0);
  	digitalWrite(sseg2B, 0);
  	digitalWrite(sseg2C, 0);
  	digitalWrite(sseg2D, 1);
  }
  else Serial.println("Error");
}

void two(int ssegNum){
  if(ssegNum == 1){
    digitalWrite(sseg1A, 0);
  	digitalWrite(sseg1B, 0);
  	digitalWrite(sseg1C, 1);
  	digitalWrite(sseg1D, 0);
  }
  else if(ssegNum == 2){
  	digitalWrite(sseg2A, 0);
  	digitalWrite(sseg2B, 0);
  	digitalWrite(sseg2C, 1);
  	digitalWrite(sseg2D, 0);
  }
  else Serial.println("Error");
}

void three(int ssegNum){
  if(ssegNum == 1){
    digitalWrite(sseg1A, 0);
  	digitalWrite(sseg1B, 0);
  	digitalWrite(sseg1C, 1);
  	digitalWrite(sseg1D, 1);
  }
  else if(ssegNum == 2){
  	digitalWrite(sseg2A, 0);
  	digitalWrite(sseg2B, 0);
  	digitalWrite(sseg2C, 1);
  	digitalWrite(sseg2D, 1);
  }
  else Serial.println("Error");
}

void four(int ssegNum){
  if(ssegNum == 1){
    digitalWrite(sseg1A, 0);
  	digitalWrite(sseg1B, 1);
  	digitalWrite(sseg1C, 0);
  	digitalWrite(sseg1D, 0);
  }
  else if(ssegNum == 2){
  	digitalWrite(sseg2A, 0);
  	digitalWrite(sseg2B, 1);
  	digitalWrite(sseg2C, 0);
  	digitalWrite(sseg2D, 0);
  }
  else Serial.println("Error");
}

void five(int ssegNum){
  if(ssegNum == 1){
    digitalWrite(sseg1A, 0);
  	digitalWrite(sseg1B, 1);
  	digitalWrite(sseg1C, 0);
  	digitalWrite(sseg1D, 1);
  }
  else if(ssegNum == 2){
  	digitalWrite(sseg2A, 0);
  	digitalWrite(sseg2B, 1);
  	digitalWrite(sseg2C, 0);
  	digitalWrite(sseg2D, 1);
  }
  else Serial.println("Error");
}

void six(int ssegNum){
  if(ssegNum == 1){
    digitalWrite(sseg1A, 0);
  	digitalWrite(sseg1B, 1);
  	digitalWrite(sseg1C, 1);
  	digitalWrite(sseg1D, 0);
  }
  else if(ssegNum == 2){
  	digitalWrite(sseg2A, 0);
  	digitalWrite(sseg2B, 1);
  	digitalWrite(sseg2C, 1);
  	digitalWrite(sseg2D, 0);
  }
  else Serial.println("Error");
}

void seven(int ssegNum){
  if(ssegNum == 1){
    digitalWrite(sseg1A, 0);
  	digitalWrite(sseg1B, 1);
  	digitalWrite(sseg1C, 1);
  	digitalWrite(sseg1D, 1);
  }
  else if(ssegNum == 2){
  	digitalWrite(sseg2A, 0);
  	digitalWrite(sseg2B, 1);
  	digitalWrite(sseg2C, 1);
  	digitalWrite(sseg2D, 1);
  }
  else Serial.println("Error");
}

void eight(int ssegNum){
  if(ssegNum == 1){
    digitalWrite(sseg1A, 1);
  	digitalWrite(sseg1B, 0);
  	digitalWrite(sseg1C, 0);
  	digitalWrite(sseg1D, 0);
  }
  else if(ssegNum == 2){
  	digitalWrite(sseg2A, 1);
  	digitalWrite(sseg2B, 0);
  	digitalWrite(sseg2C, 0);
  	digitalWrite(sseg2D, 0);
  }
  else Serial.println("Error");
}

void nine(int ssegNum){
  if(ssegNum == 1){
    digitalWrite(sseg1A, 1);
  	digitalWrite(sseg1B, 0);
  	digitalWrite(sseg1C, 0);
  	digitalWrite(sseg1D, 1);
  }
  else if(ssegNum == 2){
  	digitalWrite(sseg2A, 1);
  	digitalWrite(sseg2B, 0);
  	digitalWrite(sseg2C, 0);
  	digitalWrite(sseg2D, 1);
  }
  else Serial.println("Error");
}




