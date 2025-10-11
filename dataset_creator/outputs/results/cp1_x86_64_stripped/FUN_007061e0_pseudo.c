
void FUN_007061e0(uint *param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  long lVar5;
  int *piVar6;
  long in_FS_OFFSET;
  bool bVar7;
  code *local_58;
  undefined8 local_50;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*param_1 & 0x80) != 0) goto LAB_0070620c;
  *param_1 = *param_1 | 0x80;
  local_50 = 0;
  local_58 = FUN_00705ef0;
  FUN_00709520(&local_58);
  lVar3 = *(long *)(in_FS_OFFSET + 0x10);
  lVar5 = DAT_00946938;
  if (DAT_00946938 != lVar3) {
    LOCK();
    bVar7 = DAT_00946930 == 0;
    if (bVar7) {
      DAT_00946930 = 1;
    }
    UNLOCK();
    lVar5 = lVar3;
    if (!bVar7) {
      FUN_00709590(&DAT_00946930);
    }
  }
  DAT_00946938 = lVar5;
  DAT_00946934 = DAT_00946934 + 1;
  if ((*param_1 & 0x8000) == 0) {
    lVar3 = *(long *)(in_FS_OFFSET + 0x10);
    piVar6 = *(int **)(param_1 + 0x22);
    DAT_00946920 = param_1;
    if (*(long *)(piVar6 + 2) == lVar3) {
      piVar6[1] = piVar6[1] + 1;
      puVar4 = param_1;
      *(undefined **)(param_1 + 0x1a) = PTR_DAT_0093dac0;
      PTR_DAT_0093dac0 = (undefined *)puVar4;
    }
    else {
      LOCK();
      iVar1 = *piVar6;
      if (iVar1 == 0) {
        *piVar6 = 1;
      }
      UNLOCK();
      if (iVar1 != 0) {
        FUN_00709590();
      }
      piVar6 = *(int **)(param_1 + 0x22);
      uVar2 = *param_1;
      piVar6[1] = piVar6[1] + 1;
      *(long *)(piVar6 + 2) = lVar3;
      puVar4 = param_1;
      *(undefined **)(param_1 + 0x1a) = PTR_DAT_0093dac0;
      PTR_DAT_0093dac0 = (undefined *)puVar4;
      if ((uVar2 & 0x8000) != 0) goto LAB_0070634a;
    }
    iVar1 = piVar6[1];
    piVar6[1] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      piVar6[2] = 0;
      piVar6[3] = 0;
      LOCK();
      iVar1 = *piVar6;
      *piVar6 = 0;
      UNLOCK();
      if (1 < iVar1) {
        FUN_00709660();
      }
    }
  }
  else {
    puVar4 = param_1;
    *(undefined **)(param_1 + 0x1a) = PTR_DAT_0093dac0;
    PTR_DAT_0093dac0 = (undefined *)puVar4;
  }
LAB_0070634a:
  DAT_00946920 = (uint *)0x0;
  DAT_00946934 = DAT_00946934 + -1;
  if (DAT_00946934 == 0) {
    DAT_00946938 = 0;
    LOCK();
    UNLOCK();
    bVar7 = 1 < DAT_00946930;
    DAT_00946930 = DAT_00946934;
    if (bVar7) {
      FUN_00709660(&DAT_00946930);
    }
  }
  FUN_00709560(&local_58);
LAB_0070620c:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return;
}

