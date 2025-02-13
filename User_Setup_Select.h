// Este arquivo de cabeçalho contém uma lista de arquivos de configuração do usuário e define qual deles o
// compilador usa quando a IDE realiza uma verificação/compilação ou upload.
//
// Os usuários podem criar configurações para diferentes placas e displays TFT.
// Isso torna a seleção entre configurações de hardware fácil ao "descomentar" uma linha.

// A vantagem desse método de configuração de hardware é que os exemplos fornecidos
// com a biblioteca devem funcionar imediatamente sem necessidade de outras alterações.
// Ele também melhora a portabilidade dos sketches dos usuários para outras configurações de hardware
// e bibliotecas compatíveis.
//
// Crie um atalho para este arquivo na sua área de trabalho para permitir o acesso rápido para edição.
// Recompile e faça o upload após realizar e salvar quaisquer alterações neste arquivo.

// Arquivos de exemplo de configuração do usuário estão armazenados na pasta "User_Setups". Estes podem ser usados
// sem modificações ou adaptados para uma configuração de hardware específica.

#ifndef USER_SETUP_LOADED //  Permite que os usuários do PlatformIO definam configurações no
                          //  platformio.ini, veja as notas na pasta "Tools".

///////////////////////////////////////////////////////
//   As linhas de seleção de configuração do usuário estão abaixo //
///////////////////////////////////////////////////////

// Apenas UMA linha abaixo deve ser descomentada para definir sua configuração. Adicione linhas e arquivos extras conforme necessário.

#include <User_Setup.h>           // A configuração padrão é a pasta raiz da biblioteca


//#include <User_Setups/Setup1_ILI9341.h>  // Arquivo de configuração para ESP8266 configurado para meu ILI9341
//#include <User_Setups/Setup2_ST7735.h>   // Arquivo de configuração para ESP8266 configurado para meu ST7735
//#include <User_Setups/Setup3_ILI9163.h>  // Arquivo de configuração para ESP8266 configurado para meu ILI9163
//#include <User_Setups/Setup4_S6D02A1.h>  // Arquivo de configuração para ESP8266 configurado para meu S6D02A1
//#include <User_Setups/Setup5_RPi_ILI9486.h>        // Arquivo de configuração para ESP8266 configurado para meu TFT RPi padrão
//#include <User_Setups/Setup6_RPi_Wr_ILI9486.h>     // Arquivo de configuração para ESP8266 configurado para meu TFT RPi modificado
//#include <User_Setups/Setup7_ST7735_128x128.h>     // Arquivo de configuração para ESP8266 configurado para meu display ST7735 128x128
//#include <User_Setups/Setup8_ILI9163_128x128.h>    // Arquivo de configuração para ESP8266 configurado para meu display ILI9163 128x128
//#include <User_Setups/Setup9_ST7735_Overlap.h>     // Arquivo de configuração para ESP8266 configurado para meu ST7735
//#include <User_Setups/Setup10_RPi_touch_ILI9486.h> // Arquivo de configuração para ESP8266 configurado para ESP8266 e TFT RPi com toque

//#include <User_Setups/Setup11_RPi_touch_ILI9486.h> // Arquivo de configuração para ESP32 e TFT RPi com toque
//#include <User_Setups/Setup12_M5Stack_Basic_Core.h>// Arquivo de configuração para o M5Stack baseado em ESP32 (apenas Core Básico)
//#include <User_Setups/Setup13_ILI9481_Parallel.h>  // Arquivo de configuração para o ESP32 com TFT de barramento paralelo
//#include <User_Setups/Setup14_ILI9341_Parallel.h>  // Arquivo de configuração para o ESP32 com TFT de barramento paralelo
//#include <User_Setups/Setup15_HX8357D.h>           // Arquivo de configuração para ESP8266 configurado para HX8357D
//#include <User_Setups/Setup16_ILI9488_Parallel.h>  // Arquivo de configuração para o ESP32 com TFT de barramento paralelo
//#include <User_Setups/Setup17_ePaper.h>            // Arquivo de configuração para ESP8266 e qualquer display ePaper Waveshare
//#include <User_Setups/Setup18_ST7789.h>            // Arquivo de configuração para ESP8266 configurado para ST7789

