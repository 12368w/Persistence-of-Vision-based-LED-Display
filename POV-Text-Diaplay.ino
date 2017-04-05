// All alphabets will be a matrix of 3x5
int _[] = {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0};
int A[] = {0,1,1,1,1, 1,0,1,0,0, 0,1,1,1,1};
int B[] = {1,1,1,1,1, 1,0,1,0,1, 0,1,0,1,0};
int C[] = {0,1,1,1,0, 1,0,0,0,1, 1,0,0,0,1};
int D[] = {1,1,1,1,1, 1,0,0,0,1, 0,1,1,1,0};
int E[] = {1,1,1,1,1, 1,0,1,0,1, 1,0,1,0,1};
int F[] = {1,1,1,1,1, 1,0,1,0,0, 1,0,1,0,0};
int G[] = {0,1,1,1,0, 1,0,1,0,1, 0,0,1,1,0};
int H[] = {1,1,1,1,1, 0,0,1,0,0, 1,1,1,1,1};
int I[] = {0,0,0,0,1, 1,0,1,1,1, 0,0,0,0,1};
int J[] = {1,0,0,0,0, 1,0,0,0,1, 1,1,1,1,1};
int K[] = {1,1,1,1,1, 0,0,1,0,0, 0,1,0,1,1};
int L[] = {1,1,1,1,1, 0,0,0,0,1, 0,0,0,0,1};
int M[] = {1,1,1,1,1, 0,1,1,0,0, 0,1,1,1,1};
int N[] = {1,1,1,1,1, 1,0,0,0,0, 0,1,1,1,1};
int O[] = {0,1,1,1,0, 1,0,0,0,1, 0,1,1,1,0};
int P[] = {1,1,1,1,1, 1,0,1,0,0, 0,1,0,0,0};
int Q[] = {0,1,1,1,1, 1,0,0,1,1, 0,1,1,1,1};
int R[] = {1,1,1,1,1, 1,0,1,0,0, 0,1,0,1,1};
int S[] = {0,1,0,0,1, 1,0,1,0,1, 1,0,0,1,0};
int T[] = {1,0,0,0,0, 1,1,1,1,1, 1,0,0,0,0};
int U[] = {1,1,1,1,1, 0,0,0,0,1, 1,1,1,1,1};
int V[] = {1,1,1,1,0, 0,0,0,0,1, 1,1,1,1,0};
int W[] = {1,1,1,1,0, 0,0,1,1,0, 1,1,1,1,0};
int X[] = {1,1,0,1,1, 0,0,1,0,0, 1,1,0,1,1};
int Y[] = {1,1,0,0,0, 0,0,1,0,0, 1,1,1,1,1};
int Z[] = {1,0,0,1,1, 1,0,1,0,1, 1,1,0,0,1};
int letterSpace;
int dotTime;




// Setup function for Arduino
void setup()
{
  // Setting the ports of the leds to OUTPUT
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
 
  // Defining the space between the letters (ms)
  letterSpace = 6;
  // Defining the time dots appear (ms)
  dotTime = 3;
 
}




// Function to display a letter
void displayLetter(int letter[])
{
  int y;
 
  // Printing the first y column of the letter
  for (y=0; y<5; y++)
  {
    digitalWrite(y+2, letter[y]);
  }
  delay(dotTime);
 
  // Printing the second y column of the letter
  for (y=0; y<5; y++)
  {
    digitalWrite(y+2, letter[y+5]);
  }
  delay(dotTime);
 
  // Printing the third y column of the letter
  for (y=0; y<5; y++)
  {
    digitalWrite(y+2, letter[y+10]);
  }
  delay(dotTime);
 
  // Printing the space between the letters
  for (y=0; y<5; y++)
  {
    digitalWrite(y+2, 0);
  }
  delay(letterSpace);
}




// Loop Function of Arduino
void loop()
{
  // Print text here 
 displayText("ULTIMATE HACKER");
  
}




// Function to display Text
void displayText(char str[])
{
    int len = sizeof(str); // define str[] length
    int i;
    for(i = 0; i<len; i++)
    {
        displayLetter(str[i]);
    }     
}
