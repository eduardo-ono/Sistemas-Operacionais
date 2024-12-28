#!/bin/bash

# Se o número de parâmetros for igual a 1, atribui o parâmetro à variável msg.
if [ $# == 1 ]
then
	msg="$1"
else
# Se o número de parâmetros for diferente de 1, solicita uma mensagem ao usuário para o "commit"
	echo "Entre com a mensagem (sem as aspas) do commit:"
	read msg
fi
git commit -am "$msg"
sleep 3
