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
	
	writeln('Digite um n�mero');
	readln(numero);
	if raiz(numero)= 1 then 
		writeln('Exata')   
	else  
		writeln('N�o exata');
	
	writeln('A raiz � aproximadamente:',numero);
  
End.