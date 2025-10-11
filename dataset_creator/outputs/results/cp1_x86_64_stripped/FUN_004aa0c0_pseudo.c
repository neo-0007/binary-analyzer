
void FUN_004aa0c0(void)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_00419fe0(0x100,0);
  if (iVar1 != 0) {
    lVar2 = FUN_004a9550();
    if (((lVar2 != 0) && (*(long *)(lVar2 + 0x3c8) != 0)) && (*(int *)(lVar2 + 0x3d0) != 0)) {
      *(int *)(lVar2 + 0x3d0) = *(int *)(lVar2 + 0x3d0) + -1;
      return;
    }
  }
  return;
}

