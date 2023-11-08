main: _build/default/ocaml/mylib.exe.o mylib.o main.c
	gcc -o main -lm main.c mylib.o _build/default/ocaml/mylib.exe.o

mylib.o: mylib.c
	gcc -I $$(ocamlc -where) -c mylib.c

_build/default/ocaml/mylib.exe.o: ocaml/mylib.ml
	dune build

clean:
	dune clean
	rm -f *.o
	rm main

.PHONY: clean
