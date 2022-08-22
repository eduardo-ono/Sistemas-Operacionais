# Comandos do Bash

__Prof. Eduardo Ono__

&nbsp;

## Comandos Básicos

Obs.: Parâmetros entre `<>` são obrigatórios. Parâmetros entre `[]` são opcionais.

| Comando | Descrição | Parâmetros
| --- | --- | --- |
| `man <comando>` | Exibe o "manual" do comando especificado.

## Comandos Gerais

| Comando | Descrição | Parâmetros
| --- | --- | --- |
| `whoami` | Exibe o nome do usuário.
| `sudo su` | Alterna para o "super usuário". `exit` para retornar.
| `clear`<br>(<kbd>Ctrl</kbd>+<kbd>L</kbd>) | Limpa a tela.
| `ls` | Lista arquivos e diretórios. | `-l` `-h` `-a`
| `cd [nome_do_diretório]` | Altera para o diretório "nome_do_diretório". | `~`: Altera para o diretório `home/usuário`.
| `mkdir <nome_do_diretório>` | Cria um novo diretório ou vários diretórios (separados por espaços).
| `rmdir <nome_do_diretório>` | Remove um diretório ou vários diretórios (separados por espaços).
| `pwd` | ("Print Working Directory"). Exibe o nome do diretório atual
| `sudo shutdown -h now` | Encerra o sistema.

## Gerenciamento de Pacotes

| Comando | Descrição | Parâmetros
| --- | --- | --- |
| `sudo apt update` | Atualiza a lista de repositórios do sistema.
| `sudo apt upgrade` | Atualiza os pacotes instalados no sistema.
| `apt list [pacote]` | Exibe a lista de pacotes instalados [somente do pacote especificado].
| `sudo apt install <nome_do_pacote>` | Instala o pacote especificado.

## Gerenciamento de Arquivos

| Comando | Descrição | Parâmetros
| --- | --- | --- |
| `cat <nome_do_arquivo>` | Exibe o conteúdo do arquivo "txt" especificado.
| `less <nome_do_arquivo>` | Exibe o conteúdo de um arquivo "txt" longo.
| `touch <nome_do_arquivo>` | Cria um novo arquivo vazio.
| `rm <nome_do_arquivo>` | Remove o arquivo especificado.
| `grep ` | Filtra conteúdo de arquivos "txt".

## Gerenciamento de Processos

| Comando | Descrição | Parâmetros
| --- | --- | --- |
| `ps` | Lista os processos em execução. | `aux`
| `sudo kill -9 <ID_do_processo>` | "Mata" o processo especificado.

## Gerenciamento de Redes

* Alguns comandos requerem a instalação do pacoite `net-tools`.

| Comando | Descrição | Parâmetros
| --- | --- | --- |
| `ping <endereço>` | Exibe informações do servidor especificado.
| `sudo ifconfig` | Exibe informações da rede.
| `mtr <endereço>` | Exibe informações de conexão endereço especificado.
| `netstat <interface>` | Exibe informações sobre a interface especificada.
| `traceroute <endereço>` | Exibe informações sobre as rotas de conexão.
| `dig <servidor>` | Exibe informações do DNS do servidor.
| `nslookup <endereço>` | Exibe informações sobre o 
| `route` | Exibe informações sobre a tabela de roteamento do sistema.
| `ethtool <interface>` | Exibe estatísticas da interface de rede.
| `iwconfig` | 
&nbsp;

## Vídeos de Apoio

| Thumb | Descrição |
| :-: | --- |
| [![img](https://img.youtube.com/vi/JEhVB4VHsTI/default.jpg)](https://www.youtube.com/watch?v=JEhVB4VHsTI) | <sup>[Diolinux]</sup><br>[__Aprenda os comandos básicos do Linux - Terminal Ubuntu__](https://www.youtube.com/watch?v=JEhVB4VHsTI)<br><sub>(40:05, YouTube, Mai/2020)</sub>
| [![img](https://img.youtube.com/vi/uZeMQz89pfw/default.jpg)](https://www.youtube.com/watch?v=uZeMQz89pfw) | <sup>[Bóson Treinamentos]</sup><br>[__20 comandos mais importantes para iniciantes no Linux - 1 a 10__](https://www.youtube.com/watch?v=uZeMQz89pfw)<br><sub>(12:11, YouTube, Abr/2017)</sub>
| [![img](https://img.youtube.com/vi/1HapBf0cnmU/default.jpg)](https://www.youtube.com/watch?v=1HapBf0cnmU) | <sup>[Bóson Treinamentos]</sup><br>[__20 comandos mais importantes para iniciantes no Linux - 11 a 20__](https://www.youtube.com/watch?v=1HapBf0cnmU)<br><sub>(16:23, YouTube, Abr/2017)</sub>
| [![img](https://img.youtube.com/vi/usrV9-CtVnw/default.jpg)](https://www.youtube.com/watch?v=usrV9-CtVnw) | <sup>[Bóson Treinamentos]</sup><br>[__10 comandos de rede importantes para aprender no Linux__](https://www.youtube.com/watch?v=usrV9-CtVnw)<br><sub>(26:56, YouTube, Jul/2017)</sub>

&nbsp;
