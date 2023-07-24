#include <stdio.h>
#include <string.h>

void solicitarSenha(char *senha) {

	printf("Digite a senha: ");
	gets(senha);

}

int verifica(const char *senha) {

	const char senhaCorreta[] = "KrakenAcademy";
	return strcmp(senha, senhaCorreta) == 0;
}

void mensagemFinal() {
	printf("Senha correta!\n");
	printf("flag{Kr4k3n_B0F_Success}\n");
}

int main() {
	char senha[100];

	solicitarSenha(senha);

	if (verifica(senha)) {
		mensagemFinal();
	} else {
		printf("Senha incorreta! Acesso negado.\n");
	}

	return 0;
}
