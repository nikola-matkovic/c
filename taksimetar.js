var gubitak, distanca, cena_goriva, potrosnja_as, potrosnja_g, potrosnja_o, procenat_zarade, placanje, zarada;
cena_goriva=145
potrosnja_g=8/100
potrosnja_o=5.5/100
potrosnja_as=(potrosnja_g+potrosnja_o)/2
procenat_zarade=500
distanca=13;
gubitak=cena_goriva*distanca*potrosnja_as
placanje=gubitak+(gubitak/100*procenat_zarade);
zarada=placanje-gubitak;
console.log("Za  pređenih"+distanca+" kilometara potrebno je  platiti"+placanje+" dinara \nvaša zarada je"+zarada);