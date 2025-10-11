
char * strstr(char *__haystack,char *__needle)

{
  code *pcVar1;
  
  pcVar1 = __strstr_sse2_unaligned;
  if (((byte)DAT_0093dff4 & 8) == 0) {
    pcVar1 = __strstr_sse2;
  }
  return (char *)pcVar1;
}

