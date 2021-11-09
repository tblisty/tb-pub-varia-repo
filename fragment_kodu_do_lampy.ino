//Fragment kodu
//ja nie wiem, czy coś z tego wyjdzie

void loop() {
	for (uint8_t j=0; j < rainbowRepetitionCounter ; j++ ) {
        for (uint8_t i=(j*activBottomRainbowLeds/rainbowRepetitionCounter); i <= ((j+1)*activBottomRainbowLeds/rainbowRepetitionCounter) ; i++) {
			w=(( (i*256/activBottomRainbowLeds-256/rainbowRepetitionCounter) + licznik_petli_koloru_teczy_dolnej) & 255);
        }
    }
	licznik_petli_koloru_teczy_dolnej++;
}
