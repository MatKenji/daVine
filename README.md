# DaVinci Robot Project

## Resumo

Com o passar dos anos, maiores quantidades de lixo vêm sendo encontradas espalhadas pelas ruas, calçadas, parques e praias. Diante dessa problemática, foi proposto ao grupo a ideia de projetar e desenvolver um robô que fosse capaz de realizar a coleta de dejetos espalhados por lugares abertos e de difícil acesso e os levar para o local mais apropriado de descarte.

O robô, batizado de DaVinci, foi projetado para contar com dois manipuladores com garras como suas ferramentas – para pegar os dejetos, um par de esteiras – para se locomover com mais facilidade, um painel de LCD – para simular um rosto e torná-lo mais amigável, e um LiDAR – para servir como seus olhos e mapear o ambiente.

Os primeiros testes do robô desenvolvido foram realizados em um segundo robô. Esse segundo robô foi montado com uma estrutura mais simples, pois foi desenvolvido apenas para testar os componentes eletrônicos e o algoritmo de mapeamento do LiDAR antes de realizar a montagem final de DaVinci.

Após a certificação de que os componentes eletrônicos e o algoritmo estavam completamente funcionais, foi realizada a junção da mecânica e da eletrônica para construir o verdadeiro corpo de DaVinci. Com a montagem feita, a próxima etapa foi realizar os testes direcionados à função que o robô deveria cumprir.

A programação de DaVinci foi desenvolvida em ROS2 para que ele fosse capaz de mapear o ambiente com o LiDAR, identificar os objetos que são considerados como lixo deixados no ambiente, ir até tais objetos, movimentar seus manipuladores para agarrá-los e então os levar para a área de descarte.

## Introdução

Na disciplina Projeto de Robôs, o grupo foi desafiado a desenvolver um protótipo robótico que fosse capaz de solucionar um problema proposto. O projeto deve abranger diversas etapas, desde a idealização do protótipo até a sua implementação, incluindo concepção, planejamento, design, construção, programação e teste. Cada etapa tem seus objetivos específicos, desde definir o propósito e as capacidades do robô até avaliar seu desempenho e corrigir problemas.

É de conhecimento geral que o acúmulo e descarte de lixo em locais errados é um problema crescente. Hoje, em lugares de lazer como praças, parques e praias, é muito comum encontrar lixo espalhado, tornando esses espaços menos confortáveis. Este problema vem crescendo tanto que é comum encontrar lixo espalhado também pelas ruas e calçadas.

Diante dessa problemática, o grupo propôs a criação de DaVinci, um robô que fosse capaz de atravessar e analisar esses ambientes, encontrar o lixo espalhado e levá-lo para o local correto de descarte.

## Desenvolvimento

### Desenvolvimento da Parte Mecânica

Desde o início, havia uma clara imagem de como DaVinci deveria ser. O ponto de partida foi desenvolver um modelo 3D que mostrasse como o robô deveria se parecer.

#### Primeira Montagem - DaVinci mark I

- Utilização de peças reutilizadas de antigos robôs.
- Desenvolvimento de esteiras adequadas para locomoção.
- Estrutura inicial para testes.

#### Segunda Montagem - DaVinci mark II

- Design de uma chapa longa e resistente para segurar componentes eletrônicos.
- Integração de uma nova cabeça para melhor acomodar o painel LCD e microcontroladores.

#### Montagem Final - DaVinci mark III

- Fixação do painel LCD, microcontroladores e suporte para powerbank.
- Correção de deformações e imperfeições estruturais.
- Design e fixação de chapas para manipuladores.

### Desenvolvimento da Parte Elétrica

A parte elétrica começou com um diagrama idealizando a eletrônica do robô. Um segundo robô foi montado para testar os componentes eletrônicos e algoritmos iniciais.

#### Integração Final

- Uso de um powerbank para alimentar o Raspberry Pi e componentes eletrônicos.
- Alimentação dos motores através de pilhas de lítio.
- Atualização do diagrama elétrico para refletir todas as alterações realizadas durante o desenvolvimento.

### Desenvolvimento do Software

O software de DaVinci foi desenvolvido em ROS2 para permitir a integração do LiDAR para mapeamento do ambiente, identificação de objetos considerados lixo, navegação até os objetos, coleta e transporte até a área de descarte.

### Componentes Utilizados

- **RPLIDAR S1M1**: R$ 3250,00
- **Motores DC 3-6V com caixa de Redução e Eixo Duplo**: R$ 8,45 cada
- **Raspberry Pi 4**: R$ 578,45
- **Braço Robótico RoboARM**: R$ 199,90 cada
- **Chassi de alumínio do robô**
- **Rodas guias**
- **Esteiras de borracha**
- **Ponte H L298N**
- **PCA9685**: R$ 47,99
- **Pilhas de Lítio**

---

Para mais detalhes sobre o desenvolvimento de cada parte e as especificações técnicas dos componentes, consulte o documento completo no repositório.
## At Work

https://github.com/MatKenji/daVine/assets/169562589/cc1387ee-099c-441b-b708-c93bf97e1a2d

## Instragram
https://www.instagram.com/_davinci_esc/
