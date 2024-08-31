int num1 = 10;
int num2 = 5;
int sum;
int product;

void setup() {
  Serial.begin(9600);
  
  sum = num1 + num2;
  product = num1 * num2;
  
  Serial.print("Sum of ");
  Serial.print(num1);
  Serial.print(" and ");
  Serial.print(num2);
  Serial.print(" is: ");
  Serial.println(sum);
  
  Serial.print("Product of ");
  Serial.print(num1);
  Serial.print(" and ");
  Serial.print(num2);
  Serial.print(" is: ");
  Serial.println(product);
}

void loop() {

}
