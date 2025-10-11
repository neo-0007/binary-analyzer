
int BUF_MEM_grow(BUF_MEM *str,size_t len)

{
  size_t sVar1;
  ulong uVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  uVar2 = str->length;
  if (uVar2 < len) {
    if (str->max < len) {
      if (len < 0x5ffffffd) {
        sVar1 = ((len + 3) / 3) * 4;
        if ((str[1].length & 1) == 0) {
          pcVar3 = (char *)CRYPTO_realloc(str->data,(int)sVar1,"../crypto/buffer/buffer.c",0x61);
        }
        else {
          pcVar3 = (char *)sec_alloc_realloc();
        }
        if (pcVar3 != (char *)0x0) {
          str->data = pcVar3;
          str->max = sVar1;
          memset(pcVar3 + str->length,0,len - str->length);
          goto LAB_004b88b8;
        }
        ERR_new();
        uVar4 = 99;
      }
      else {
        ERR_new();
        uVar4 = 0x5a;
      }
      ERR_set_debug("../crypto/buffer/buffer.c",uVar4,"BUF_MEM_grow");
      ERR_set_error(7,0xc0100,0);
      return 0;
    }
    if (str->data != (char *)0x0) {
      memset(str->data + uVar2,0,len - uVar2);
    }
  }
LAB_004b88b8:
  str->length = len;
  return (int)len;
}

