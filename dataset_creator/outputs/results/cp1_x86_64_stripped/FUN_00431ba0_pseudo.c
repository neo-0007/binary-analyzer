
ulong FUN_00431ba0(long param_1,undefined8 param_2,ulong *param_3,undefined8 param_4,
                  undefined4 param_5)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  lVar1 = *(long *)(param_1 + 0x98);
  auVar6 = thunk_FUN_00540f20(*(undefined8 *)(param_1 + 0x88));
  uVar4 = auVar6._0_8_;
  iVar3 = *(int *)(lVar1 + 0x1c);
  if (iVar3 == 4) {
    iVar3 = FUN_00431b10(lVar1,param_1,auVar6._8_8_,uVar4);
    if (iVar3 == 0) {
      return 0xffffffff;
    }
    uVar5 = FUN_0056b090(param_5,param_4,*(undefined8 *)(lVar1 + 0x38),uVar4,3);
    if ((int)uVar5 < 1) {
      return uVar5;
    }
    uVar2 = FUN_0056c670(param_2,uVar5 & 0xffffffff,*(undefined8 *)(lVar1 + 0x38),uVar5 & 0xffffffff
                         ,uVar5 & 0xffffffff,*(undefined8 *)(lVar1 + 0x40),
                         *(undefined8 *)(lVar1 + 0x48),*(undefined8 *)(lVar1 + 0x20),
                         *(undefined8 *)(lVar1 + 0x28));
  }
  else {
    if ((iVar3 == 1) && (*(int *)(lVar1 + 0x50) == 0)) {
      iVar3 = 8;
    }
    uVar2 = FUN_0056b090(param_5,param_4,param_2,uVar4,iVar3);
  }
  uVar5 = (long)(int)uVar2 >> 0x3f;
  *param_3 = uVar5 & *param_3 | (long)(int)uVar2 & ~uVar5;
  return (ulong)(uVar2 & (int)uVar2 >> 0x1f | ~((int)uVar2 >> 0x1f) & 1U);
}

