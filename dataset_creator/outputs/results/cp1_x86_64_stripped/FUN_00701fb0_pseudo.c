
int FUN_00701fb0(long *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x58) == 0) {
    iVar1 = *(int *)(lVar2 + 0x4c);
    if (*(int *)(lVar2 + 0x48) != iVar1) {
      iVar1 = 0;
    }
    return iVar1;
  }
  return -1;
}

