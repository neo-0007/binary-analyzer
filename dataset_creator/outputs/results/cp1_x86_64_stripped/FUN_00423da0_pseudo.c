
int FUN_00423da0(long param_1)

{
  long lVar1;
  uint *puVar2;
  int iVar3;
  long in_FS_OFFSET;
  long local_30;
  undefined4 local_28 [2];
  long local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = param_1;
  if (param_1 != 0) {
    iVar3 = *(int *)(param_1 + 0x10);
    if (iVar3 != 0) goto LAB_00423dd5;
    if (*(int *)(param_1 + 0x14) != 0) {
      FUN_00419fe0(0x40,0,0);
      if (DAT_0093fd30 != 0) {
        local_28[0] = 0;
        local_20 = local_30;
        lVar1 = FUN_00545b60(DAT_0093fd30,local_28);
        if (lVar1 != 0) {
          iVar3 = *(int *)(*(long *)(lVar1 + 8) + 0x10);
          goto LAB_00423dd5;
        }
      }
      puVar2 = (uint *)FUN_00423d90(&local_30,&DAT_007d5660,0x456,4,FUN_00423630);
      if (puVar2 != (uint *)0x0) {
        iVar3 = *(int *)(&DAT_008de2f0 + (ulong)*puVar2 * 0x28);
        goto LAB_00423dd5;
      }
    }
  }
  iVar3 = 0;
LAB_00423dd5:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

