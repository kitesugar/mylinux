test1: main.o menu.o tianliang.o
	gcc main.o menu.o tianliang.o -o test1
main.o: main.c
	gcc main.c -c
menu.o: menu.c
	gcc menu.c -c
tianliang.o: tianliang.c
	gcc tianliang.c -c
clean:
	-rm -rf *.o
