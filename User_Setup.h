//                            CONFIGURAÇÕES DEFINIDAS PELO USUÁRIO
//   Defina o tipo de driver, fontes a serem carregadas, pinos usados e método de controle SPI, etc.
//
//   Veja o arquivo User_Setup_Select.h se você deseja definir múltiplas
//   configurações e então facilmente selecionar qual arquivo de configuração é usado pelo compilador.
//
//   Se este arquivo for editado corretamente, todos os exemplos de sketches da biblioteca devem
//   funcionar sem a necessidade de fazer mais alterações para uma configuração de hardware específica!
//   Observe que alguns sketches são projetados para uma largura/altura de pixel específica do TFT.

// Informações definidas pelo usuário relatadas pelo exemplo de teste e diagnóstico "Read_User_Setup"
#define USER_SETUP_INFO "User_Setup"

// Defina para desabilitar todos os #warnings na biblioteca (pode ser colocado em User_Setup_Select.h)
//#define DISABLE_ALL_LIBRARY_WARNINGS

// ##################################################################################
//
// Seção 1. Inclua o arquivo de driver correto e quaisquer opções para ele
//
// ##################################################################################

// Defina STM32 para invocar suporte otimizado para o processador (apenas para STM32)
//#define STM32

// Definir a placa STM32 permite que a biblioteca otimize o desempenho
// para shields compatíveis com "MCUfriend" no estilo UNO
//#define NUCLEO_64_TFT
//#define NUCLEO_144_TFT

// STM32 apenas para paralelo de 8 bits:
// Se os pinos 0-7 da Porta A ou B do STM32 forem usados para o barramento de dados paralelo de 8 bits (bits 0-7)
// isso melhorará o desempenho de renderização em um fator de ~8x
//#define STM_PORTA_DATA_BUS
//#define STM_PORTB_DATA_BUS

// Informe à biblioteca para usar o modo paralelo (caso contrário, SPI é assumido)
//#define TFT_PARALLEL_8_BIT
//#defined TFT_PARALLEL_16_BIT // **** Paralelo de 16 bits APENAS para o processador RP2040 ****

// Tipo de display - defina apenas se for um display RPi
//#define RPI_DISPLAY_TYPE // SPI máximo de 20MHz

// Defina apenas um driver, os outros devem ser comentados
//#define ILI9341_DRIVER       // Driver genérico para displays comuns
//#define ILI9341_2_DRIVER     // Driver alternativo para ILI9341, veja https://github.com/Bodmer/TFT_eSPI/issues/1172
//#define ST7735_DRIVER      // Defina parâmetros adicionais abaixo para este display
//#define ILI9163_DRIVER     // Defina parâmetros adicionais abaixo para este display
//#define S6D02A1_DRIVER
//#define RPI_ILI9486_DRIVER // SPI máximo de 20MHz
//#define HX8357D_DRIVER
//#define ILI9481_DRIVER
//#define ILI9486_DRIVER
#define ILI9488_DRIVER     // AVISO: Não conecte o SDO do display ILI9488 ao MISO se outros dispositivos compartilharem o barramento SPI (o SDO do TFT NÃO entra em estado de alta impedância quando CS está alto)
//#define ST7789_DRIVER      // Opção de configuração completa, defina parâmetros adicionais abaixo para este display
//#define ST7789_2_DRIVER    // Opção de configuração mínima, defina parâmetros adicionais abaixo para este display
//#define R61581_DRIVER
//#define RM68140_DRIVER
//#define ST7796_DRIVER
//#define SSD1351_DRIVER
//#define SSD1963_480_DRIVER
//#define SSD1963_800_DRIVER
//#define SSD1963_800ALT_DRIVER
//#define ILI9225_DRIVER
//#define GC9A01_DRIVER

// Alguns displays suportam leituras SPI via o pino MISO, outros displays têm um único
// pino SDA bidirecional e a biblioteca tentará ler isso via a linha MOSI.
// Para usar a linha SDA para ler dados do TFT, descomente a seguinte linha:

