
char * fgets_unlocked(char *__s,int __n,FILE *__stream)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  char *pcVar4;
  long in_FS_OFFSET;
  
  if (0 < __n) {
    if (__n == 1) {
      *__s = '\0';
    }
    else {
      uVar1 = __stream->_flags;
      __stream->_flags = uVar1 & 0xffffffdf;
      lVar2 = _IO_getline(__stream,__s,(long)(__n + -1),10);
      uVar3 = __stream->_flags;
      pcVar4 = (char *)0x0;
      if ((lVar2 != 0) &&
         (((uVar3 & 0x20) == 0 || (pcVar4 = (char *)0x0, *(int *)(in_FS_OFFSET + -0x58) == 0xb)))) {
        __s[lVar2] = '\0';
        uVar3 = __stream->_flags;
        pcVar4 = __s;
      }
      __stream->_flags = uVar1 & 0x20 | uVar3;
      __s = pcVar4;
    }
    return __s;
  }
  return (char *)0x0;
}

