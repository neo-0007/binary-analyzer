
long FUN_00546240(undefined8 param_1,undefined8 param_2,long *param_3,long param_4)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  char *local_58;
  long local_50;
  undefined1 local_48 [8];
  long local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar1 = (char *)*param_3;
  if (-1 < param_4) {
    local_58 = pcVar1;
    local_50 = param_4;
    if (param_4 != 0) {
      local_50 = param_4 + -1;
      local_58 = pcVar1 + 1;
      if (*pcVar1 == '0') {
        iVar2 = FUN_005460c0(&local_58,local_48);
        if (iVar2 != 0) {
          iVar2 = FUN_005461a0(local_48,param_1);
          if (iVar2 != 0) {
            iVar2 = FUN_005461a0(local_48,param_2);
            if ((iVar2 != 0) && (local_40 == 0)) {
              lVar3 = (long)local_58 - *param_3;
              *param_3 = (long)local_58;
              goto LAB_0054628d;
            }
          }
        }
      }
    }
  }
  lVar3 = 0;
LAB_0054628d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

