(*14) Faça um programa que leia dois números da entrada (X e Y) e calcule XY. Suponha que X e
Y são positivos.*)

Program elevado;
var x, y, r, i: integer;
Begin
	write('Digite um numero: ');
	readln(x);
	write('Informe o expoente: ');
	readln(y);

	for i:= 1 to y do
	begin
		if i= 1 then
			r:=x
		else
			r:= r*x;
	end;
	write('O resultado eh ', r);
	readkey;
	
End.