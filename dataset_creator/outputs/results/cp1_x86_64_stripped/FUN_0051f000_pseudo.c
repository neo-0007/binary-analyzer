
bool FUN_0051f000(void)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  
  lVar3 = FUN_0051e1a0();
  if (lVar3 != 0) {
    iVar2 = *(int *)(lVar3 + 0x380);
    bVar4 = *(int *)(lVar3 + 900) != iVar2;
    if (bVar4) {
      piVar1 = (int *)(lVar3 + 0x40 + (long)iVar2 * 4);
      *piVar1 = *piVar1 + 1;
    }
    return bVar4;
  }
  return false;
}

