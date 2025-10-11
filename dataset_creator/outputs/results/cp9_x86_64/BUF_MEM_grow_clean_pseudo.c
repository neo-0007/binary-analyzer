
int BUF_MEM_grow_clean(BUF_MEM *str,size_t len)

{
  size_t sVar1;
  ulong uVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  uVar2 = str->length;
  if (len <= uVar2) {
    if (str->data != (char *)0x0) {
      memset(str->data + len,0,uVar2 - len);
    }
LAB_004b89cf:
    str->length = len;
    return (int)len;
  }
  if (len <= str->max) {
    memset(str->data + uVar2,0,len - uVar2);
    str->length = len;
    return (int)len;
  }
  if (len < 0x5ffffffd) {
    sVar1 = ((len + 3) / 3) * 4;
    if ((str[1].length & 1) == 0) {
      pcVar3 = (char *)CRYPTO_clear_realloc
                                 (str->data,str->max,sVar1,"../crypto/buffer/buffer.c",0x87);
    }
    else {
      pcVar3 = (char *)sec_alloc_realloc();
    }
    if (pcVar3 != (char *)0x0) {
      str->data = pcVar3;
      str->max = sVar1;
      memset(pcVar3 + str->length,0,len - str->length);
      goto LAB_004b89cf;
    }
    ERR_new();
    uVar4 = 0x89;
  }
  else {
    ERR_new();
    uVar4 = 0x80;
  }
  ERR_set_debug("../crypto/buffer/buffer.c",uVar4,"BUF_MEM_grow_clean");
  ERR_set_error(7,0xc0100,0);
  return 0;
}

