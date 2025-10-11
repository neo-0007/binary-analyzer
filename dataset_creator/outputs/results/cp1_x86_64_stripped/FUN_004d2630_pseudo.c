
undefined4 FUN_004d2630(long param_1,undefined8 param_2,code *param_3)

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
  long lVar10;
  uint uVar11;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar4 = FUN_004d60b0(uVar1);
  lVar5 = FUN_004d60d0(uVar1);
  lVar6 = FUN_004d60c0(uVar1);
  lVar7 = FUN_004d6010(uVar1);
  lVar8 = FUN_004d60f0(uVar1);
  lVar9 = FUN_004d60e0(uVar1);
  if (((lVar4 == 0) || (lVar5 == 0)) || (lVar10 = FUN_00547ef0(), lVar10 == 0)) {
    return 0;
  }
  iVar2 = FUN_00548430(lVar10,"p",lVar4);
  if (((iVar2 != 0) && (iVar2 = FUN_00548430(lVar10,"g",lVar5), iVar2 != 0)) &&
     ((lVar6 == 0 || (iVar2 = FUN_00548430(lVar10,"q",lVar6), iVar2 != 0)))) {
    uVar11 = 4;
    if (0 < lVar7) {
      iVar2 = FUN_00548060(lVar10,"priv_len",lVar7);
      if (iVar2 == 0) goto LAB_004d26c1;
      uVar11 = 0x84;
    }
    if (lVar8 != 0) {
      iVar2 = FUN_00548430(lVar10,&DAT_007ce5e4,lVar8);
      if (iVar2 == 0) goto LAB_004d26c1;
      uVar11 = uVar11 | 2;
    }
    if (lVar9 != 0) {
      iVar2 = FUN_00548430(lVar10,&DAT_007ce5df,lVar9);
      if (iVar2 == 0) goto LAB_004d26c1;
      uVar11 = uVar11 | 1;
    }
    lVar4 = FUN_00548720(lVar10);
    if (lVar4 != 0) {
      uVar3 = (*param_3)(param_2,uVar11,lVar4);
      FUN_0041ec30(lVar4);
      goto LAB_004d26c4;
    }
  }
LAB_004d26c1:
  uVar3 = 0;
LAB_004d26c4:
  FUN_00547f60(lVar10);
  return uVar3;
}

