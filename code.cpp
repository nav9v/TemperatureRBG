const int r = 10, g = 3, b = 6;
const int tPin = A2;

void setup()
{
    pinMode(r, OUTPUT);
    pinMode(g, OUTPUT);
    pinMode(b, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    int val = analogRead(tPin);

    float temp = map(val, 20, 360, -40, 125);

    Serial.print("Analog Value: ");
    Serial.print(val);
    Serial.print("  Temp: ");
    Serial.print(temp);
    Serial.println(" °C");

    if (temp > 0 && temp <= 100)
    {
        digitalWrite(r, LOW);
        digitalWrite(g, LOW);
        digitalWrite(b, HIGH);
        Serial.println("Temp > 0°C and <= 100°C: Blue LED ON");
    }
    else if (temp <= 0)
    {
        digitalWrite(r, HIGH);
        digitalWrite(g, LOW);
        digitalWrite(b, LOW);
        Serial.println("Temp <= 0°C: Red LED ON");
    }
    else if (temp > 100)
    {
        digitalWrite(r, LOW);
        digitalWrite(g, HIGH);
        digitalWrite(b, LOW);
        Serial.println("Temp > 100°C:GREEN LED ON");
    }

    delay(1000);
}

// made with lots of 💢🥶😑🥵