//#include <User_Setups/Setup19_RM68140_Parallel.h>	 // Arquivo de configuração para RM68140 com barramento paralelo

//#include <User_Setups/Setup20_ILI9488.h>           // Arquivo de configuração para ESP8266 e TFT SPI ILI9488
#include <User_Setups/Setup21_ILI9488.h>           // Arquivo de configuração para ESP32 e TFT SPI ILI9488

//#include <User_Setups/Setup22_TTGO_T4.h>           // Arquivo de configuração para ESP32 e TTGO T4 versão 1.2
//#include <User_Setups/Setup22_TTGO_T4_v1.3.h>      // Arquivo de configuração para ESP32 e TTGO T4 versão 1.3
//#include <User_Setups/Setup23_TTGO_TM.h>           // Arquivo de configuração para ESP32 e TTGO TM ST7789 TFT SPI
//#include <User_Setups/Setup24_ST7789.h>            // Arquivo de configuração para DSTIKE/ESP32/ESP8266 configurado para ST7789 240 x 240
//#include <User_Setups/Setup25_TTGO_T_Display.h>    // Arquivo de configuração para ESP32 e TTGO T-Display ST7789V TFT SPI
//#include <User_Setups/Setup26_TTGO_T_Wristband.h>  // Arquivo de configuração para ESP32 e TTGO T-Wristband ST7735 TFT SPI

//#include <User_Setups/Setup27_RPi_ST7796_ESP32.h>    // ESP32   Display RPi MHS-4.0 polegadas Display-B
//#include <User_Setups/Setup28_RPi_ST7796_ESP8266.h>  // ESP8266 Display RPi MHS-4.0 polegadas Display-B

//#include <User_Setups/Setup29_ILI9341_STM32.h>          // Arquivo de configuração para a placa Nucleo
//#include <User_Setups/Setup30_ILI9341_Parallel_STM32.h> // Arquivo de configuração para a placa Nucleo e display paralelo
//#include <User_Setups/Setup31_ST7796_Parallel_STM32.h>  // Arquivo de configuração para a placa Nucleo e display paralelo
//#include <User_Setups/Setup32_ILI9341_STM32F103.h>      // Arquivo de configuração para "Blue/Black Pill"

//#include <User_Setups/Setup33_RPi_ILI9486_STM32.h>      // Arquivo de configuração para a placa Nucleo

//#include <User_Setups/Setup34_ILI9481_Parallel_STM32.h> // Arquivo de configuração para a placa Nucleo e display paralelo
//#include <User_Setups/Setup35_ILI9341_STM32_Port_Bus.h> // Arquivo de configuração para display paralelo STM32 porta A

//#include <User_Setups/Setup36_RPi_touch_ST7796.h>      // Arquivo de configuração para ESP32 e RPi ST7796 TFT com toque

//#include <User_Setups/Setup42_ILI9341_ESP32.h>           // Arquivo de configuração para ESP32 e SPI ILI9341 240x320
//#include <User_Setups/Setup43_ST7735.h>            // Arquivo de configuração para ESP8266 & ESP32 configurado para meu ST7735S 80x160
//#include <User_Setups/Setup44_TTGO_CameraPlus.h>   // Arquivo de configuração para ESP32 e TTGO T-CameraPlus ST7789 TFT SPI 240x240
//#include <User_Setups/Setup45_TTGO_T_Watch.h>      // Arquivo de configuração para ESP32 e TTGO T-Watch ST7789 TFT SPI 240x240
//#include <User_Setups/Setup46_GC9A01_ESP32.h>      // Arquivo de configuração para ESP32 e GC9A01 TFT SPI 240x240

//#include <User_Setups/Setup47_ST7735.h>            // Arquivo de configuração para ESP32 configurado para ST7735 128 x 128 olhos animados

//#include <User_Setups/Setup50_SSD1963_Parallel.h>  // Arquivo de configuração para ESP32 e display TFT SSD1963

