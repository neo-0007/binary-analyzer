
void FUN_00547f60(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != 0) {
    iVar2 = FUN_00436480(*(undefined8 *)(param_1 + 0x10));
    if (0 < iVar2) {
      iVar3 = 0;
      do {
        iVar3 = iVar3 + 1;
        uVar1 = FUN_00436020(*(undefined8 *)(param_1 + 0x10));
        FUN_0041ad60(uVar1,"../crypto/param_build.c",0x6e);
      } while (iVar2 != iVar3);
    }
    FUN_004360b0(*(undefined8 *)(param_1 + 0x10));
    FUN_0041ad60(param_1,"../crypto/param_build.c",0x77);
    return;
  }
  return;
}

