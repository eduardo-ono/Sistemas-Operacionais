> Sistemas Operacionais > Windows

# Configurações

Prof. Eduardo Ono

<br>

## Habilitar/Desabilitar o Controle de Hibernação no Menu Iiniciar

* Abrir a janela `Opções de Energia` através do comando:

```bat
powercfg.cpl
```

`Escolher a função dos botões de energia`

`Alterar configurações não disponíveis no momento` (requer privilégios administrativos)

Em Hibernação, habilitar/desabilitar `Mostrar no munu iniciar`.

<br>

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

<br>
