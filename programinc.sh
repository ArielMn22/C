#!/bin/bash

PROGRAMS="vim git gcc make"
REPOSITORY="http://github.com/ArielMn22/C"
SN=0 # Sim ou Não
returno=0 # Checa o return do comando

clonar(){

    echo "Clonando repositório..."
    git clone $REPOSITORY &>/dev/null
    var=$?

    if [[ $var == 0 ]]; then
	    	echo "Repositório clonado com sucesso..."
    else
     if [[ $var == 128 ]]; then
        echo "Repositório já clonado..."
      else
	    echo "Repositório não foi clonado..."
      fi
    fi

}

clear; echo "Atualizando..."

apt update &>/dev/null || echo "Algo deu errado com o update..."

for x in $PROGRAMS; do
	echo "Instalando $x..."
	apt install $x -y &>/dev/null || echo "Algo deu errado com $x..."
done

read -p "Deseja clonar o repositório \"$REPOSITORY\"? >" SN
SN=$(echo $SN | tr A-Z a-z)

case $SN in
  "sim"|"s"|"ss"|"yes"|"si")
    clonar
    ;;
  "nao"|"não"|"no")
    echo "Repositório não clonado..."
    ;;
  *)
    echo "Repositório não clonado"
    ;;
esac
	
echo '
set nocompatible
set nu
syntax on
set encoding=utf-8
set showcmd
filetype plugin indent on

set tabstop=2 shiftwidth=2
set expandtab
set backspace=indent,eol,start

set hlsearch
set incsearch
set ignorecase
set smartcase' > ~/.vimrc