//#include <User_Setups/Setup51_LilyPi_ILI9481.h>    // Arquivo de configuração para LilyGo LilyPi com display ILI9481
//#include <User_Setups/Setup52_LilyPi_ST7796.h>     // Arquivo de configuração para LilyGo LilyPi com display ST7796

//#include <User_Setups/Setup60_RP2040_ILI9341.h>              // Arquivo de configuração para RP2040 com SPI ILI9341
//#include <User_Setups/Setup61_RP2040_ILI9341_PIO_SPI.h>      // Arquivo de configuração para RP2040 com PIO SPI ILI9341
//#include <User_Setups/Setup62_RP2040_Nano_Connect_ILI9341.h> // Arquivo de configuração para RP2040 com SPI ILI9341

//#include <User_Setups/Setup66_Seeed_XIAO_Round.h>     // Arquivo de configuração para Seeed XIAO com GC9A01 240x240

//#include <User_Setups/Setup70_ESP32_S2_ILI9341.h>     // Arquivo de configuração para ESP32 S2 com SPI ILI9341
//#include <User_Setups/Setup70b_ESP32_S3_ILI9341.h>    // Arquivo de configuração para ESP32 S3 com SPI ILI9341
//#include <User_Setups/Setup70c_ESP32_C3_ILI9341.h>    // Arquivo de configuração para ESP32 C3 com SPI ILI9341
//#include <User_Setups/Setup70d_ILI9488_S3_Parallel.h> // Arquivo de configuração para ESP32 S3 com SPI ILI9488

//#include <User_Setups/Setup71_ESP32_S2_ST7789.h>       // Arquivo de configuração para ESP32 S2 com ST7789
//#include <User_Setups/Setup72_ESP32_ST7789_172x320.h>  // Arquivo de configuração para ESP32 com ST7789 1.47" 172x320

//#include <User_Setups/Setup100_RP2040_ILI9488_parallel.h> // Arquivo de configuração para RP2040 com display paralelo ILI9488

//#include <User_Setups/Setup101_RP2040_ILI9481_parallel.h> // Arquivo de configuração para Pico/RP2040 com ILI9481 paralelo de 8 bits
//#include <User_Setups/Setup102_RP2040_ILI9341_parallel.h> // Arquivo de configuração para Pico/RP2040 com ILI9341 paralelo de 8 bits
//#include <User_Setups/Setup103_RP2040_ILI9486_parallel.h> // Arquivo de configuração para Pico/RP2040 com ILI9486 paralelo de 8 bits
//#include <User_Setups/Setup104_RP2040_ST7796_parallel.h>  // Arquivo de configuração para Pico/RP2040 com ST7796 paralelo de 8 bits

//#include <User_Setups/Setup105_RP2040_ST7796_16bit_parallel.h>  // Arquivo de configuração para RP2040 com display paralelo de 16 bits
//#include <User_Setups/Setup106_RP2040_ILI9481_16bit_parallel.h> // Arquivo de configuração para RP2040 com display paralelo de 16 bits
//#include <User_Setups/Setup107_RP2040_ILI9341_16bit_parallel.h> // Arquivo de configuração para RP2040 com display paralelo de 16 bits
//#include <User_Setups/Setup108_RP2040_ST7735.h> // Arquivo de configuração para a placa Waveshare RP2040 com display ST7735 0.96" 160x80

//#include <User_Setups/Setup135_ST7789.h>           // Arquivo de configuração para ESP8266 e ST7789 135 x 240 TFT

//#include <User_Setups/Setup136_LilyGo_TTV.h>       // Arquivo de configuração para ESP32 e Lilygo TTV com display SPI ST7789 135x240
//#include <User_Setups/Setup137_LilyGo_TDisplay_RP2040.h>  // Arquivo de configuração para Lilygo T-Display RP2040 (ST7789 no barramento SPI com display TFT 135x240)

//#include <User_Setups/Setup138_Pico_Explorer_Base_RP2040_ST7789.h> // Arquivo de configuração para Pico Explorer Base da Pimoroni para RP2040 (ST7789 no barramento SPI com display TFT 240x240)