// #define TFT_SDA_READ      // Esta opção é APENAS para ESP32, testada apenas com display ST7789 e GC9A01

// Para ST7735, ST7789 e ILI9341 APENAS, defina a ordem das cores SE o azul e o vermelho estiverem trocados no seu display
// Tente UMA opção de cada vez para encontrar a ordem correta das cores para o seu display

//  #define TFT_RGB_ORDER TFT_RGB  // Ordem das cores Vermelho-Verde-Azul
//  #define TFT_RGB_ORDER TFT_BGR  // Ordem das cores Azul-Verde-Vermelho

// Para o módulo ESP32 M5Stack com display ILI9341 integrado APENAS, remova // na linha abaixo

// #define M5STACK

// Para ST7789, ST7735, ILI9163 e GC9A01 APENAS, defina a largura e altura do pixel na orientação retrato
// #define TFT_WIDTH  80
// #define TFT_WIDTH  128
// #define TFT_WIDTH  172 // ST7789 172 x 320
// #define TFT_WIDTH  170 // ST7789 170 x 320
// #define TFT_WIDTH  240 // ST7789 240 x 240 e 240 x 320
// #define TFT_HEIGHT 160
// #define TFT_HEIGHT 128
// #define TFT_HEIGHT 240 // ST7789 240 x 240
// #define TFT_HEIGHT 320 // ST7789 240 x 320
// #define TFT_HEIGHT 240 // GC9A01 240 x 240

// Para ST7735 APENAS, defina o tipo de display, originalmente isso era baseado na
// cor da aba no filme protetor da tela, mas isso nem sempre é verdade, então experimente
// as diferentes opções abaixo se a tela não exibir gráficos corretamente,
// por exemplo, cores erradas, imagens espelhadas ou pixels perdidos nas bordas.
// Comente TODAS, EXCETO UMA dessas opções para um driver de display ST7735, salve este
// arquivo User_Setup, então recompile e envie o sketch para a placa novamente:

// #define ST7735_INITB
// #define ST7735_GREENTAB
// #define ST7735_GREENTAB2
// #define ST7735_GREENTAB3
// #define ST7735_GREENTAB128    // Para display 128 x 128
// #define ST7735_GREENTAB160x80 // Para display 160 x 80 (BGR, invertido, 26 de offset)
// #define ST7735_ROBOTLCD       // Para alguns shields Arduino RobotLCD (128x160, BGR, https://docs.arduino.cc/retired/getting-started-guides/TFT)
// #define ST7735_REDTAB
// #define ST7735_BLACKTAB
// #define ST7735_REDTAB160x80   // Para display 160 x 80 com offset de 24 pixels

// Se as cores estiverem invertidas (branco aparece como preto), descomente uma das próximas
// 2 linhas, tente ambas as opções, uma delas deve corrigir a inversão.

// #define TFT_INVERSION_ON
// #define TFT_INVERSION_OFF


// ##################################################################################
//
// Seção 2. Defina aqui os pinos que são usados para a interface com o display
//
// ##################################################################################

// Se um sinal de controle do backlight estiver disponível, defina o pino TFT_BL na Seção 2
// abaixo. O backlight será LIGADO quando tft.begin() for chamado, mas a biblioteca
// precisa saber se os LEDs são LIGADOS com o pino em nível ALTO ou BAIXO. Se os LEDs 
// forem controlados com um sinal PWM ou LIGADOS/DESLIGADOS, isso deve ser tratado pelo 
// código do usuário. Exemplo: com digitalWrite(TFT_BL, LOW);

// #define TFT_BL   32            // Pino de controle do backlight do LED
// #define TFT_BACKLIGHT_ON HIGH  // Nível para LIGAR o backlight (HIGH ou LOW)



