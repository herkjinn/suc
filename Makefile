build:
	cc suc.c -o suc
install:
	cp ./suc /usr/local/bin/suc 
clean:
	rm suc
