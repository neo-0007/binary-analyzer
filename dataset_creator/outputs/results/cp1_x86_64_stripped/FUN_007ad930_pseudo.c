
void FUN_007ad930(long param_1,char param_2)

{
  int iVar1;
  long lVar2;
  
  if (-1 < *(int *)(param_1 + 500)) {
    FUN_0076e4b0();
    *(uint *)(param_1 + 0x1f8) = *(uint *)(param_1 + 0x1f8) & 0xfffffffc;
    *(undefined4 *)(param_1 + 500) = 0xffffffff;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 < 1) {
    if (param_2 != '\0') {
      FUN_007b04c0(param_1);
      return;
    }
  }
  else {
    if (param_2 != '\0') {
      lVar2 = 0;
      do {
        if (*(long *)(param_1 + 0x218 + lVar2 * 8) != 0) {
          if (*(int *)(param_1 + 0x208 + lVar2 * 4) != -1) {
            FUN_0076e4b0();
            *(undefined4 *)(param_1 + 0x208 + lVar2 * 4) = 0xffffffff;
          }
          FUN_007104f0(*(undefined8 *)(param_1 + 0x218 + lVar2 * 8));
          *(undefined8 *)(param_1 + 0x218 + lVar2 * 8) = 0;
          iVar1 = *(int *)(param_1 + 0x10);
        }
        lVar2 = lVar2 + 1;
      } while ((int)lVar2 < iVar1);
      FUN_007b04c0(param_1);
      return;
    }
    if ((*(long *)(param_1 + 0x218) != 0) && (*(int *)(param_1 + 0x208) != -1)) {
      FUN_0076e4b0();
      iVar1 = *(int *)(param_1 + 0x10);
      *(undefined4 *)(param_1 + 0x208) = 0xffffffff;
    }
    if (1 < iVar1) {
      if ((*(long *)(param_1 + 0x220) != 0) && (*(int *)(param_1 + 0x20c) != -1)) {
        FUN_0076e4b0();
        iVar1 = *(int *)(param_1 + 0x10);
        *(undefined4 *)(param_1 + 0x20c) = 0xffffffff;
      }
      if (((2 < iVar1) && (*(long *)(param_1 + 0x228) != 0)) && (*(int *)(param_1 + 0x210) != -1)) {
        FUN_0076e4b0();
        *(undefined4 *)(param_1 + 0x210) = 0xffffffff;
      }
    }
  }
  return;
}

