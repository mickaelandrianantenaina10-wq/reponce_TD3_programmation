cc=gcc
option= -Wall -Iinclude
cible= carre.exe
srcs= src/affichage_int_tab2d.c src/main.c src/operation_carre_magique.c src/prendreint.c src/remplissage.c
all: carre.exe
$(cible) : $(srcs)
	$(cc) $(option) -o $(cible) $(srcs)
install:
	sudo cp $(cible) /usr/local/bin/
clean:
	rm -f $(cible)  *.o
uninstall:
	sudo rm -f /usr/local/bin/$(cible)
dist:
	tar -czf carre-magique-1.0.tar.gz .

	
