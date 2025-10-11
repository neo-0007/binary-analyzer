
int iconv_close(iconv_t __cd)

{
  int iVar1;
  long in_FS_OFFSET;
  
  if (__cd != (iconv_t)0xffffffffffffffff) {
    iVar1 = __gconv_close();
    return -(uint)(iVar1 != 0);
  }
  *(undefined4 *)(in_FS_OFFSET + -0x58) = 9;
  return -1;
}

