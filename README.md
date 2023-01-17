# Funkce "komu se to líbí"
Systém "laiků" znáte z Facebooku a dalších stránek. Lidé mohou "lajkovat" obrázky nebo nebo různé příspěvky. 
Tato funkce vytváří text, který se vedlé takového příspěvku či obrázku zobrazí. 
Tato funkce bere na vstupu datovou strukturu pole obsahující jména lidí, kterým se daný příspěvěk líbí a vrací následující text:

[]                               -->  "no one likes this"
["Zita"]                         -->  "Zita likes this"
["Lada", "Pavel"]                -->  "Lada and Pavel like this"
["Jakub", "Anna", "Marek"]       -->  "Jakub, Anna and Markek like this"
["Olga", "Adam", "Mark", "Max"]  -->  "Olga, Adam and 2 others like this"

Pokud je na vstupu 4 a více jmen, "2 others" se zvýší o příslušný počet. 
