
uint file_eof(long param_1)

{
  long lVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    lVar1 = BIO_ctrl(*(BIO **)(param_1 + 0x18),10,0,(void *)0x0);
    uVar2 = 0;
    if ((int)lVar1 == 0) {
      lVar1 = BIO_ctrl(*(BIO **)(param_1 + 0x18),2,0,(void *)0x0);
      return (uint)((int)lVar1 != 0);
    }
  }
  else {
    uVar2 = 1;
    if (*(int *)(param_1 + 0x10) == 1) {
      uVar2 = *(uint *)(param_1 + 0x20);
    }
  }
  return uVar2;
}

