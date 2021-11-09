//Fragment kodu
//ja nie wiem, czy coś z tego wyjdzie

uint8_t rainbowRepetitionCounter = 4; // na przykład
uint8_t activBottomRainbowLeds = 100; // na przykład
uint8_t licznik_petli_koloru_teczy_dolnej = 0;
uint8_t w = 0;

void loop() {
	for (uint8_t j=0; j < rainbowRepetitionCounter ; j++ ) {
		for (uint8_t i=(j*activBottomRainbowLeds/rainbowRepetitionCounter); i <= ((j+1)*activBottomRainbowLeds/rainbowRepetitionCounter) ; i++) {
			w=(( (i*256/activBottomRainbowLeds-256/rainbowRepetitionCounter) + licznik_petli_koloru_teczy_dolnej) & 255);
			}
		}
	licznik_petli_koloru_teczy_dolnej++;
	}
