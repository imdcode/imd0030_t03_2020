#exemplo de seperação de arquivos em Make

BIN = ./bin
SRC = ./src
INC = ./include

PROG = $(BIN)/programa
CC = g++
CPPFLAGS = -Wall -I./include

OBJS = $(BIN)/Conta.o $(BIN)/ContaCorrente.o $(BIN)/ContaPoupanca.o $(BIN)/Movimentacao.o $(BIN)/Agencia.o $(BIN)/main.o

all: $(OBJS)
		$(CC) $(OBJS) -o $(PROG)

$(BIN)/main.o : $(SRC)/main.cpp
	$(CC) $(CPPFLAGS) -c $(SRC)/main.cpp -o $@
$(BIN)/Conta.o :  $(SRC)/Conta.cpp $(INC)/Conta.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/Conta.cpp -o $@
$(BIN)/ContaCorrente.o :  $(SRC)/ContaCorrente.cpp $(INC)/ContaCorrente.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/ContaCorrente.cpp -o $@
$(BIN)/ContaPoupanca.o :  $(SRC)/ContaPoupanca.cpp $(INC)/ContaPoupanca.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/ContaPoupanca.cpp -o $@
$(BIN)/Movimentacao.o : $(SRC)/Movimentacao.cpp $(INC)/Movimentacao.hpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/Movimentacao.cpp -o $@
$(BIN)/Agencia.o : $(SRC)/Agencia.cpp $(INC)/Agencia.hpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/Agencia.cpp -o $@

clean:
	rm -f core $(PROG) $(OBJS)