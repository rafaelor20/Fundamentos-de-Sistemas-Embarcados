// Definicoes de E/S
#include <avr/io.h>
// Biblioteca padrao de E/S
#include <stdio.h>
// para usar funcao fgets
#include <stdlib.h>
// Definicao do clock do sistema
#define F_CPU 16000000UL
// Definicao da taxa de transmissao
#define BAUD 9600
// Biblioteca auxiliar para comunicacao serial
#include <util/setbaud.h>
// Procedimento de inicializacao da UART 0
void inicializar_uart0() {
	// Configurando taxa de transmissao
	UBRR0H = UBRRH_VALUE;
	UBRR0L = UBRRL_VALUE;
	// Habilitando recepcao e transmissao
	UCSR0B = (1 << RXEN0) | (1 << TXEN0);
	// Modo assincrono e sem paridade
	// Quadro com 8 bits com 1 bit de parada
	UCSR0C = (1 << UCSZ01) | (1 << UCSZ00);
}
// Funcao para envio de dado pela UART 0
int enviar_dado_uart0(char dado, FILE* fluxo) {
	// Checando por quebra de linha
	if(dado == '\n') {
		enviar_dado_uart0('\r', fluxo);
	}
	// Esperando por envio pendente
	while(!(UCSR0A & (1 << UDRE0)));
	// Enviando dado
	UDR0 = dado;
	// Retornando sem erro
	return 0;
}
// Funcao para recebimento de dado pela UART 0
int receber_dado_uart0(FILE* fluxo) {
	// Esperando por recebimento
	while(!(UCSR0A & (1 << RXC0)));
	// Retornando registrador de dado
	return UDR0;
}

