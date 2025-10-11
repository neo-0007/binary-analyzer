
int FUN_0045ae10(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                code *param_5,undefined8 param_6,long param_7)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  int local_3c;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_3c = -1;
  local_38 = 0;
  if (*(int *)(param_7 + 0xc) == 0) {
    if ((param_5 == (code *)0x0) ||
       (iVar1 = (*param_5)(param_2,param_3,*(undefined4 *)(param_7 + 8),&local_38,&local_3c),
       iVar1 != 0)) {
      lVar2 = FUN_00456c60(param_2,param_3,local_38,local_3c,param_6);
      if (lVar2 == 0) {
        if (local_3c == 6) {
          FUN_004a06b0(local_38);
          iVar1 = 0;
        }
        else {
          if (local_3c == 0x10) {
            FUN_004a2270();
          }
          iVar1 = 0;
        }
      }
      else {
        iVar1 = FUN_00557bc0(param_1,lVar2);
      }
      FUN_004a2c30(lVar2);
    }
  }
  else {
    iVar1 = FUN_00456e70(param_1,param_2,param_3);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return iVar1;
}