//#include <User_Setups/Setup200_GC9A01.h>           // Arquivo de configuração para ESP32 e GC9A01 240 x 240 TFT

//#include <User_Setups/Setup201_WT32_SC01.h>        // Arquivo de configuração para ESP32 baseado no WT32_SC01 da Seeed

//#include <User_Setups/Setup202_SSD1351_128.h>      // Arquivo de configuração para display OLED SSD1351 128x128 de 1.5 polegadas baseado em ESP32/ESP8266

//#include <User_Setups/Setup203_ST7789.h>     // Arquivo de configuração para display ST7789 240X280 de 1.69 polegadas baseado em ESP32/ESP8266

//#include <User_Setups/Setup204_ESP32_TouchDown.h>     // Arquivo de configuração para o ESP32 TouchDown baseado em display TFT ILI9488 480 x 320

//#include <User_Setups/Setup205_ESP32_TouchDown_S3.h>     // Arquivo de configuração para o ESP32 TouchDown S3 baseado em display TFT ILI9488 480 x 320

//#include <User_Setups/Setup206_LilyGo_T_Display_S3.h>     // Para o LilyGo T-Display S3 baseado em ESP32S3 com display ST7789 170 x 320
//#include <User_Setups/Setup207_LilyGo_T_HMI.h>            // Para o LilyGo T-HMI S3 baseado em ESP32S3 com display ST7789 240 x 320
//#include <User_Setups/Setup209_LilyGo_T_Dongle_S3.h>      // Para o LilyGo T-Dongle S3 baseado em ESP32 com display ST7735 80 x 160
//#include <User_Setups/Setup210_LilyGo_T_Embed_S3.h>         // Para o LilyGo T-Embed S3 baseado em ESP32S3 com display ST7789 170 x 320
//#include <User_Setups/Setup211_LilyGo_T_QT_Pro_S3.h>         // Para o LilyGo T-QT Pro S3 baseado em ESP32S3 com display GC9A01 128 x 128
// #include <User_Setups/Setup212_LilyGo_T_PicoPro.h>         // Para o LilyGo T-PICO-Pro com display ST7796 222 x 480
// #include <User_Setups/Setup213_LilyGo_T_Beam_Shield.h>         // Para o LilyGo T-BEAM V1.x com display ST7796 222 x 480

//#include <User_Setups/Setup250_ESP32_S3_Box_Lite.h>      // Para o ESP32 S3 Box Lite
//#include <User_Setups/Setup251_ESP32_S3_Box.h>            // Para o ESP32 S3 Box

//#include <User_Setups/Setup301_BW16_ST7735.h>            // Arquivo de configuração para placas baseadas em Bw16 com display ST7735 160 x 80
//#include <User_Setups/Setup302_Waveshare_ESP32S3_GC9A01.h>            // Arquivo de configuração para a placa Waveshare ESP32-S3-Touch-LCD-1.28 com display GC9A01 240*240

//#include <User_Setups/SetupX_Template.h>     // Arquivo de modelo para uma configuração


//#include <User_Setups/Dustin_ILI9488.h>          // Arquivo de configuração para PCB de Dustin Watts com ILI9488
//#include <User_Setups/Dustin_ST7796.h>           // Arquivo de configuração para PCB de Dustin Watts com ST7796
//#include <User_Setups/Dustin_ILI9488_Pico.h>     // Arquivo de configuração para PCB Pico de Dustin Watts com ST7796
//#include <User_Setups/Dustin_ST7789_Pico.h>      // Arquivo de configuração para PCB de Dustin Watts com ST7789 240 x 240 em placa adaptadora 3.3V
//#include <User_Setups/Dustin_GC9A01_Pico.h>      // Arquivo de configuração para PCB de Dustin Watts com GC9A01 240 x 240 em placa adaptadora 3.3V
//#include <User_Setups/Dustin_GC9A01_ESP32.h>     // Arquivo de configuração para PCB de Dustin Watts com GC9A01 240 x 240 em placa adaptadora 3.3V
//#include <User_Setups/Dustin_STT7789_ESP32.h>    // Arquivo de configuração para PCB de Dustin Watts com ST7789 240 x 240 em placa adaptadora 3.3V
//#include <User_Setups/Dustin_ILI9341_ESP32.h>    // Arquivo de configuração para PCB de Dustin Watts com ILI9341
//#include <User_Setups/ILI9225.h>

