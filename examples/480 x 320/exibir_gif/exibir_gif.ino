#include <SPI.h>
#include <TFT_eSPI.h>
#include <SD.h>
#include <AnimatedGIF.h>

// Instâncias do display e do decoder
TFT_eSPI tft = TFT_eSPI();
AnimatedGIF gif;

// Pino do CS do microSD
#define SD_CS 5

// Estrutura para armazenar informações do arquivo GIF
typedef struct {
    File file;
} GIFFileWrapper;

// Função para abrir o arquivo no SD
void *GIFOpen(const char *filename, int32_t *fileSize) {
    Serial.print("Abrindo GIF: ");
    Serial.println(filename);
    
    static GIFFileWrapper gifFile;
    gifFile.file = SD.open(filename);
    
    if (!gifFile.file) {
        Serial.println("Erro ao abrir arquivo!");
        return nullptr;
    }

    *fileSize = gifFile.file.size();
    return &gifFile;
}

// Função para fechar o arquivo
void GIFClose(void *handle) {
    if (handle) {
        GIFFileWrapper *gifFile = (GIFFileWrapper *)handle;
        gifFile->file.close();
    }
}

// Função para ler os dados do GIF
int32_t GIFRead(GIFFILE *pFile, uint8_t *pBuf, int32_t iLen) {
    GIFFileWrapper *gifFile = (GIFFileWrapper *)pFile->fHandle;
    return gifFile->file.read(pBuf, iLen);
}

// Função para mover a posição do arquivo
int32_t GIFSeek(GIFFILE *pFile, int32_t iPosition) {
    GIFFileWrapper *gifFile = (GIFFileWrapper *)pFile->fHandle;
    gifFile->file.seek(iPosition);
    return iPosition;
}

// Função chamada pelo decoder para desenhar cada pixel
void GIFDraw(GIFDRAW *pDraw) {
    uint8_t *s = pDraw->pPixels;
    uint16_t *d, *usPalette;
    int x = pDraw->iX, y = pDraw->iY;
    int width = pDraw->iWidth;

    if (pDraw->ucDisposalMethod == 2) {
        tft.fillRect(x, y, width, pDraw->iHeight, TFT_BLACK);
    }

    d = (uint16_t *)malloc(width * 2);
    if (d) {
        usPalette = pDraw->pPalette;
        for (int i = 0; i < width; i++) {
            d[i] = usPalette[*s++];
        }
        tft.pushImage(x, y, width, 1, d);
        free(d);
    }
}

// Função para abrir e exibir o GIF
void displayGIF(const char *filename) {
    int delayMilliseconds;

    if (!gif.open(filename, GIFOpen, GIFClose, GIFRead, GIFSeek, GIFDraw)) {
        Serial.println("Erro ao abrir o GIF!");
        return;
    }

    Serial.println("Exibindo GIF...");

    while (gif.playFrame(true, &delayMilliseconds)) {
        delay(delayMilliseconds);
    }

    gif.close();
}

void setup() {
    Serial.begin(115200);
    tft.begin();
    tft.setRotation(1);
    tft.fillScreen(TFT_BLACK);

    if (!SD.begin(SD_CS)) {
        Serial.println("Falha ao inicializar o microSD!");
        return;
    }

    Serial.println("MicroSD inicializado!");
    gif.begin(LITTLE_ENDIAN_PIXELS);

    // Exibe o GIF (substitua pelo nome correto do arquivo)
    displayGIF("/fxVE.gif");
}

void loop() {
    // Pode-se repetir a exibição do GIF chamando displayGIF() aqui se necessário
}
