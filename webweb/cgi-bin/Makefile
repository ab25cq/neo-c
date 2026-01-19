all: select.cgi select2.cgi login.cgi main.cgi food.cgi walking.cgi ball.cgi pet.cgi

select.cgi: select.nc
	neo-c -o select.cgi select.nc 

select2.cgi: select2.nc
	neo-c -o select2.cgi select2.nc 

login.cgi: login.nc
	neo-c -o login.cgi login.nc  -lssl

main.cgi: main.nc
	neo-c -o main.cgi main.nc -lssl

food.cgi: food.nc
	neo-c -o food.cgi food.nc -lssl

walking.cgi: walking.nc
	neo-c -o walking.cgi walking.nc -lssl

ball.cgi: ball.nc
	neo-c -o ball.cgi ball.nc -lssl

pet.cgi: pet.nc
	neo-c -o pet.cgi pet.nc -lssl

clean:
	rm -f *.cgi food *.c *.o
