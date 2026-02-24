# Projeto: Pip-Boy!

By **Arthur** :)

---

## Introdução

Recentemente assisti à série **Fallout**, baseada na série de jogos da nossa querida **Bethesda**. Eu já conhecia a série de jogos e, ao assistir à série de **TV**, resolvi dar uma chance para os jogos que joguei e dropei há uns anos atrás. Com isso, uma coisa que me chamou muito a atenção na série são os **Pip-Boys**, equipamentos versáteis e com diversas funcionalidades legais, então eu pensei comigo mesmo: “Por que não desenvolver um sistema baseado no Pip-Boy?”

Obviamente que não vai ser um OS, tá mais para um software que se baseia na estética do Pip-Boy, tipo um “copia mas não faz igual”. Por hora, ele vai ser majoritariamente feito em C++; após isso, eu pretendo integrar com Linux e tacar num Raspberry Pi e realmente fazer uma espécie de Pip-Boy.

---

## Projeto

O projeto, em sua primeira versão, consiste em um sistema simples de console; será iniciado em C++ e, se necessário, sofrerá com adições de bibliotecas ou novas tecnologias e linguagens.

Por hora, se encontra na versão **1.0.0-alpha**. Essa versão se dá pelo fato de ser algo inicial e instável, em que qualquer nova feature é uma mudança nova.

---

## Versionamento

O versionamento do projeto funcionará com base no **Versionamento Semântico (SemVer)**, que funciona da seguinte maneira:

Nele possuímos três tipos de classificação, sendo elas **MAJOR.MINOR.PATCH**, cada uma representada por três números na ordem **MAJOR.MINOR.PATCH**, sendo MAJOR o maior entre os três.

Ex: `1.0.0`

O primeiro número é o major, o segundo o minor e o terceiro o patch. Perceba que o número que é alterado corresponde à hierarquia e à ordem do SemVer.

### MAJOR (Versão Principal)

- Mudanças grandes  
- Quebram compatibilidade com versões anteriores  
- Exigem adaptação do código  

Ex: `1.4.3 → 2.0.0`

### MINOR (Versão Secundária)

- Novas funcionalidades  
- Não quebram compatibilidade  
- Mantém suporte ao que já existia  

Ex: `2.3.1 → 2.4.0`

### PATCH (Correção)

- Correção de bugs  
- Pequenas melhorias  
- Nenhuma nova funcionalidade significativa  

Ex: `2.4.0 → 2.4.1`

---

### Regras gerais

- Se muda o MAJOR, zera MINOR e PATCH  
- Se muda o MINOR, zera o PATCH  
- Se muda o PATCH, só incrementa ele  
