
ulong FUN_00476980(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  lVar3 = FUN_0041cdd0(param_2,"size");
  if (lVar3 != 0) {
    uVar4 = FUN_00545110(*(undefined8 *)(param_1 + 8));
    uVar5 = thunk_FUN_0041d9c0(lVar3,uVar4);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
  }
  lVar3 = FUN_0041cdd0(param_2,"block-size");
  uVar5 = 1;
  if (lVar3 != 0) {
    lVar6 = FUN_0043c7e0(param_1 + 0x10);
    uVar1 = 0;
    if (lVar6 != 0) {
      uVar1 = FUN_0040abc0(lVar6,0);
    }
    iVar2 = thunk_FUN_0041d0b0(lVar3,uVar1);
    uVar5 = (ulong)(iVar2 != 0);
  }
  return uVar5;
}

