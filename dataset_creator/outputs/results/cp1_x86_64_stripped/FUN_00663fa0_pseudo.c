
long FUN_00663fa0(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if ((*(byte *)(param_1 + 0x78) & 8) != 0) {
    cVar1 = FUN_006c3d30(param_1 + 0x68);
    if (cVar1 != '\0') {
      lVar4 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
      if (*(long **)(param_1 + 200) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00403826();
      }
      iVar2 = (**(code **)(**(long **)(param_1 + 200) + 0x28))();
      if (iVar2 < 0) {
        return lVar4;
      }
      lVar3 = FUN_006c4140(param_1 + 0x68);
      iVar2 = (**(code **)(**(long **)(param_1 + 200) + 0x40))();
      return lVar4 + lVar3 / (long)iVar2;
    }
  }
  return -1;
}

