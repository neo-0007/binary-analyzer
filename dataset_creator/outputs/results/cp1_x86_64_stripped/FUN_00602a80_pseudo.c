
undefined8 FUN_00602a80(int *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long in_FS_OFFSET;
  int local_1c;
  long local_18;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = FUN_00602920();
  if ((int)uVar4 != 0) {
    lVar2 = ((local_18 + 0x10bd9) * 4) / 0x23ab1;
    lVar5 = lVar2 * 0x23ab1;
    lVar6 = lVar5 + 3;
    lVar5 = lVar5 + 6;
    if (-1 < lVar6) {
      lVar5 = lVar6;
    }
    lVar8 = (local_18 + 0x10bd9) - (lVar5 >> 2);
    lVar5 = ((lVar8 + 1) * 4000) / 0x164b09;
    lVar7 = lVar5 * 0x5b5;
    lVar6 = lVar7 + 3;
    if (-1 < lVar7) {
      lVar6 = lVar7;
    }
    lVar7 = (lVar8 - (lVar6 >> 2)) + 0x1f;
    lVar6 = lVar7 * 0x50;
    uVar4 = 0;
    iVar3 = (int)(lVar6 / 0x6925);
    uVar9 = ((int)lVar2 + -0x31) * 100 + (int)lVar5 + -0x76c + iVar3;
    if (uVar9 < 0x1fa4) {
      param_1[5] = uVar9;
      lVar6 = lVar6 / 0x98f;
      param_1[4] = iVar3 * -0xc + 1 + (int)lVar6;
      param_1[3] = (int)lVar7 - (int)((lVar6 * 0x98f) / 0x50);
      param_1[2] = local_1c / 0xe10;
      param_1[1] = (local_1c / 0x3c) % 0x3c;
      uVar4 = 1;
      *param_1 = local_1c % 0x3c;
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

