
FILE * __nss_files_fopen(char *param_1)

{
  int iVar1;
  FILE *__stream;
  FILE *pFVar2;
  long in_FS_OFFSET;
  
  __stream = fopen(param_1,"rce");
  pFVar2 = __stream;
  if (__stream != (FILE *)0x0) {
    __stream->_flags = __stream->_flags | 0x8000;
    iVar1 = fseeko(__stream,0,0);
    if (iVar1 < 0) {
      pFVar2 = (FILE *)0x0;
      fclose(__stream);
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x1d;
    }
  }
  return pFVar2;
}