// Devemos usar SPI por hardware, sendo necessário no mínimo 3 pinos GPIO.
// Configuração típica para o ESP8266 NodeMCU ESP-12:
//
// Display SDO/MISO  para o pino D6 do NodeMCU (ou deixar desconectado se não for ler do TFT)
// Display LED       para o pino VIN do NodeMCU (ou 5V, veja abaixo)
// Display SCK       para o pino D5 do NodeMCU
// Display SDI/MOSI  para o pino D7 do NodeMCU
// Display DC (RS/AO)para o pino D3 do NodeMCU
// Display RESET     para o pino D4 do NodeMCU (ou RST, veja abaixo)
// Display CS        para o pino D8 do NodeMCU (ou GND, veja abaixo)
// Display GND       para o GND do NodeMCU (0V)
// Display VCC       para 5V ou 3.3V do NodeMCU
//
// O pino RESET do TFT pode ser conectado ao pino RST do NodeMCU ou a 3.3V para liberar um pino de controle
//
// O pino DC (Data Command) pode estar rotulado como AO ou RS (Register Select)
//
// Com alguns displays, como o ILI9341, o pino CS do TFT pode ser conectado ao GND se não houver
// mais dispositivos SPI conectados (ex: um cartão SD). Nesse caso, comente a linha #define TFT_CS
// abaixo para que ele NÃO seja definido. Outros displays, como o ST7735, exigem que o pino CS do TFT
// seja alternado durante a configuração, então nesses casos a linha TFT_CS deve ser definida e conectada.
//
// O pino D0 do NodeMCU pode ser usado para RST
//
//
// Nota: apenas algumas versões do NodeMCU fornecem 5V via USB no pino VIN.
// Se 5V não estiver disponível em um pino, você pode usar 3.3V, mas o brilho do backlight
// será menor.


// ###### EDITE OS NÚMEROS DOS PINOS NAS LINHAS SEGUINTES PARA SE ADEQUAREM AO SEU ESP8266 ######

// Para NodeMCU - use números de pinos no formato PIN_Dx, onde Dx é a designação do pino no NodeMCU
// Definições de pinos para o ESP8266 (atribuídos automaticamente se não definidos)

// #define TFT_MISO  PIN_D6  // Atribuído automaticamente no ESP8266 se não for definido
// #define TFT_MOSI  PIN_D7  // Atribuído automaticamente no ESP8266 se não for definido
// #define TFT_SCLK  PIN_D5  // Atribuído automaticamente no ESP8266 se não for definido

#define TFT_CS    PIN_D15  // Pino de controle de seleção do chip D8
#define TFT_DC    PIN_D2  // Pino de controle de comando de dados
#define TFT_RST   PIN_D4  // Pino de reset (pode ser conectado ao RST do NodeMCU, veja a próxima linha)

//#define TFT_RST  -1     // Defina TFT_RST como -1 se o RESET do display estiver conectado ao RST do NodeMCU ou a 3.3V


//#define TFT_BL PIN_D1  // Backlight do LED (apenas para ST7789 com pino de controle do backlight)

#define TOUCH_CS PIN_D2     // Pino de seleção do chip (T_CS) da tela sensível ao toque

//#define TFT_WR PIN_D2       // Pulso de escrita para TFT modificado do Raspberry Pi


// ######  PARA O MODO OVERLAP NO ESP8266, EDITE OS NÚMEROS DOS PINOS NAS LINHAS SEGUINTES  ######

// O modo Overlap compartilha o barramento SPI do FLASH do ESP8266 com o TFT, o que impacta no desempenho
// mas economiza pinos para outras funções. É melhor não conectar o MISO, pois alguns displays
// não deixam essa linha em alta impedância quando a seleção do chip está desativada!
// Nota: Apenas um dispositivo SPI pode compartilhar as linhas SPI do FLASH, então um controlador de toque SPI
// não pode ser conectado ao mesmo barramento SPI.
// No NodeMCU 1.0, SD0=MISO, SD1=MOSI, CLK=SCLK para conexão com o TFT no modo Overlap
// No NodeMCU V3, S0=MISO, S1=MOSI, S2=SCLK
// No modo Overlap do ESP8266, os seguintes pinos devem ser definidos

//#define TFT_SPI_OVERLAP

