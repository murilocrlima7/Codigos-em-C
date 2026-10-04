/*
 (Validação de senha) Um sistema precisa verificar se as senhas cadastradas atendem a determinados requisitos
de segurança. Desenvolva um programa em C que leia uma senha e verifique se ela satisfaz simultaneamente às
seguintes condições:
 possuir pelo menos oito caracteres;
 possuir pelo menos uma letra maiúscula;
 possuir pelo menos uma letra minúscula;
 possuir pelo menos um algarismo;
 possuir pelo menos um caractere especial;
 não possuir espaços em branco.
Considere como caractere especial qualquer caractere que não seja uma letra, um algarismo ou um espaço.
Caso a senha satisfaça todas as condições, o programa deverá imprimir “Senha valida”, caso contrário, deverá
imprimir “Senha invalida”.
Por exemplo, para a senha “algoritmo12”, o programa deverá imprimir “Senha invalida”. Para a senha
“alGoritmo@12”, o programa deverá imprimir “Senha valida”
*/
#include<stdio.h>
#include<ctype.h>

int verificarSenha(const char *senha);

int main(){
	char senha[100];
	scanf(" %[^\n]", senha);
	int dig = verificarSenha(senha);
	if(dig)
		printf("Senha valida!\n");
	else
		printf("Senha invalida!\n");
	return 0;
}

int verificarSenha(const char *senha){
	int tam, i=0, verificador=0;
	
	for(; *(senha+i)!='\0'; i++){
		if(isblank(*(senha+i))) // Verifica se há espaços na string
			return 0;
		tam++;
	}

	if(tam>=8) // Verifica o tamanho de caracteres
		verificador++;
		
	for(i=0; *(senha+i)!='\0'; i++) // Verifica se há pelo menos uma letra maiúscula
		if(isupper(*(senha+i))){
			verificador++; break;
		}
	
	for(i=0; *(senha+i)!='\0'; i++) // Verifica se há pelo menos uma letra minúscula
		if(islower(*(senha+i))){
			verificador++; break;
		}
		
	for(i=0; *(senha+i)!='\0'; i++) // Verifica se há pelo menos um algarismo
		if(isdigit(*(senha+i))){
			verificador++; break;
		}
		
	for(i=0; *(senha+i)!='\0'; i++) // Verifica se há pelo menos um caractere especial
		if(isalnum(*(senha+i))==0){
			verificador++; break;
		}
		
	if(verificador == 5)
		return 1;
	else
		return 0;
}