[seamk_logo]:   /img/seamk_watermark.png
[esp32]:        /img/esp32.jpg
[extensions]:   /img/extensions.png
[creation]:     /img/create_project.png
[wizard]:       /img/project_wizard.png
[tree]:         /img/program_tree.png
[compiling]:    /img/compiling.png
[successfull]:  /img/successful_compilation.png
[upload]:       /img/upload_program.png

# ESP32-mikrokontrollerin ohjelmointi

![seamk_logo]

> ## Sisällysluettelo
>
> 1. [ESP32-mikrokontrolleri](#1-ESP32-mikrokontrolleri)
>
>> 1.1. [Ohjelmointiympäristön asentaminen](#11-ohjelmointiympäristön-asentaminen)
>>
>> 1.2. [Projektin luominen](#12-projektin-luominen)
>>
>> 1.3. [Ohjelman kirjoittaminen](#13-ohjelman-kirjoittaminen)
>>
>> 1.4. [Ohjelman kääntäminen ja lataaminen mikro-ohjaimeen](#14-ohjelman-kääntäminen-ja-lataaminen-mikrokontrolleriin)

### 1 ESP32-mikrokontrolleri
Mikrokontrollerit eli mikro-ohjaimet ovat yhteen mikropiiriin toteutettuja tietokoneita. Mikropiiri sisältää prosessorin, muistin ja I/O -nastoja. Lisäksi mikrokontrollereissa voi olla muitakin ominaisuuksia, kuten esimerkiksi A/D muunnin, Bluetooth, Wi-Fi ja erilaisia väyliä. Vähimmillään mikrokontrolleri voi toimia virtalähteen kytkemisellä. Tässä esimerkissä käytetään ESP-WROOM-32 mikrokontrolleria. Prosessorina toimii kaksiytiminen Xtensa, 32-bittinen LX6-mikroprosessori, joka toimii maksimissaan 240 MHz:n taajuudella.

| ![esp32] |
| :--: |
| <b>Kuva 1, ESP-WROOM-32 mikrokontrolleri |

#### 1.1 Ohjelmointiympäristön asentaminen
Tällä kurssilla ohjelmoinnissa käytetään editorina Visual Studio Codea ja PlatformIO IDE lisäosaa.

Asenna ensin Visual Studio Code ja siihen lisäosa PlatformIO IDE.

| ![extensions] |
| :--: |
| <b>Kuva 2, PlatformIO IDE asennus. |

#### 1.2 Projektin luominen
Projektin luominen alkaa `Welcome to PlatformIO` sivulta ja valitsemalla sieltä `New Project`

| ![creation] |
| :--: |
| <b>Kuva 3, Projektin luominen. |

`New Project` avaa ikkunan, jolla tehdään määritykset uudelle projektille. Kirjoita `Name` kohtaan projektin nimi. Tässä esimerkissä nimeksi valitaan `Eka_Testi`. 
`Board` kohtaan valitse käyttämäsi mikrokontrolleri. Tässä esimerkissä käytetään `NodeMCU-32-S` mikrokontrolleria.
`Framework` on `Arduino Framework`. 

| ![wizard] |
| :--: |
| <b>Kuva 4, Project Wizard. |

Hetken odottelun jälkeen `Eka_Testi` projekti on valmis ohjelmointia varten. Ohjelmakoodi kirjoitetaan `main.cpp` tiedostoon. Kuvassa 5 on tyhjä `Arduino framework` ohjelmarunko. Ohjelmassa on kaksi funktiota, `setup` ja `loop`. `Setup-funktio` suoritetaan vain kerran ohjelman suorituksen alkaessa. Funktiossa voidaan esimerkiksi alustaa muuttujien lähtöarvoja. `Setup-funktion` suorituksen jälkeen ohjelmakierto siirtyy `loop-funktioon`.

| ![tree] |
| :--: |
| <b>Kuva 5, Ohjelmarunko. |

#### 1.3 Ohjelman kirjoittaminen
Lataa __Githubista__ tiedosto `main.cpp`. Tiedosto löytyy `/src` kansiosta. Tähän kansioon tallennetaan kaikki ohjelman lähdekoodit.

#### 1.4 Ohjelman kääntäminen ja lataaminen mikrokontrolleriin
Jotta ohjelma voisi toimia mikrokontrollerissa, täytyy se ensin kääntää tekstistä binäärimuotoon. Ohjelman kääntäminen tapahtuu Visual Studio Codessa.

| ![compiling] |
| :--: |
| <b>Kuva 6, Binäärikoodiksi kääntäminen |

Editorin alalaidasta löytyy nuolen osoittamasta kohdasta `Build` nappi. Kääntäminen suoritetaan kyseistä nappia painamalla. Jos kääntämisen tuloksena on __SUCCESS__, ohjelmakoodin käännös binäärimuotoon onnistui. Kuvassa 7 on esimerkki onnistuneesta käännöksestä.

| ![successfull] |
| :--: |
| <b>Kuva 7, Käännös |

Jos käännös ei onnistunut ohjelmassa on virhe ja se on korjattava. Korjauksen jälkeen käännetään ohjelma uudestaan.

| ![upload] |
| :--: |
| <b>Kuva 8, Ohjelman lataaminen mikrokontrollerin muistiin |

Käännetty binäärimuotoinen ohjelmakoodi siirretään mikrokontrollerin muistiin kuvan 8 osoittamasta napista. Ohjelmakoodin siirron jälkeen mikrokontrolleri käynnistyy uudelleen ja prosessori aloittaa ohjelmakoodin suorituksen.
