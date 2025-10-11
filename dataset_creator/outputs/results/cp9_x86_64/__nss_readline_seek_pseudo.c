
void __nss_readline_seek(FILE *param_1,__off64_t param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  
  if (-1 < param_2) {
    iVar1 = fseeko(param_1,param_2,0);
    if (-1 < iVar1) {
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x22;
      return;
    }
  }
  param_1->_flags = param_1->_flags | 0x20;
  *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x1d;
  return;
}