// No modo Overlap do ESP8266, o pino de seleção do chip do TFT DEVE ser conectado ao pino D3
//#define TFT_CS   PIN_D3
//#define TFT_DC   PIN_D5  // Pino de controle de comando de dados
//#define TFT_RST  PIN_D4  // Pino de reset (pode ser conectado ao RST do NodeMCU, veja a próxima linha)
//#define TFT_RST  -1  // Defina TFT_RST como -1 se o RESET do display estiver conectado ao RST do NodeMCU ou a 3.3V


// ###### EDITE OS NÚMEROS DOS PINOS NAS LINHAS SEGUINTES PARA SE ADEQUAREM AO SEU ESP32 ######

// Para ESP32 Dev board (testado apenas com display ILI9341)
// O SPI por hardware pode ser mapeado para qualquer pino

//#define TFT_MISO 19
//#define TFT_MOSI 23
//#define TFT_SCLK 18
//#define TFT_CS   15  // Pino de controle de seleção do chip
//#define TFT_DC    2  // Pino de controle de comando de dados
//#define TFT_RST   4  // Pino de reset (pode ser conectado ao pino RST)
//#define TFT_RST  -1  // Defina TFT_RST como -1 se o RESET do display estiver conectado ao RST do ESP32

// Para ESP32 Dev board (testado apenas com display GC9A01)
// O SPI por hardware pode ser mapeado para qualquer pino

//#define TFT_MOSI 15 // Em algumas placas de driver do display, pode estar rotulado como "SDA" e assim por diante.
//#define TFT_SCLK 14
//#define TFT_CS   5  // Pino de controle de seleção do chip
//#define TFT_DC   27  // Pino de controle de comando de dados
//#define TFT_RST  33  // Pino de reset (pode ser conectado ao pino RESET do Arduino)
//#define TFT_BL   22  // Backlight do LED

//#define TOUCH_CS 21     // Pino de seleção do chip (T_CS) da tela sensível ao toque

//#define TFT_WR 22    // Pulso de escrita para TFT modificado do Raspberry Pi

// Para o módulo M5Stack, use as seguintes definições
//#define TFT_MISO 19
//#define TFT_MOSI 23
//#define TFT_SCLK 18
//#define TFT_CS   14  // Pino de controle de seleção do chip
//#define TFT_DC   27  // Pino de controle de comando de dados
//#define TFT_RST  33  // Pino de reset (pode ser conectado ao pino RESET do Arduino)
//#define TFT_BL   32  // Backlight do LED (necessário para M5Stack)

// ######       EDITE OS PINOS ABAIXO PARA SE ADEQUAREM AO SEU SETUP ESP32 PARALELO       ######

// A biblioteca suporta TFTs paralelos de 8 bits com ESP32, a seleção de pinos
// abaixo é compatível com placas ESP32 no formato UNO.
// Placas Wemos D32 precisam ser modificadas, veja o diagrama na pasta Tools.
// Apenas displays baseados em ILI9481 e ILI9341 foram testados!

// O barramento paralelo é suportado apenas para STM32 e ESP32
// Exemplo abaixo para interface paralela ESP32 com displays UNO

// Informe à biblioteca para usar o modo paralelo de 8 bits (caso contrário, SPI será assumido)
//#define TFT_PARALLEL_8_BIT

// O ESP32 e o TFT os pinos usados para teste são:
//#define TFT_CS   33  // Pino de controle de seleção do chip (a biblioteca mantém permanentemente baixo)
//#define TFT_DC   15  // Pino de controle de Comando de Dados - deve usar um pino na faixa de 0-31
//#define TFT_RST  32  // Pino de reset, alterna na inicialização

//#define TFT_WR    4  // Pino de controle de pulso de escrita - deve usar um pino na faixa de 0-31
//#define TFT_RD    2  // Pino de controle de pulso de leitura

//#define TFT_D0   12  // Deve usar pinos na faixa de 0-31 para o barramento de dados
//#define TFT_D1   13  // para que uma única escrita de registro defina/limpe todos os bits.
//#define TFT_D2   26  // Os pinos podem ser atribuídos aleatoriamente, isso não afeta
//#define TFT_D3   25  // o desempenho da atualização da tela TFT.
//#define TFT_D4   17
//#define TFT_D5   16
//#define TFT_D6   27
//#define TFT_D7   14