#endif // USER_SETUP_LOADED




/////////////////////////////////////////////////////////////////////////////////////
//                                                                                 //
// NÃO ALTERE NENHUMA DAS LINHAS A SEGUIR, ELAS ADICIONAM OS DRIVERES TFT          // 
// E AS DEFINIÇÕES DE PINOS DO ESP8266, ELAS ESTÃO AQUI PARA A COMODIDADE          // 
// DO BODMER!                                                                      //
//                                                                                 //
/////////////////////////////////////////////////////////////////////////////////////


// Exibidores TFT aparentemente idênticos podem ter uma ordem de cores diferente no modo de 16 bits
#define TFT_BGR 0   // Ordem de cores Azul-Verde-Vermelho
#define TFT_RGB 1   // Ordem de cores Vermelho-Verde-Azul

// Suporte de configuração legada, RPI_DISPLAY_TYPE substitui RPI_DRIVER
#if defined (RPI_DRIVER)
  #if !defined (RPI_DISPLAY_TYPE)
    #define RPI_DISPLAY_TYPE
  #endif
#endif

// Suporte de configuração legada, a forma RPI_ILI9486_DRIVER está obsoleta
// Em vez disso, defina RPI_DISPLAY_TYPE e também defina o driver (por exemplo, ILI9486_DRIVER) 
#if defined (RPI_ILI9486_DRIVER)
  #if !defined (ILI9486_DRIVER)
    #define ILI9486_DRIVER
  #endif
  #if !defined (RPI_DISPLAY_TYPE)
    #define RPI_DISPLAY_TYPE
  #endif
#endif

// Ativar cor de 18 bits para displays selecionados
#if !defined (RPI_DISPLAY_TYPE) && !defined (TFT_PARALLEL_8_BIT) && !defined (TFT_PARALLEL_16_BIT) && !defined (ESP32_PARALLEL)
  #if defined (ILI9481_DRIVER) || defined (ILI9486_DRIVER) || defined (ILI9488_DRIVER)
    #define SPI_18BIT_DRIVER
  #endif
#endif

// Carregar a definição do driver correto - não altere aqui!
#if   defined (ILI9341_DRIVER) || defined(ILI9341_2_DRIVER) || defined (ILI9342_DRIVER)
     #include <TFT_Drivers/ILI9341_Defines.h>
     #define  TFT_DRIVER 0x9341
#elif defined (ST7735_DRIVER)
     #include <TFT_Drivers/ST7735_Defines.h>
     #define  TFT_DRIVER 0x7735
#elif defined (ILI9163_DRIVER)
     #include <TFT_Drivers/ILI9163_Defines.h>
     #define  TFT_DRIVER 0x9163
#elif defined (S6D02A1_DRIVER)
     #include <TFT_Drivers/S6D02A1_Defines.h>
     #define  TFT_DRIVER 0x6D02
#elif defined (ST7796_DRIVER)
      #include "TFT_Drivers/ST7796_Defines.h"
      #define  TFT_DRIVER 0x7796
#elif defined (ILI9486_DRIVER)
     #include <TFT_Drivers/ILI9486_Defines.h>
     #define  TFT_DRIVER 0x9486
#elif defined (ILI9481_DRIVER)
     #include <TFT_Drivers/ILI9481_Defines.h>
     #define  TFT_DRIVER 0x9481
#elif defined (ILI9488_DRIVER)
     #include <TFT_Drivers/ILI9488_Defines.h>
     #define  TFT_DRIVER 0x9488
#elif defined (HX8357D_DRIVER)
     #include "TFT_Drivers/HX8357D_Defines.h"
     #define  TFT_DRIVER 0x8357
