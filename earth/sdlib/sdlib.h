#ifndef SDLIB_H
#define SDLIB_H

/* SD card library interface */
#define SD_BLOCK_SIZE 512

int sdinit();
int sdread(uint32_t offset, uint32_t nblock, char* dst);
int sdwrite(uint32_t offset, uint32_t nblock, char* src);

enum {
      SD_CARD_TYPE_SD1,
      SD_CARD_TYPE_SD2,
      SD_CARD_TYPE_SDHC,
      SD_CARD_TYPE_UNKNOWN
};
extern int SD_CARD_TYPE;

#endif