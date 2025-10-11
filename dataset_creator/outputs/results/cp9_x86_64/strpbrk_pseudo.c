
char * strpbrk(char *__s,char *__accept)

{
  code *pcVar1;
  
  pcVar1 = __strpbrk_sse2;
  if ((DAT_0093deec._2_1_ & 0x10) != 0) {
    pcVar1 = __strpbrk_sse42;
  }
  return (char *)pcVar1;
}