// ######       EDITE OS PINOS ABAIXO PARA SE ADEQUAR À SUA CONFIGURAÇÃO SPI DO TFT NO STM32       ######

// O TFT pode ser conectado à porta SPI 1 ou 2
//#define TFT_SPI_PORT 1 // A taxa máxima de clock da porta SPI 1 é 55MHz
//#define TFT_MOSI PA7
//#define TFT_MISO PA6
//#define TFT_SCLK PA5

//#define TFT_SPI_PORT 2 // A taxa máxima de clock da porta SPI 2 é 27MHz
//#define TFT_MOSI PB15
//#define TFT_MISO PB14
//#define TFT_SCLK PB13

// Pode usar referências de pinos do Arduino, alocação arbitrária, o TFT_eSPI controla a seleção do chip
//#define TFT_CS   D5 // Pino de controle de seleção do chip para TFT CS
//#define TFT_DC   D6 // Pino de controle de Comando de Dados para TFT DC (pode ser rotulado como RS = Register Select)
//#define TFT_RST  D7 // Pino de reset para TFT RST (ou RESET)
// OU, alternativamente, podemos usar nomes de referência de porta STM32 PXnn
//#define TFT_CS   PE11 // Equivalente ao D5 no Nucleo-F767ZI
//#define TFT_DC   PE9  // Equivalente ao D6 no Nucleo-F767ZI
//#define TFT_RST  PF13 // Equivalente ao D7 no Nucleo-F767ZI

//#define TFT_RST  -1   // Defina TFT_RST como -1 se o RESET do display estiver conectado ao reset do processador
                        // Use um pino do Arduino para testes iniciais, pois conectar ao reset do processador
                        // pode não funcionar (pulso muito curto na energização?)

// ##################################################################################
//
// Seção 3. Defina as fontes que serão usadas aqui
//
// ##################################################################################

// Comente os #defines abaixo com // para impedir que a fonte seja carregada
// O ESP8366 e o ESP32 possuem bastante memória, então normalmente não é
// necessário comentar fontes. Se todas as fontes forem carregadas, o espaço extra
// necessário na FLASH é de aproximadamente 17Kbytes. Para economizar espaço na
// FLASH, ative apenas as fontes que você precisa!

#define LOAD_GLCD   // Fonte 1. Fonte original Adafruit de 8 pixels, precisa de ~1820 bytes na FLASH
#define LOAD_FONT2  // Fonte 2. Fonte pequena de 16 pixels de altura, precisa de ~3534 bytes na FLASH, 96 caracteres
#define LOAD_FONT4  // Fonte 4. Fonte média de 26 pixels de altura, precisa de ~5848 bytes na FLASH, 96 caracteres
#define LOAD_FONT6  // Fonte 6. Fonte grande de 48 pixels, precisa de ~2666 bytes na FLASH, apenas caracteres 1234567890:-.apm
#define LOAD_FONT7  // Fonte 7. Fonte de 7 segmentos de 48 pixels, precisa de ~2438 bytes na FLASH, apenas caracteres 1234567890:-.
#define LOAD_FONT8  // Fonte 8. Fonte grande de 75 pixels, precisa de ~3256 bytes na FLASH, apenas caracteres 1234567890:-.
//#define LOAD_FONT8N // Fonte 8. Alternativa à Fonte 8 acima, ligeiramente mais estreita, para que 3 dígitos caibam em um TFT de 160 pixels
#define LOAD_GFXFF  // FreeFonts. Inclui acesso às 48 fontes gratuitas Adafruit_GFX FF1 a FF48 e fontes personalizadas

// Comente o #define abaixo para impedir que o sistema de arquivos SPIFFS e o código de fonte suave sejam carregados
// Isso economizará ~20Kbytes de FLASH
#define SMOOTH_FONT

// ##################################################################################
//
// Seção 4. Outras opções
//
// ##################################################################################

