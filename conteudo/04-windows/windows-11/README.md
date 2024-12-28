# Microsoft Windows 11

Prof. Eduardo Ono

## Instalação

### Pré-requisitos

* #### TPM 2.0

  * Para verificar a existência do TPM 2.0 e se o mesmo está habilitado na BIOS, abrir o PowerShell com permissão de Administrador e executar um dos comandos:

    ```cmd
    get-tpm
    ```

  * Como administrador, executar

    ```cmd
    tpm.msc
    ```

  * Outra forma:

    Abrir a janela Configurações > Atualização e Segurança > Segurança do Windows > Segurança do Dispositivo > Detalhes do Processador de Segurança

&nbsp;

## Recursos

### Recall

* Para obter informações do status do Recall

  ```cmd
  Dism /Online /Get-Featureinfo /Featurename:Recall
  ```

* Para desabilitar o Recall

  ```cmd
  Dism /Online /Disable-Feature /Featurename:Recall
  ```

* Para habilitar o Recall

  ```cmd
  Dism /Online /Enable-Featureinfo /Featurename:Recall
  ```

&nbsp;
