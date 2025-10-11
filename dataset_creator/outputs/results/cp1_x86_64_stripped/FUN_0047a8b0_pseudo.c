
undefined8 FUN_0047a8b0(long param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  plVar1 = *(long **)(param_1 + 0xf8);
  lVar3 = FUN_0041cdd0(param_2,"mac");
  if (lVar3 != 0) {
    if (*plVar1 == 0) {
      return 0;
    }
    uVar4 = FUN_0053f2e0();
    uVar4 = FUN_0053f6a0(uVar4);
    iVar2 = FUN_0041e1a0(lVar3,uVar4);
    if (iVar2 == 0) {
      return 0;
    }
  }
  lVar3 = FUN_0041cdd0(param_2,"digest");
  if (lVar3 == 0) {
LAB_0047a942:
    uVar4 = FUN_005b3920(param_1,param_2);
    return uVar4;
  }
  lVar5 = FUN_0043c7e0(plVar1 + 1);
  if (lVar5 != 0) {
    uVar4 = FUN_0040ab30(lVar5);
    iVar2 = FUN_0041e1a0(lVar3,uVar4);
    if (iVar2 != 0) goto LAB_0047a942;
  }
  return 0;
}

