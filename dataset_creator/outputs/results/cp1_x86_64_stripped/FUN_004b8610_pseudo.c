
int FUN_004b8610(long *param_1,byte *param_2,int param_3,int param_4)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long in_FS_OFFSET;
  long local_48;
  long lStack_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = FUN_004b7bb0();
  iVar4 = iVar3 + 7;
  if (iVar3 + 7 < 0) {
    iVar4 = iVar3 + 0xe;
  }
  iVar4 = iVar4 >> 3;
  if ((param_3 != -1) && (bVar1 = param_3 < iVar4, iVar4 = param_3, bVar1)) {
    local_48 = *param_1;
    lStack_40 = param_1[1];
    local_38 = param_1[2];
    FUN_004b8490(&local_48);
    iVar5 = FUN_004b7bb0(&local_48);
    iVar3 = iVar5 + 7;
    if (iVar5 + 7 < 0) {
      iVar3 = iVar5 + 0xe;
    }
    if (param_3 < iVar3 >> 3) {
      iVar4 = -1;
      goto LAB_004b8701;
    }
  }
  lVar9 = (long)(*(int *)((long)param_1 + 0xc) * 8);
  if (lVar9 == 0) {
    if (iVar4 != 0) {
      thunk_FUN_00713720(param_2,0,(long)iVar4);
    }
  }
  else {
    lVar10 = (long)iVar4;
    if (param_4 == 0) {
      param_2 = param_2 + lVar10;
    }
    lVar6 = (long)((int)param_1[1] << 3);
    if (lVar10 == 0) {
      iVar4 = 0;
    }
    else {
      uVar7 = 0;
      lVar8 = -lVar6;
      do {
        bVar2 = (byte)(*(ulong *)(*param_1 + (uVar7 & 0xfffffffffffffff8)) >>
                      (sbyte)(((uint)uVar7 & 7) << 3)) & (byte)(lVar8 >> 0x3f);
        if (param_4 == 0) {
          param_2[-1] = bVar2;
          param_2 = param_2 + -1;
        }
        else {
          *param_2 = bVar2;
          param_2 = param_2 + 1;
        }
        lVar8 = lVar8 + 1;
        uVar7 = uVar7 - ((long)(uVar7 - (lVar9 + -1)) >> 0x3f);
      } while (lVar10 - lVar6 != lVar8);
    }
  }
LAB_004b8701:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return iVar4;
}

