# 💡 Controle de LED com Fotoresistor (LDR) usando Arduino

Este projeto utiliza um Arduino UNO para acender um LED com base na quantidade de luz captada por um sensor LDR (fotoresistor). Quando o ambiente está **claro o suficiente**, o LED acende.

link autodesk tinkercad: https://www.tinkercad.com/things/b1uBowQDzIs-led-como-fotorresistor

## 🛠️ Componentes Utilizados

- 1x Arduino UNO
- 1x LED
- 1x Fotoresistor (LDR)
- 2x Resistores (220Ω e 10kΩ)
- 1x Protoboard
- Jumpers
- Cabo USB

## ⚙️ Esquema de Montagem

O circuito funciona como um **detector de luminosidade**. O LDR, junto com um resistor de 10kΩ, forma um divisor de tensão que envia uma leitura analógica para o Arduino (pino A0). Com base nesse valor, o LED (conectado ao pino digital 2) será ligado ou desligado.

![Montagem do circuito com Arduino e LDR](https://github.com/user-attachments/assets/21afdb31-898c-4ae8-8c53-116338ef12f4)

## 🔌 Conexões

| Componente   | Pino Arduino | Observação                                      |
|--------------|--------------|-------------------------------------------------|
| LDR          | A0           | Com resistor de 1kΩ para formar divisor de tensão |
| LED (ânodo)  | Digital 2    | Ligado diretamente ao pino digital              |
| LED (cátodo) | GND          | Através de resistor de 150Ω                     |
| GND          | GND          | Comum para todos os componentes                 |
| 5V           | 5V           | Alimenta o circuito                             |

<h2>📄 Licença</h2>
<p>Este projeto está licenciado sob a <a href="LICENSE">MIT License</a>.</p>
    
<h2>🤝 Contribuição</h2>
<p>Fique à vontade para abrir issues e enviar pull requests para melhorias no projeto!</p>
    
<h2>📞 Contato</h2>
<p>Caso tenha dúvidas ou sugestões, entre em contato:</p>
<ul>
    <li>📧 Email: <a href="mailto:santossilvahenrygabriel58@gmail.com">Meu email de contato</a></li>
    <li>🔗 LinkedIn: <a href="www.linkedin.com/in/henry-gabriel-santos-silva-6ba776209">Meu Perfil linkedin</a></li>
</ul>
    
<hr>
    
<p>⭐ Se gostou do projeto, deixe um star no repositório!</p>

