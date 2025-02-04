> Sistemas Operacionais > Windows

# Configurações

Prof. Eduardo Ono

&nbsp;

## Acesso às Janelas da Interface Gráfica à partir da CLI

| Comando | Tela/Janela |
| --- | --- |
| `devmgmt.msc` | Gerenciador de Dispositivos |
| `diskmgmt.msc` | Gerenciamento de Disco |
| `eventvwr.msc` | Visualizador de Eventos |
| `lusrmgr.msc` | Usuários e Grupos Locais (Windows Pro+) |
| `tpm.msc` | Gerenciamento do Trusted Platform Module (TPM) no Computador Local |
| `powercfg.cpl` | Opções de Energia |
| `shell:appsfolder` | Applications |
| `shell:startup` | Diretório inicializar do usuário corrente |
| `shell:common startup` | Diretório inicializar global |

* Obs.: Para executar um comando como administrador na janela Executar, usar a combinação <kbd>Shift</kbd>+<kbd>Ctrl</kbd>+<kbd>Enter</kbd> após entrar com o comando.

&nbsp;

## Habilitar/Desabilitar o Controle de Hibernação no Menu Iiniciar

* Abrir a janela `Opções de Energia` através do comando:

```bat
powercfg.cpl
```

`Escolher a função dos botões de energia`

`Alterar configurações não disponíveis no momento` (requer privilégios administrativos)

Em Hibernação, habilitar/desabilitar `Mostrar no munu iniciar`.

&nbsp;

## Habilitar/Desabilitar a Hibernação

* Para desabilitar o modo de hibernação, executar o Windows Terminal como administrador e digitar:

  ```bat
  powercfg.exe /hibernate off
  ```

  ou

  ```bat
  powercfg -h off
  ```

  OBS.: O arquivo C:\hiberfil.sys deverá desaparecer.

* Para habilitar o modo de hibernação, executar o Windows Terminal como administrador e digitar:

  ```bat
  powercfg.exe /hibernate on
  ```

  ou

  ```bat
  powercfg -h on
  ```

* "god mode": Criar o diretórtio a seguir no Desktop

```cmd
GodMode.{ED7BA470-8E54-465E-825C-99712043E01C}
```

&nbsp;
