
char * FUN_00567030(void)

{
  char *pcVar1;
  
  pcVar1 = "rc4(8x,int)";
  if ((DAT_0094b598 >> 0x14 & 1) == 0) {
    if ((DAT_0094b598 >> 0x1e & 1) != 0) {
      return "rc4(16x,int)";
    }
  }
  else {
    pcVar1 = "rc4(8x,char)";
  }
  return pcVar1;
}

