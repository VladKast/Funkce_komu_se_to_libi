#### Funkce "komu se to líbí"
Systém "laiků" znáte z Facebooku a dalších stránek. Lidé mohou "lajkovat" obrázky nebo nebo různé příspěvky. 
Tato funkce vytváří text, který se vedlé takového příspěvku či obrázku zobrazí. 
Tato funkce bere na vstupu datovou strukturu pole obsahující jména lidí, kterým se daný příspěvěk líbí a vrací následující text:


[ ]                               -->  "no one likes this" <br />
["Zita"]                         -->  "Zita likes this" <br />
["Lada", "Pavel"]                -->  "Lada and Pavel like this" <br />
["Jakub", "Anna", "Marek"]       -->  "Jakub, Anna and Markek like this" <br />
["Olga", "Adam", "Mark", "Max"]  -->  "Olga, Adam and 2 others like this" <br />


Pokud je na vstupu 4 a více jmen, "2 others" se zvýší o příslušný počet. 
