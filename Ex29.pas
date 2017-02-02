Program raizExata ;
var numero:integer;
		inteiro:real;

function raiz(var numero:integer):integer;
var aux:real;
		inteiro:integer;
begin
	aux:=sqrt(numero);
	inteiro:=trunc(aux);
	if inteiro * inteiro = numero then
		raiz:=1
	else 
		raiz:=0;
		
	numero:=inteiro; 
end;

Begin
	
	writeln('Digite um número');
	readln(numero);
	if raiz(numero)= 1 then 
		writeln('Exata')   
	else  
		writeln('Não exata');
	
	writeln('A raiz é aproximadamente:',numero);
  
End.