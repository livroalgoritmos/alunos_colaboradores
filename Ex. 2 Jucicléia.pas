(*2) Faça um programa que leia 2 números da entrada e imprima o seu produto.*)

Program produto;
var x, y: integer;
Begin
	write('Digite o nro: ');
	readln(x);  
	write('Digite o nro: ');
	readln(y);
	//uma outra solucao seria criar uma variavel atribuir o resultado para a mesma e imprimi la 
	//p:= x*y;
	writeln('O resultado eh ', x*y);
End.