void convertPalavra(char texto[]){
  char morse_code[60] = { 0 };
	int i = 0;
	int j = 0;
	while (i < 12){
		switch(texto[i]){
                  case 'a':
                  morse_code[j++]='.';
                  morse_code[j++]='-';
                  break;

                  case 'b':
                  morse_code[j++]='-';
                  morse_code[j++]='.';
                  morse_code[j++]='.';
                  morse_code[j++]='.';
                  break;

                  case 'c':
                  morse_code[j++]='-';
                  morse_code[j++]='.';
                  morse_code[j++]='-';
                  morse_code[j++]='.';
                  break;

                  case 'd':
                  morse_code[j++]='-';
                  morse_code[j++]='.';
                  morse_code[j++]='.';
                  break;

                  case 'e':
                  morse_code[j++]='.';
                  break;

                  case 'f':
                  morse_code[j++]='.';
                  morse_code[j++]='.';
                  morse_code[j++]='-';
                  morse_code[j++]='.';
                    break;

                  case 'g':
                  morse_code[j++]='-';
                  morse_code[j++]='-';
                  morse_code[j++]='.';
                  break;

                  case 'h':
                  morse_code[j++]='.';
                  morse_code[j++]='.';
                  morse_code[j++]='.';
                  morse_code[j++]='.';
                    break;

                  case 'i':
                  morse_code[j++]='.';
                  morse_code[j++]='.';
                    break;

                  case 'j':
                  morse_code[j++]='.';
                  morse_code[j++]='-';
                  morse_code[j++]='-';
                  morse_code[j++]='-';
                    break;

                  case 'k':
                  morse_code[j++]='-';
                  morse_code[j++]='.';
                  morse_code[j++]='-';
                    break;

                  case 'l':
                  morse_code[j++]='.';
                  morse_code[j++]='-';
                  morse_code[j++]='.';
                  morse_code[j++]='.';
                  break;

                  case 'm':
                  morse_code[j++]='-';
                    morse_code[j++]='-';
                    break;

                  case 'n':
                  morse_code[j++]='-';
                  morse_code[j++]='.';
                    break;

                case 'o':
                  morse_code[j++]='-';
                  morse_code[j++]='-';
                  morse_code[j++]='-';
                    break;

                case 'p':
                  morse_code[j++]='.';
                  morse_code[j++]='-';
                  morse_code[j++]='-';
                  morse_code[j++]='.';
                    break;

                case 'q':
                  morse_code[j++]='-';
                  morse_code[j++]='-';
                  morse_code[j++]='.';
                  morse_code[j++]='-';
                    break;

                case 'r':
                  morse_code[j++]='.';
                  morse_code[j++]='-';
                  morse_code[j++]='.';
                    break;

                case 's':
                  morse_code[j++]='.';
                  morse_code[j++]='.';
                  morse_code[j++]='.';
                    break;

                case 't':
                  morse_code[j++]='-';
                    break;

                case 'u':
                  morse_code[j++]='.';
                  morse_code[j++]='.';
                  morse_code[j++]='-';
                    break;

                case 'v':
                  morse_code[j++]='.';
                  morse_code[j++]='.';
                  morse_code[j++]='.';
                  morse_code[j++]='-';
                    break;

                case 'w':
                  morse_code[j++]='.';
                  morse_code[j++]='-';
                  morse_code[j++]='-';
                    break;

                case 'x':
                  morse_code[j++]='-';
                  morse_code[j++]='.';
                  morse_code[j++]='.';
                  morse_code[j++]='-';
                    break;

                case 'y':
                  morse_code[j++]='-';
                  morse_code[j++]='.';
                  morse_code[j++]='-';
                  morse_code[j++]='-';
                    break;

                case 'z':
                  morse_code[j++]='-';
                  morse_code[j++]='-';
                  morse_code[j++]='.';
                  morse_code[j++]='.';
                    break;


                  case 'A':
                  morse_code[j++]='.';
                  morse_code[j++]='-';
                  break;

                  case 'B':
                  morse_code[j++]='-';
                  morse_code[j++]='.';
                  morse_code[j++]='.';
                  morse_code[j++]='.';
                  break;

                  case 'C':
                  morse_code[j++]='-';
                  morse_code[j++]='.';
                  morse_code[j++]='-';
                  morse_code[j++]='.';
                  break;

                  case 'D':
                  morse_code[j++]='-';
                  morse_code[j++]='.';
                  morse_code[j++]='.';
                  break;

                  case 'E':
                  morse_code[j++]='.';
                  break;

                  case 'F':
                  morse_code[j++]='.';
                  morse_code[j++]='.';
                  morse_code[j++]='-';
                  morse_code[j++]='.';
                    break;

                  case 'G':
                  morse_code[j++]='-';
                  morse_code[j++]='-';
                  morse_code[j++]='.';
                  break;

                  case 'H':
                  morse_code[j++]='.';
                  morse_code[j++]='.';
                  morse_code[j++]='.';
                  morse_code[j++]='.';
                    break;

                   case 'I':
                  morse_code[j++]='.';
                  morse_code[j++]='.';
                    break;

                case 'J':
                  morse_code[j++]='.';
                  morse_code[j++]='-';
                  morse_code[j++]='-';
                  morse_code[j++]='-';
                    break;

                case 'K':
                  morse_code[j++]='-';
                  morse_code[j++]='.';
                  morse_code[j++]='-';
                    break;

                case 'L':
                  morse_code[j++]='.';
                  morse_code[j++]='-';
                  morse_code[j++]='.';
                  morse_code[j++]='.';
                  break;

                case 'M':
                  morse_code[j++]='-';
                    morse_code[j++]='-';
                    break;

                case 'N':
                  morse_code[j++]='-';
                  morse_code[j++]='.';
                    break;

                case 'O':
                  morse_code[j++]='-';
                  morse_code[j++]='-';
                  morse_code[j++]='-';
                    break;

                case 'P':
                  morse_code[j++]='.';
                  morse_code[j++]='-';
                  morse_code[j++]='-';
                  morse_code[j++]='.';
                    break;

                case 'Q':
                  morse_code[j++]='-';
                  morse_code[j++]='-';
                  morse_code[j++]='.';
                  morse_code[j++]='-';
                    break;

                case 'R':
                  morse_code[j++]='.';
                  morse_code[j++]='-';
                  morse_code[j++]='.';
                    break;

                case 'S':
                  morse_code[j++]='.';
                  morse_code[j++]='.';
                  morse_code[j++]='.';
                    break;

                case 'T':
                  morse_code[j++]='-';
                    break;

                case 'U':
                  morse_code[j++]='.';
                  morse_code[j++]='.';
                  morse_code[j++]='-';
                    break;

                case 'V':
                  morse_code[j++]='.';
                  morse_code[j++]='.';
                  morse_code[j++]='.';
                  morse_code[j++]='-';
                    break;

                case 'W':
                  morse_code[j++]='.';
                  morse_code[j++]='-';
                  morse_code[j++]='-';
                    break;

                case 'X':
                  morse_code[j++]='-';
                  morse_code[j++]='.';
                  morse_code[j++]='.';
                  morse_code[j++]='-';
                    break;

                case 'Y':
                  morse_code[j++]='-';
                  morse_code[j++]='.';
                  morse_code[j++]='-';
                  morse_code[j++]='-';
                    break;

                case 'Z':
                  morse_code[j++]='-';
                  morse_code[j++]='-';
                  morse_code[j++]='.';
                  morse_code[j++]='.';
                    break;

                case '0':
                  morse_code[j++]='-';
                  morse_code[j++]='-';
                  morse_code[j++]='-';
                  morse_code[j++]='-';
                  morse_code[j++]='-';
                    break;

                case '1':
                  morse_code[j++]='.';
                  morse_code[j++]='-';
                  morse_code[j++]='-';
                  morse_code[j++]='-';
                  morse_code[j++]='-';
                    break;

                case '2':
                  morse_code[j++]='.';
                  morse_code[j++]='.';
                  morse_code[j++]='-';
                  morse_code[j++]='-';
                  morse_code[j++]='-';
                    break;

                case '3':
                  morse_code[j++]='.';
                  morse_code[j++]='.';
                  morse_code[j++]='.';
                  morse_code[j++]='-';
                  morse_code[j++]='-';
                    break;

                case '4':
                  morse_code[j++]='.';
                  morse_code[j++]='.';
                  morse_code[j++]='.';
                  morse_code[j++]='.';
                  morse_code[j++]='-';
                    break;

                case '5':
                  morse_code[j++]='.';
                  morse_code[j++]='.';
                  morse_code[j++]='.';
                  morse_code[j++]='.';
                  morse_code[j++]='.';
                    break;

                case '6':
                  morse_code[j++]='-';
                  morse_code[j++]='.';
                  morse_code[j++]='.';
                  morse_code[j++]='.';
                  morse_code[j++]='.';
                    break;

                case '7':
                  morse_code[j++]='-';
                  morse_code[j++]='-';
                  morse_code[j++]='.';
                  morse_code[j++]='.';
                  morse_code[j++]='.';
                    break;

                case '8':
                  morse_code[j++]='-';
                  morse_code[j++]='-';
                  morse_code[j++]='-';
                  morse_code[j++]='.';
                  morse_code[j++]='.';
                    break;

                case '9':
                  morse_code[j++]='-';
                  morse_code[j++]='-';
                  morse_code[j++]='-';
                  morse_code[j++]='-';
                  morse_code[j++]='.';
                    break;

        		case ' ':
                  morse_code[j++]=' ';
                    break;
                }
        morse_code[j++] = ' ';
		i++;
  
	}
	printf("%s\n", morse_code);
}

//void toStdout(morse_code, stdout){
//  i = 0;
//  while (i < 60){
//    putchar(morse_)
//  }
//}

// Criando fluxos de E/S para serial
FILE stdin_uart0 = FDEV_SETUP_STREAM(NULL, receber_dado_uart0, _FDEV_SETUP_READ);
FILE stdout_uart0 = FDEV_SETUP_STREAM(enviar_dado_uart0, NULL, _FDEV_SETUP_WRITE);
// Caracteres de texto
char texto[20] = { 0 };
char morse_code[60] = { 0 };
// Funcao principal
int main() {
	// Inicializando UART 0
	inicializar_uart0();
	// Reconfigurando E/S padrao
	stdin = &stdin_uart0;
	stdout = &stdout_uart0;
	// Laco infinito
	while(1) {
		// Recebendo e enviando dados
    char texto[20] = { 0 };
    fgets(texto, 20, stdin);
    convertPalavra(texto);
	}
}