// Para o processador RP2040 e displays SPI, descomente a linha a seguir para usar a interface PIO.
//#define RP2040_PIO_SPI // Deixe comentado para usar a interface padrão de porta SPI do RP2040

// Para o processador RP2040 e displays paralelos de 8 ou 16 bits:
// O período do ciclo de escrita da interface paralela é derivado de uma divisão da velocidade do clock da CPU
// então escala com o clock do processador. Isso significa que a razão do divisor pode precisar
// ser aumentada quando fizer overclock. Também pode ser necessário ajustá-lo dependendo do
// tipo de controlador de display (ILI94341, HX8357C, etc.). Se RP2040_PIO_CLK_DIV não estiver definido
// a biblioteca definirá valores padrão que podem não ser adequados para o seu display.
// A folha de dados do controlador de display especificará o período mínimo do ciclo de escrita. Os
// controladores geralmente funcionam de forma confiável para períodos mais curtos, no entanto, se o período for muito curto
// o display pode não ser inicializado ou os gráficos podem se corromper.
// Frequência do ciclo de escrita PIO = (clock da CPU/(4 * RP2040_PIO_CLK_DIV))
//#define RP2040_PIO_CLK_DIV 1 // Ciclo de escrita de 32ns com clock da CPU a 125MHz
//#define RP2040_PIO_CLK_DIV 2 // Ciclo de escrita de 64ns com clock da CPU a 125MHz
//#define RP2040_PIO_CLK_DIV 3 // Ciclo de escrita de 96ns com clock da CPU a 125MHz

// Para o processador RP2040 defina o canal da porta SPI usado (padrão 0 se não definido)
//#define TFT_SPI_PORT 1 // Defina como 0 se os pinos SPI0 forem usados, ou 1 se os pinos SPI1 forem usados

// Para o processador STM32 defina o canal da porta SPI usado (padrão 1 se não definido)
//#define TFT_SPI_PORT 2 // Defina como 1 para a porta SPI 1, ou 2 para a porta SPI 2

// Defina a frequência do clock SPI, isso afeta a velocidade de renderização dos gráficos. Muito
// rápido e o driver TFT não conseguirá acompanhar, causando corrupção na tela.
// Com um display ILI9341, 40MHz funciona bem, 80MHz às vezes falha
// Com um display ST7735, mais de 27MHz pode não funcionar (pixels e linhas espúrias)
// Com um display ILI9163, 27 MHz funciona bem.

// #define SPI_FREQUENCY   1000000
// #define SPI_FREQUENCY   5000000
// #define SPI_FREQUENCY  10000000
// #define SPI_FREQUENCY  20000000
#define SPI_FREQUENCY  27000000
// #define SPI_FREQUENCY  40000000
// #define SPI_FREQUENCY  55000000 // Apenas para STM32 SPI1 (máximo do SPI2 é 27MHz)
// #define SPI_FREQUENCY  80000000

// Frequência SPI reduzida opcional para leitura do TFT
#define SPI_READ_FREQUENCY  20000000

// O XPT2046 requer uma taxa de clock SPI mais baixa de 2,5MHz, então definimos isso aqui:
#define SPI_TOUCH_FREQUENCY  2500000

// O ESP32 tem 2 portas SPI livres, ou seja, VSPI e HSPI, sendo VSPI a padrão.
// Se a porta VSPI estiver em uso e os pinos não estiverem acessíveis (por exemplo, TTGO T-Beam)
// então descomente a linha a seguir:
//#define USE_HSPI_PORT

// Comente o seguinte #define se "Transações SPI" não precisarem ser
// suportadas. Quando comentado, o tamanho do código será menor e os sketches irão
// rodar um pouco mais rápido, então deixe comentado a menos que você precise disso!

// O suporte a transações é necessário para trabalhar com a biblioteca SD, mas não é necessário com o TFT_SdFat
// O suporte a transações é necessário se outros dispositivos SPI estiverem conectados.

// As transações são automaticamente ativadas pela biblioteca para um ESP32 (para usar o mutex HAL)
// então mudar isso aqui não terá efeito

// #define SUPPORT_TRANSACTIONS
