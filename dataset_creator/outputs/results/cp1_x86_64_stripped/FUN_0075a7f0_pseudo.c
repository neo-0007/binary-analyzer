
undefined8 FUN_0075a7f0(long *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  ulong local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_006d3fc0("INTERNAL",param_2,&local_38,&local_40,0);
  if (iVar1 == 0) {
    if (local_40 < 2) {
      param_1[1] = local_40;
      *param_1 = local_38;
      if (local_38 == 0) {
        uVar2 = 1;
        goto LAB_0075a891;
      }
      uVar2 = FUN_006d3fc0(param_2,"INTERNAL",&local_38,&local_40,0);
      if ((int)uVar2 == 0) {
        if (1 < local_40) {
          FUN_006d4220();
          goto LAB_0075a8cd;
        }
        param_1[3] = local_40;
        param_1[2] = local_38;
        if (local_38 != 0) goto LAB_0075a891;
      }
      else {
LAB_0075a8cd:
        param_1[2] = 0;
      }
      FUN_006d4220(*param_1,param_1[1]);
      uVar2 = 1;
      goto LAB_0075a891;
    }
    FUN_006d4220();
  }
  *param_1 = 0;
  uVar2 = 1;
LAB_0075a891:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

