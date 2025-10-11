
size_t strcspn(char *__s,char *__reject)

{
  code *pcVar1;
  
  pcVar1 = __strcspn_sse2;
  if ((DAT_0093deec._2_1_ & 0x10) != 0) {
    pcVar1 = __strcspn_sse42;
  }
  return (size_t)pcVar1;
}

