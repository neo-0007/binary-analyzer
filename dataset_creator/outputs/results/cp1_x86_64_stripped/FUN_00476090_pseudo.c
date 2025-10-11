
undefined4 FUN_00476090(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar5 = FUN_00485290(*param_1);
  if (param_2 == 0) {
    return 1;
  }
  puVar1 = param_1 + 2;
  iVar3 = FUN_0043c4c0(puVar1,param_2,uVar5);
  if (iVar3 != 0) {
    lVar6 = thunk_FUN_0041cdd0(param_2,"key");
    if (lVar6 == 0) {
      return 1;
    }
    if (*(int *)(lVar6 + 8) == 5) {
      uVar5 = *(undefined8 *)(lVar6 + 0x18);
      uVar2 = *(undefined8 *)(lVar6 + 0x10);
      uVar7 = FUN_0043c5d0(puVar1);
      uVar8 = FUN_0043c5c0(puVar1);
      uVar4 = FUN_004cb7e0(param_1[1],uVar2,uVar5,uVar8,uVar7);
      FUN_0043c400(puVar1);
      return uVar4;
    }
  }
  return 0;
}