#elif defined (EPD_DRIVER)
     #include "TFT_Drivers/EPD_Defines.h"
     #define  TFT_DRIVER 0xE9D
#elif defined (ST7789_DRIVER)
     #include "TFT_Drivers/ST7789_Defines.h"
     #define  TFT_DRIVER 0x7789
#elif defined (R61581_DRIVER)
     #include "TFT_Drivers/R61581_Defines.h"
     #define  TFT_DRIVER 0x6158
#elif defined (ST7789_2_DRIVER)
     #include "TFT_Drivers/ST7789_2_Defines.h"
     #define  TFT_DRIVER 0x778B
#elif defined (RM68140_DRIVER)
     #include "TFT_Drivers/RM68140_Defines.h"
     #define  TFT_DRIVER 0x6814
#elif defined (SSD1351_DRIVER)
     #include "TFT_Drivers/SSD1351_Defines.h"
     #define  TFT_DRIVER 0x1351
#elif defined (SSD1963_480_DRIVER)
     #include "TFT_Drivers/SSD1963_Defines.h"
     #define  TFT_DRIVER 0x1963
#elif defined (SSD1963_800_DRIVER)
     #include "TFT_Drivers/SSD1963_Defines.h"
     #define  TFT_DRIVER 0x1963
#elif defined (SSD1963_800ALT_DRIVER)
     #include "TFT_Drivers/SSD1963_Defines.h"
     #define  TFT_DRIVER 0x1963
#elif defined (SSD1963_800BD_DRIVER)
     #include "TFT_Drivers/SSD1963_Defines.h"
     #define  TFT_DRIVER 0x1963
#elif defined (GC9A01_DRIVER)
     #include "TFT_Drivers/GC9A01_Defines.h"
     #define  TFT_DRIVER 0x9A01
#elif defined (ILI9225_DRIVER)
     #include "TFT_Drivers/ILI9225_Defines.h"
     #define  TFT_DRIVER 0x9225
#elif defined (RM68120_DRIVER)
     #include "TFT_Drivers/RM68120_Defines.h"
     #define  TFT_DRIVER 0x6812
#elif defined (HX8357B_DRIVER)
     #include "TFT_Drivers/HX8357B_Defines.h"
     #define  TFT_DRIVER 0x835B
#elif defined (HX8357C_DRIVER)
     #include "TFT_Drivers/HX8357C_Defines.h"
     #define  TFT_DRIVER 0x835C

                              // <<<<<<<<<<<<<<<<<<<<<<<< ADICIONE NOVO DRIVER AQUI
                              // XYZZY_init.h e XYZZY_rotation.h também devem ser adicionados em TFT_eSPI.cpp
#elif defined (XYZZY_DRIVER)
     #include "TFT_Drivers/XYZZY_Defines.h"
     #define  TFT_DRIVER 0x0000
#else
     #define  TFT_DRIVER 0x0000
#endif

// Estes são os pinos para as placas ESP8266
//      Nome    GPIO    NodeMCU      Função
#define PIN_D0  16  // GPIO16       WAKE
#define PIN_D1   5  // GPIO5        Propósito do usuário
#define PIN_D2   4  // GPIO4        Propósito do usuário
#define PIN_D3   0  // GPIO0        Baixo no boot significa entrar no modo FLASH
#define PIN_D4   2  // GPIO2        TXD1 (deve estar alto no boot para ir ao modo UART0 FLASH)
#define PIN_D5  14  // GPIO14       HSCLK
#define PIN_D6  12  // GPIO12       HMISO
#define PIN_D7  13  // GPIO13       HMOSI  RXD2
#define PIN_D8  15  // GPIO15       HCS    TXD0 (deve estar baixo no boot para entrar no modo UART0 FLASH)
#define PIN_D9   3  //              RXD0
#define PIN_D10  1  //              TXD0

#define PIN_MOSI 8  // SD1          FLASH e modo de sobreposição
#define PIN_MISO 7  // SD0
#define PIN_SCLK 6  // CLK
#define PIN_HWCS 0  // D3

#define PIN_D11  9  // SD2
#define PIN_D12 10  // SD4

