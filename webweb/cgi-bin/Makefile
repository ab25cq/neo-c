all: select.cgi select2.cgi login.cgi main.cgi food.cgi walking.cgi ball.cgi pet.cgi

select.cgi: select.nc
	neo-c -I../.. -o select.cgi select.nc 

select2.cgi: select2.nc
	neo-c -I../.. -o select2.cgi select2.nc 

login.cgi: login.nc
	neo-c -I../.. -o login.cgi login.nc  -lssl

main.cgi: main.nc
	neo-c -I../.. -o main.cgi main.nc -lssl

food.cgi: food.nc
	neo-c -I../.. -o food.cgi food.nc -lssl

walking.cgi: walking.nc
	neo-c -I../.. -o walking.cgi walking.nc -lssl

ball.cgi: ball.nc
	neo-c -I../.. -o ball.cgi ball.nc -lssl

pet.cgi: pet.nc
	neo-c -I../.. -o pet.cgi pet.nc -lssl

clean:
	rm -f *.cgi food *.c *.o
