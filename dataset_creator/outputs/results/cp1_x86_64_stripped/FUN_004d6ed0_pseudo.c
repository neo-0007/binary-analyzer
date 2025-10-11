
undefined4 FUN_004d6ed0(long param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar4 = FUN_004d8d30(uVar1);
  lVar5 = FUN_004d8d50(uVar1);
  lVar6 = FUN_004d8d40(uVar1);
  lVar7 = FUN_004d8d60(uVar1);
  lVar8 = FUN_004d8d70(uVar1);
  if (((lVar4 == 0 || lVar6 == 0) || (lVar5 == 0)) || (lVar9 = FUN_00547ef0(), lVar9 == 0)) {
    return 0;
  }
  iVar2 = FUN_00548430(lVar9,"p",lVar4);
  if (((iVar2 != 0) && (iVar2 = FUN_00548430(lVar9,"q",lVar6), iVar2 != 0)) &&
     (iVar2 = FUN_00548430(lVar9,"g",lVar5), iVar2 != 0)) {
    if (lVar7 == 0) {
      uVar10 = 4;
    }
    else {
      uVar10 = 6;
      iVar2 = FUN_00548430(lVar9,&DAT_007ce5e4,lVar7);
      if (iVar2 == 0) goto LAB_004d6f5e;
    }
    if (lVar8 != 0) {
      iVar2 = FUN_00548430(lVar9,&DAT_007ce5df,lVar8);
      if (iVar2 == 0) goto LAB_004d6f5e;
      uVar10 = uVar10 | 1;
    }
    lVar4 = FUN_00548720(lVar9);
    if (lVar4 != 0) {
      uVar3 = (*param_3)(param_2,uVar10,lVar4);
      FUN_0041ec30(lVar4);
      goto LAB_004d6f61;
    }
  }
LAB_004d6f5e:
  uVar3 = 0;
LAB_004d6f61:
  FUN_00547f60(lVar9);
  return uVar3;
}

