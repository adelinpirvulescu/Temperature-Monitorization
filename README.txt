Student: Pirvulescu Ionut-Adelin
Grupa: 334AC


  Sensors_input module:

-folosind assign, am calculat suma temperaturilor senzorilor care aveau enable pe 1 inmultind 
temperatura respectiva cu sensors_en_i respectiv;
-valoarea temperaturilor este reprezentata pe cate 8 biti fiecare in variabila pe 40 de biti 
sensors_data_i;
-folosind assign, am calculat numarul senzorilor activi;

  Division module:

-plecand de la algoritmul de impartire cu rest gasit in link-ul din RESURSE
https://en.wikipedia.org/wiki/Division_algorithm si adaptat pentru sintaxa Verilog, am reusit sa 
implementez modulul conform cerintei;
-am initializat variabilele, intr-un for de la 16 la 1, am facut shifteri la stanga cu cate un bit
, cand restul este mai mare decat impartitorul, setam bitul de pe pozitia i-1 pe 1 si scadem din 
rest impartitorul;

  Output_display module:

-prima oara, am verificat daca restul este mai mare sau egal decat jumatate din numarul de senzori
activi pentru a face aproximatia corecta, dupa care daca temperatura este in intervalul 19-26
realizam codificarea corespunzatoare prin shiftare la stanga cu un bit si adunare cu 1;
-daca valoarea nu este in intervalul corespunzator, alert_o trece pe 1 si coded_out_o pe codul 
corespunzator;

  Temperature_top module:

-in acest modul, am realizat legaturile dintre cele 3 module de mai sus conform schemei din cerinta
de la IMPLEMENTARE;
-am intampinat o problema la testare, dar am rezolvat-o creand niste variabile wire in care prin 
assign am atribuit valorile de la iesirile modulelor, dupa care a functionat; 
