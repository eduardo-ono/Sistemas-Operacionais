> Sistemas Operacionais > Conteúdo > Windows

# Prompt de Comando

__Prof. Eduardo Ono__

&nbsp;

## Principais Comandos

* Exemplo de comando para backup de dados:

```bat
robocopy "Meus Documentos" "S:\Backup\Meus Documentos" /E /XD .git
```

&nbsp;

## Comandos Gerais

| Comando | Descrição | Exemplo |
| --- | --- | --- |
| `cd`<br>`chdir` | Muda de diretório. | `cd ..`
| `cls` | 
| `date` | Exibe a data atual do sistema. |
| `dir` | Lista os arquivos e diretórios. | `dir`
| `exit` | Fecha o terminal. | `exit`
| `hostname` | Exibe o nome do computador. |
| `ver` | Exibe a versão do Windows.

* #### Vídeos de Apoio

| Thumb | Descrição |
| :-: | --- |
| [![img](https://img.youtube.com/vi/9JCEIq7svL4/default.jpg)](https://www.youtube.com/watch?v=9JCEIq7svL4) | <sup>[Bóson Treinamentos]</sup><br>[__50 comandos do Prompt de Comandos 01 - Comandos Básicos Gerais__](https://www.youtube.com/watch?v=9JCEIq7svL4)<br><sub>(17:56, YouTube, Out/2021)</sub>

### Gerenciamento de Arquivos e Diretórios

| Comando | Descrição | Exemplos
| --- | --- | --- |
| `attrib` | Altera os atributos de um arquivo. | `attrib +r arquivo.txt`
| `copy` | Copia um arquivo para um diretório destino. | `copy arquivo.txt destino`
| `del`<br>`delete` | Apaga um arquivo. | `
| `mkdir` <br> `md` | Cria um novo diretório. | `mkdir Nova_Pasta`
| `ren`<br>`rename` | Renomeia arquivo ou diretório. | `ren arquivo1.txt arquivo2.txt`
| `rmdir` | Remove um diretório. | `rmdir diretório`<br>`rmdir diretorio /s`
| `tree` | Exibe a estrutura de diretórios em formato de árvore. | `tree`

### Gerenciamento de Redes

| Comando | Descrição | Exemplos
| --- | --- | --- |
| `ping <endereço_ip>` | Exibe informações do servidor especificado.
| `ipconfig` | Exibe informações de rede.

* #### Vídeos de Apoio

| Thumb | Descrição |
| :-: | --- |
| [![img](https://img.youtube.com/vi/YB-Fp0oD45E/default.jpg)](https://www.youtube.com/watch?v=YB-Fp0oD45E) | <sup>[Bóson Treinamentos]</sup><br>[__50 comandos do Prompt de Comandos 02 - Gerenciamento de Arquivos e Pastas__](https://www.youtube.com/watch?v=YB-Fp0oD45E)<br><sub>(24:39, YouTube, Out/2021)</sub>

&nbsp;

### Gerenciamento de Redes

* #### Vídeos de Apoio



## Configuração do Prompt de Comando

* Exemplo com duas linhas

  ```bat
  setx PROMPT $E[0;32m[%USERNAME%]$s$E[1;33m$p$E[0;37m$_$g$s
  ```

  <img src="./prompt-03.png" alt="img" width="540px">

* https://docs.microsoft.com/en-us/previous-versions/windows/it-pro/windows-server-2012-R2-and-2012/cc725943(v=ws.11)?redirectedfrom=MSDN

<br>

### Tabela de Cores

| Valor | Atributos de texto |
| :-: | --- |
| 0 | All attributes off
| 1 | Bold on
| 4 | Underscore (on monochrome display adapter only)
| 5 | Blink on
| 7 | Reverse video on
| 8 | Concealed on

| Valor | Foreground colors | Valor | Background colors |
| :-: | --- | :-: | --- |
| 30 | Black   | 40 | Black
| 31 | Red     | 41 | Red
| 32 | Green   | 42 | Green
| 33 | Yellow  | 43 | Yellow
| 34 | Blue    | 44 | Blue
| 35 | Magenta | 45 | Magenta
| 36 | Cyan    | 46 | Cyan
| 37 | White   | 47 | White

<br>
