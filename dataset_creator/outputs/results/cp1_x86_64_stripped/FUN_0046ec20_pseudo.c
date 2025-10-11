
bool FUN_0046ec20(undefined8 param_1,uint param_2,int param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
  undefined4 local_3c;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_0043b840();
  if (iVar1 == 0) {
LAB_0046ed08:
    bVar2 = false;
  }
  else {
    if ((param_2 & 7) != 0) {
      if ((param_2 & 4) != 0) {
        if (param_3 == 1) {
          iVar1 = FUN_004d3b20();
          if (iVar1 != 0) {
            if ((param_2 & 2) == 0) goto joined_r0x0046ed55;
            local_38 = 0;
            local_3c = 0;
            FUN_004d6040(param_1,&local_38,0);
            if (local_38 != 0) goto LAB_0046eddc;
          }
        }
        else {
          iVar1 = FUN_004d3f20(param_1);
          if (iVar1 != 0) {
            if ((param_2 & 2) == 0) goto joined_r0x0046ed55;
            local_38 = 0;
            local_3c = 0;
            FUN_004d6040(param_1,&local_38,0);
            if (local_38 != 0) goto LAB_0046ecb0;
          }
        }
        goto LAB_0046ed08;
      }
      if ((param_2 & 2) != 0) {
        local_38 = 0;
        local_3c = 0;
        FUN_004d6040(param_1,&local_38,0);
        if (local_38 == 0) goto LAB_0046ed08;
        if (param_3 == 1) {
LAB_0046eddc:
          iVar1 = FUN_004d4b30(param_1);
          if (iVar1 == 0) goto LAB_0046ecb0;
          iVar1 = FUN_004d43d0(param_1,local_38,&local_3c);
        }
        else {
LAB_0046ecb0:
          iVar1 = FUN_004d4200(param_1,local_38,&local_3c);
        }
        if (iVar1 == 0) goto LAB_0046ed08;
      }
joined_r0x0046ed55:
      if ((param_2 & 1) != 0) {
        local_3c = 0;
        local_38 = 0;
        FUN_004d6040(param_1,0,&local_38);
        bVar2 = false;
        if (local_38 == 0) goto LAB_0046ed0a;
        iVar1 = FUN_004d43e0(param_1,local_38,&local_3c);
        if (iVar1 == 0) goto LAB_0046ed08;
      }
      if ((param_2 & 3) == 3) {
        iVar1 = FUN_004d44b0(param_1);
        bVar2 = iVar1 != 0;
        goto LAB_0046ed0a;
      }
    }
    bVar2 = true;
  }
LAB_0046ed0a:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return bVar2;
}

