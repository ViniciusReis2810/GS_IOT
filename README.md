# Solução de Monitoramento de Batimentos Cardíacos e Pressão Arterial

Este repositório contém uma solução baseada em IoT para monitorar batimentos cardíacos e pressão arterial. A solução utiliza o Tinkercad para a simulação dos sensores e o Node-RED para processamento e visualização dos dados.

## Configuração da Simulação no Tinkercad

1. Acesse [Tinkercad](https://www.tinkercad.com/).
2. Crie um novo circuito.
3. Adicione um Arduino e conecte os pinos A0 e A1 a potenciômetros para simular os sensores.
4. Carregue o código do sensor_simulation.ino no Arduino.
5. Inicie a simulação.

## Configuração do Node-RED

1. Instale o Node-RED no seu ambiente (consulte [https://nodered.org/docs/getting-started/installation](https://nodered.org/docs/getting-started/installation)).
2. Importe o fluxo do arquivo `node-red/flow.json` no Node-RED.
3. Certifique-se de configurar o nó MQTT In para se conectar ao broker MQTT adequado (usando as configurações padrão de `mqtt.eclipse.org:1883`).
4. Inicie o fluxo no Node-RED.

## Configuração da Conexão MQTT para Testes no Hardware Físico

### Tinkercad MQTT (Apenas para Simulação(Se rodar no tinkercad)):

1. Abra o arquivo `mqtt/node_red_mqtt_flow.json` e copie o conteúdo.
2. Cole o conteúdo no nó MQTT In do seu fluxo no Node-RED.

Este repositório também contém um exemplo simples para a simulação de comunicação MQTT no Tinkercad no arquivo `mqtt/tinkercad_mqtt.ino`.

## Licença

Este projeto está licenciado sob a [Licença MIT](LICENSE.md) - consulte o arquivo [LICENSE.md](LICENSE.md) para detalhes.
