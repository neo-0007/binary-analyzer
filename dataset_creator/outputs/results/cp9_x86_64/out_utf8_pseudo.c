
int out_utf8(ulong param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = UTF8_putc((uchar *)0x0,-1,param_1);
  if (0 < iVar1) {
    *param_2 = *param_2 + iVar1;
    iVar1 = 1;
  }
  return iVar1;
}

