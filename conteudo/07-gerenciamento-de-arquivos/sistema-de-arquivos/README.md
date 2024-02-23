> ### Sistemas Operacionais > Conteúdo > Gerenciamento de Arquivos

# Sistema de Arquivos

Prof. Eduardo Ono

&nbsp;

## Conceitos

&nbsp;

## Principais Sistemas de Arquivos

### Aplicação Geral

| Sistema | Tamanho Máximo do Arquivo | Tamanho Máximo do Volume | |
| --- | :-: | :-: | --- |
| FAT12 | 32MB               | 16MB / 32 MB (cluster 4KB / 8KB) | Disquetes antigos
| FAT16 | 2GB / 4GB (FAT16B) | 2GB / 4GB (cluster 64KB)         | DOS
| FAT32 | 2GB / 4GB (LFS)    | 2TB                              |
| NTFS  | 16EB (teórico)     | 8PB (teórico)                    | Introduzido em 1993 <br> Padrão no Windows XP, Vista, 7, 8, 8.1, 10 <br> Implementa o "Journaling" <br> Criptografia <br> Suporte a Cotas
| exFAT |                    |                                  | Criado para substituir o FAT32; <br> Suporte a outros S.O.
| ext   |                    |                                  | Lançado em 1992 
| ext2  |                    |                                  | Lançado em 1993
| ext3  |                    |                                  | Lançado em 2001 <br> Suporte a "Journaling"
| ext4  | 16TB               | 1EB                              | Lançado em 2008 <br> Padrão atual do Linux <br> Case-sensitive <br> Não possui suporte no Windows
| HFS   |                    |                                  | Utilizado no MacOS
| HFS+  |                    |                                  | Utilizado no MacOS
| APFS  |                    |                                  | Apple File System <br> Utilizado no MacOS <br> Otimizado para SSD.
| ZFS   |                    |                                  | Lançado pela Sun Microsystems em 2006 (-> Oracle) <br> Utilizado em servidores

### Sistemas de Arquivos para Mídias Óticas

| Sistema | Tam. Máx. do Arquivo | Tam. Máx. do Volume | Tam. Máx. Nome Arquivo| |
| --- | :-: | :-: | :-: | --- |
| ISO 9660 | 32MB               | 16MB / 32 MB (cluster 4KB / 8KB) |     | Disquetes antigos
| Joliet   | 2GB / 4GB (FAT16B) | 32 caracteres                    | 32 (case-sensitive) | Suporta Unicode
| UDF      | 16 EB              | 16TB                             | 255 | Universal Disk Format <br> Susbstitui o ISO 9660

&nbsp;

## Vídeos de Apoio

| | Descrição |
| :-: | --- |
| ![](https://img.youtube.com/vi/KPWtWB0x9rI/default.jpg)| [Bóson Treinamentos] [__O que é um Sistema de Arquivos - Curso de Hardware__](https://www.youtube.com/watch?v=KPWtWB0x9rI) \|\| 16:47, YouTube, Dez/2019.
| ![](https://img.youtube.com/vi/_h30HBYxtws/default.jpg)| [ExplainingComputers] [__Explaining File Systems: NTFS, exFAT, FAT32, ext4 & More__](https://www.youtube.com/watch?v=_h30HBYxtws) \|\| 11:04, YouTube.
| [![img](https://img.youtube.com/vi/bYjQakUxeVY/default.jpg)](https://www.youtube.com/watch?v=bYjQakUxeVY) | <sup>[PowerCert Animated Videos]</sup><br>[__FAT32 vs exFAT vs NTFS - Windows File Systems__](https://www.youtube.com/watch?v=bYjQakUxeVY)<br><sub>(8:01, YouTube, 21/Abr/2023)</sub>

&nbsp;

## Bibliografia

&nbsp;

