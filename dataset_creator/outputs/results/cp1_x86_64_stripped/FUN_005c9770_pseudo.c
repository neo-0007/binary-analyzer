
long FUN_005c9770(long param_1,char *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  char *local_48;
  long local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 0) {
LAB_005c9838:
    lVar2 = 0;
  }
  else {
    if (param_1 == 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        lVar2 = thunk_FUN_006e8f20(param_3);
        return lVar2;
      }
      goto LAB_005c9872;
    }
    lVar2 = *(long *)(param_1 + 0x10);
    if (lVar2 == 0) goto LAB_005c9838;
    if (param_2 == (char *)0x0) {
LAB_005c9817:
      local_48 = "default";
      local_40 = param_3;
      lVar2 = FUN_00545b60(lVar2,&local_48);
      if (lVar2 == 0) goto LAB_005c9838;
    }
    else {
      local_48 = param_2;
      local_40 = param_3;
      lVar2 = FUN_00545b60(lVar2,&local_48);
      if (lVar2 == 0) {
        iVar1 = thunk_FUN_00712780(param_2,&DAT_008188e2);
        if ((iVar1 != 0) || (lVar2 = thunk_FUN_006e8f20(param_3), lVar2 == 0)) {
          lVar2 = *(long *)(param_1 + 0x10);
          goto LAB_005c9817;
        }
        goto LAB_005c97db;
      }
    }
    lVar2 = *(long *)(lVar2 + 0x10);
  }
LAB_005c97db:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
LAB_005c9872:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

