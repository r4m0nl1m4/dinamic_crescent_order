#Makefile for "dinamic_crescent_order" C++ application
#Created by r4m0nl1m4 03/03/2020

#executável
PROG = dinamic_crescent_order								
#compilador
CC = g++
#diretorio
DIR = pwd
#diretivas de compilação
CPPFLAGS = -O0        \
           -g         \
           -Wall      \
           -ansi      \
           -pedantic  \
           -std=c++11 \
           -DIR      
#diretivas para o ligador (linker)
LDFLAGS = -DIR
#arquivos objetos definidos como pré-requisito
OBJS = dinamic_crescent_order.o			

#regra de construção do executável
$(PROG):$(OBJS)
	$(CC) $(LDFLAGS) -o $(PROG) $(OBJS)			

#regra de construção dos arquivos objetos
dinamic_crescent_order.o:
	$(CC) $(CPPFLAGS) -c dinamic_crescent_order.cpp

#regra de limpeza dos arquivos
clean:
	rm -rf core $(PROG) $(OBJS)