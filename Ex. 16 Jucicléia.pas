(*16) Uma telenovela de grande sucesso tem o seu final previsto para o dia 1o de novembro.
Sabe-se que neste dia será revelado nome do personagem responsável por inúmeros
assassinatos ocorridos no decorrer da trama. No entanto, no dia 1o de outubro (um mês
antes do término da novela), um funcionário da emissora conta para dois amigos o desfecho
do último capítulo. Com isto, no dia 1o de outubro, 3 pessoas sabem do desfecho da novela.
Supondo que cada nova pessoa a saber do final da novela contará para duas novas
pessoas no dia seguinte (e para mais ninguém), mais 4 pessoas estarão envolvidas ao final
do dia 2 de outubro (7 pessoas até este dia). No dia 3 de outubro, já serão 15 pessoas. Faça
um programa para ajudar o dono da emissora a decidir se deve demitir o funcionário
fofoqueiro: se ao término do dia 25 de outubro mais de 20000 (vinte mil) pessoas estiverem
sabendo do final da novela, o funcionário deverá ser demitido.*)

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