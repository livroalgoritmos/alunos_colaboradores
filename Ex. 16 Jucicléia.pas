(*16) Uma telenovela de grande sucesso tem o seu final previsto para o dia 1o de novembro.
Sabe-se que neste dia ser� revelado nome do personagem respons�vel por in�meros
assassinatos ocorridos no decorrer da trama. No entanto, no dia 1o de outubro (um m�s
antes do t�rmino da novela), um funcion�rio da emissora conta para dois amigos o desfecho
do �ltimo cap�tulo. Com isto, no dia 1o de outubro, 3 pessoas sabem do desfecho da novela.
Supondo que cada nova pessoa a saber do final da novela contar� para duas novas
pessoas no dia seguinte (e para mais ningu�m), mais 4 pessoas estar�o envolvidas ao final
do dia 2 de outubro (7 pessoas at� este dia). No dia 3 de outubro, j� ser�o 15 pessoas. Fa�a
um programa para ajudar o dono da emissora a decidir se deve demitir o funcion�rio
fofoqueiro: se ao t�rmino do dia 25 de outubro mais de 20000 (vinte mil) pessoas estiverem
sabendo do final da novela, o funcion�rio dever� ser demitido.*)

Program telenovela;
var tp, soma, i: integer; 
Begin
	tp:=3;
	soma:=2;
	for i:= 1 to 25 do
	begin
		tp:=tp+soma*2;
		soma:=soma*2;
	end;
	writeln('Total de pessoas: ', tp);
	if (tp>20000) then
		writeln('Dar demissao')
	else
		writeln ('Considerar fofoca');
		
	readkey;  
End.