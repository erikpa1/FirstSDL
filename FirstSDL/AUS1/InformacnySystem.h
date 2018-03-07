#pragma once
#include <string>

#include "BioFarmar.h"

using namespace std;

class InformacnySystem
{

public:

	InformacnySystem();
	~InformacnySystem();

	void pridajBiofarmara();
	void vypisFarmarovPodlaPolotovaru(string tovar);
	void pridajVozidlo(string datum, string spz, string typ, string naklady);
	void zaregistrujZakaznika(string nazov, string cisloRegionu);
	void zaevidujZakazku(string datum, string zakaznik, string typ, string mnozstvo, string cenaKs, string datumDorucenia);
	void kontrolaPoziadaviek();
	void vypisObjednavkyNaDalsiDen();
	void naplnVozidla();
	void vypisVozidla();
	void registraciaZakaznika();
	void zaevidujObjednavku();
	void odovzdanieTovaru();
	void vypisZoznamVsetkychZrealizovanychObjednavok();
	void vypisBiofarmaraSNajvecsiouObjednavkou();
	void vypisCelkovyZisk();

private:
		
	/*linkedList<vozidla> vozidla;
	 *linkedList<Biofarmari> farmari;
	 *linkedList<Zakaznici> zakaznicil
	 */












};


