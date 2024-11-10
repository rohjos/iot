int sensor_pin = A0;

void setup()
{
  Serial.begin(9600);
  pinMode(sensor_pin,INPUT);
}

void loop()
{
int sensor_data = analogRead(sensor_pin);
Serial.println(sensor_data);

if(sensor_data >=1000)
{
  Serial.println("No moisture, Soil is dry");
}
else if(sensor_data >= 500 && sensor_data <= 700)
{
  Serial.println("There is some moisture, Soil is medium");
}
else if(sensor_data <=400)
{
  Serial.println("Soil is wet");
}
}