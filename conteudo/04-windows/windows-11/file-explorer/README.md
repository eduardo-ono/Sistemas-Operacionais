
# Windows 11 :: File Explorer

## Novo Menu de Contexto do File Explorer

Após o update do Notepad para a versão 11.2311.33.0 (Windows 11 23H2), o munu de contexto do File Explorer começou a exibir o item `Editar no Bloco de Notas` para qualquer arquivo selecionado, o que pode não ser conveniente para algum usuário.

* Remover o item `Editar no Bloco de Notas` para __o usuário atual__:

  ```cmd
  reg add "HKCU\Software\Microsoft\Windows\CurrentVersion\Shell Extensions\Blocked" /v "{CA6CC9F1-867A-481E-951E-A28C5E4F01EA}" /d "" /t REG_SZ /f
  ```

* Remover o item `Editar no Bloco de Notas` para __todos os usuários__ (requer privilégios de administrador):

  ```cmd
  reg add "HKLM\Software\Microsoft\Windows\CurrentVersion\Shell Extensions\Blocked" /v "{CA6CC9F1-867A-481E-951E-A28C5E4F01EA}" /d "" /t REG_SZ /f
  ```

* Adicionar o item `Editar no Bloco de Notas` (restaurar o padrão) para __o usuário atual__:

  ```cmd
  reg delete "HKCU\Software\Microsoft\Windows\CurrentVersion\Shell Extensions\Blocked" /v "{CA6CC9F1-867A-481E-951E-A28C5E4F01EA}" /f
  ```

* Adicionar o item `Editar no Bloco de Notas` (restaurar o padrão) para __todos os usuários__ (requer privilégios de administrador):

  ```cmd
  reg delete "HKLM\Software\Microsoft\Windows\CurrentVersion\Shell Extensions\Blocked" /v "{CA6CC9F1-867A-481E-951E-A28C5E4F01EA}" /f
  ```

&nbsp;

## Referências

* https://winaero.com/remove-edit-in-notepad-context-menu/

&nbsp;
