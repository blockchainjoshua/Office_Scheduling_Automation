void RelayStatusChecker() {
  if (relay1Status == true) {
    Serial.println("RELAY 1 IS ON!!!!");
  }
  else if (relay1Status == false) {
    Serial.println("RELAY 1 IS OFF!!!!");
  }
  if (relay2Status == true) {
    Serial.println("RELAY 2 IS ON!!!!");
  }
  else if (relay2Status == false) {
    Serial.println("RELAY 2 IS OFF!!!!");
  }
}
