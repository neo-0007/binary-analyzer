
ulong FUN_005cf640(undefined8 param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  iVar1 = FUN_004f0cc0();
  if (iVar1 != 0) {
    iVar1 = FUN_004f0cc0(param_1,param_3);
    return (ulong)(iVar1 == 0);
  }
  iVar1 = FUN_004f0cc0(param_1,param_3);
  if (iVar1 == 0) {
    if ((*(int *)(param_2 + 0x28) == 0) || (*(int *)(param_3 + 0x28) == 0)) {
      lVar6 = 0;
      if ((param_4 == 0) && (lVar6 = FUN_004b2b10(), param_4 = lVar6, lVar6 == 0)) {
        return 0xffffffff;
      }
      FUN_004b2c00(param_4);
      uVar2 = FUN_004b2df0(param_4);
      uVar3 = FUN_004b2df0(param_4);
      uVar4 = FUN_004b2df0(param_4);
      lVar5 = FUN_004b2df0(param_4);
      if (((lVar5 == 0) || (iVar1 = FUN_004f0d70(param_1,param_2,uVar2,uVar3,param_4), iVar1 == 0))
         || (iVar1 = FUN_004f0d70(param_1,param_3,uVar4,lVar5,param_4), iVar1 == 0)) {
        uVar7 = 0xffffffff;
      }
      else {
        uVar7 = 1;
        iVar1 = FUN_004b7840(uVar2,uVar4);
        if (iVar1 == 0) {
          iVar1 = FUN_004b7840(uVar3,lVar5);
          uVar7 = (ulong)(iVar1 != 0);
        }
      }
      FUN_004b2d50(param_4);
      FUN_004b2b50(lVar6);
      return uVar7;
    }
    iVar1 = FUN_004b7840(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_3 + 0x10));
    if (iVar1 == 0) {
      iVar1 = FUN_004b7840(*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_3 + 0x18));
      return (ulong)(iVar1 != 0);
    }
  }
  return 1;
}

