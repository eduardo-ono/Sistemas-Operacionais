
# Windows 11 - File Explorer

## Novo Menu de Contexto do File Explorer

Após o update 23H2 do Windows 11, o File Explorer passou a exibir itens adicionais no meu de contexto do File Explorer, o que pode não ser conveniente para todos os usuários. Por exemplo, o item `Editar no Bloco de Notas` é exibido para praticamente qualquer tipo de arquivo selecionado.

### Remover o item `Editar no Bloco de Notas`

* Para __o usuário atual__:

  ```cmd
  reg add "HKCU\Software\Microsoft\Windows\CurrentVersion\Shell Extensions\Blocked" /v "{CA6CC9F1-867A-481E-951E-A28C5E4F01EA}" /d "" /t REG_SZ /f
  ```

* Para __todos os usuários__ (requer privilégios de administrador):

  ```cmd
  reg add "HKLM\Software\Microsoft\Windows\CurrentVersion\Shell Extensions\Blocked" /v "{CA6CC9F1-867A-481E-951E-A28C5E4F01EA}" /d "" /t REG_SZ /f
  ```

### Adicionar o item `Editar no Bloco de Notas` (restaura o default)

* Para __o usuário atual__:

  ```cmd
  reg delete "HKCU\Software\Microsoft\Windows\CurrentVersion\Shell Extensions\Blocked" /v "{CA6CC9F1-867A-481E-951E-A28C5E4F01EA}" /f
  ```

* Para __todos os usuários__ (requer privilégios de administrador):

  ```cmd
  reg delete "HKLM\Software\Microsoft\Windows\CurrentVersion\Shell Extensions\Blocked" /v "{CA6CC9F1-867A-481E-951E-A28C5E4F01EA}" /f
  ```

&nbsp;

### Remover o item `Edite no Clipchamp`

* Para __o usuário atual__:

  ```cmd
  reg add "HKCU\Software\Microsoft\Windows\CurrentVersion\Shell Extensions\Blocked" /v "{8AB635F8-9A67-4698-AB99-784AD929F3B4}" /d "" /t REG_SZ /f
  ```

* Para __todos os usuários__ (requer privilégios de administrador):

  ```cmd
  reg add "HKLM\Software\Microsoft\Windows\CurrentVersion\Shell Extensions\Blocked" /v "{8AB635F8-9A67-4698-AB99-784AD929F3B4}" /d "" /t REG_SZ /f
  ```

### Adicionar o item `Edite no Clipchamp` (restaura o default)

* Para __o usuário atual__:

  ```cmd
  reg delete "HKCU\Software\Microsoft\Windows\CurrentVersion\Shell Extensions\Blocked" /v "{8AB635F8-9A67-4698-AB99-784AD929F3B4}" /f
  ```

* Para __todos os usuários__ (requer privilégios de administrador):

  ```cmd
  reg delete "HKLM\Software\Microsoft\Windows\CurrentVersion\Shell Extensions\Blocked" /v "{8AB635F8-9A67-4698-AB99-784AD929F3B4}" /f
  ```

&nbsp;

## Referências

* https://winaero.com/remove-edit-in-notepad-context-menu/

&nbsp;
