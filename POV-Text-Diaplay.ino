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
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
 
  // Defining the space between the letters (ms)
  letterSpace = 6;
  // Defining the time dots appear (ms)
  dotTime = 3;
 Serial.begin(115200);
}




// Function to display a letter
void displayLetter(int letter[])
{
  int y;
 
  // Printing the first y column of the letter
  for (y=0; y<5; y++)
  {
    digitalWrite(y+1, letter[y]);
  }
  delay(dotTime);
 
  // Printing the second y column of the letter
  for (y=0; y<5; y++)
  {
    digitalWrite(y+1, letter[y+5]);
  }
  delay(dotTime);
 
  // Printing the third y column of the letter
  for (y=0; y<5; y++)
  {
    digitalWrite(y+1, letter[y+10]);
  }
  delay(dotTime);
 
  // Printing the space between the letters
  for (y=0; y<5; y++)
  {
    digitalWrite(y+1, 0);
  }
  delay(letterSpace);
}




// Loop Function of Arduino
void loop()
{
  // Print text here 
 displayText("ULTIMATE_HACKER");
  
}




// Function to display Text
void displayText(char str[])
{
    int len = strlen(str); // define str[] length
    int i;
    for(i = 0; i<len; i++)
    {
  
        switch((int)str[i]){

          case 95: displayLetter(_);
          case 65: displayLetter(A);
          case 66: displayLetter(B);
          case 67: displayLetter(C);
          case 68: displayLetter(D);
          case 69: displayLetter(E);
          case 70: displayLetter(F);
          case 71: displayLetter(G);
          case 72: displayLetter(H);
          case 73: displayLetter(I);
          case 74: displayLetter(J);
          case 75: displayLetter(K);
          case 76: displayLetter(L);
          case 77: displayLetter(M);
          case 78: displayLetter(N);
          case 79: displayLetter(O);
          case 80: displayLetter(P);
          case 81: displayLetter(Q);
          case 82: displayLetter(R);
          case 83: displayLetter(S);
          case 84: displayLetter(T);
          case 85: displayLetter(U);
          case 86: displayLetter(V);
          case 87: displayLetter(W);
          case 88: displayLetter(X);
          case 89: displayLetter(Y);
          case 90: displayLetter(Z);
    
          
          }
          
    }     
}
