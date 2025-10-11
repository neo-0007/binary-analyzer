
size_t strspn(char *__s,char *__accept)

{
  code *pcVar1;
  
  pcVar1 = __strspn_sse2;
  if ((DAT_0093deec._2_1_ & 0x10) != 0) {
    pcVar1 = __strspn_sse42;
  }
  return (size_t)pcVar1;
}

