// 3. Neka se u datoteci teniseri.txt nalaze podaci o teniserima po sledecem formatu: Sifra igračaž
// (ceo broj), ime (najviše 30 znakova), prezime (najviše 30 znakova) i broj poena na ATP rang listi 
// (ceo broj) U datoteci wimbledon.txt se nalaze podaci o plasmanu tenisera na ovom teniskom turniru.
// U svakom redu datoteke se nalazi šifra tenisera (ceo broj), broj poena koji brani na turniru (ceo broj)
// broj poena koji je osvojio na turniru (ceo broj). Raspored tenisera u datotekama ne mora biti identičan,
// niti svi teniseri iz prve datoteke moraju postojati u drugoj datoteci. Napisati program na programskom jeziku
// C koji pročita sadržaj ulaznih tekst i smešta ih u niz struktura, a zatim u izlaznu datoteku atplista.txt za
// svakog tenisera upiše novi broj poena po formatu kao u prvoj ulaznoj datoteci. Novi broj poena se dobija tako
// što se od starog broja poena na ATP listi oduzme broj poena koje teniser brani, a zatim doda broj poena koje je
// teniser osvojio na turniru