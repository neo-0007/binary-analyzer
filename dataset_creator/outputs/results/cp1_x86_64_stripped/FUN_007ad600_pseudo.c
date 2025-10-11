
void FUN_007ad600(undefined8 *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long in_FS_OFFSET;
  int local_48 [2];
  long local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = param_3;
  if (param_3 < 0) {
    iVar2 = FUN_007ac010();
    if (-1 < iVar2) goto LAB_007ad632;
  }
  else {
LAB_007ad632:
    local_48[0] = 0;
    local_40 = 0;
    iVar1 = FUN_0076ebb0(iVar2,0x8912,local_48);
    if (iVar1 < 0) {
LAB_007ad664:
      lVar5 = 0xa0;
      local_48[0] = 0xa0;
    }
    else {
      lVar5 = (long)local_48[0];
      if (local_48[0] == 0) goto LAB_007ad664;
    }
    lVar5 = FUN_00710840(local_40,lVar5);
    if (lVar5 != 0) {
      local_40 = lVar5;
      iVar1 = FUN_0076ebb0(iVar2,0x8912,local_48);
      if (-1 < iVar1) {
        uVar4 = (ulong)local_48[0];
        if (param_3 != iVar2) {
          FUN_0076dc30(iVar2);
        }
        iVar2 = (int)(uVar4 / 0x28);
        *param_2 = iVar2;
        uVar3 = FUN_00710840(local_40,(long)iVar2 * 0x28);
        goto LAB_007ad6e0;
      }
    }
    FUN_007104f0(local_40);
    if (param_3 != iVar2) {
      FUN_0076dc30(iVar2);
    }
  }
  *param_2 = 0;
  uVar3 = 0;
LAB_007ad6e0:
  *param_1 = uVar3;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

