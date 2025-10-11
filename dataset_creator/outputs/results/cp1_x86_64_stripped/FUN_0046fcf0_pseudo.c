
bool FUN_0046fcf0(undefined8 param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
  undefined4 local_3c;
  ulong local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_0043b840();
  if (iVar1 == 0) {
LAB_0046fe50:
    bVar2 = false;
  }
  else {
    if ((param_2 & 7) != 0) {
      if ((param_2 & 4) != 0) {
        local_38 = local_38 & 0xffffffff00000000;
        iVar1 = FUN_004d8230(param_1,param_3,&local_38);
        if (iVar1 == 0) goto LAB_0046fe50;
      }
      if ((param_2 & 2) != 0) {
        local_3c = 0;
        local_38 = 0;
        FUN_004d8d80(param_1,&local_38,0);
        if ((local_38 == 0) || (iVar1 = FUN_004d8290(param_1,local_38,&local_3c), iVar1 == 0))
        goto LAB_0046fe50;
      }
      if ((param_2 & 1) != 0) {
        local_3c = 0;
        local_38 = 0;
        FUN_004d8d80(param_1,0,&local_38);
        bVar2 = false;
        if (local_38 == 0) goto LAB_0046fdb5;
        iVar1 = FUN_004d8310(param_1,local_38,&local_3c);
        if (iVar1 == 0) goto LAB_0046fe50;
      }
      if ((param_2 & 3) == 3) {
        iVar1 = FUN_004d8360(param_1);
        bVar2 = iVar1 != 0;
        goto LAB_0046fdb5;
      }
    }
    bVar2 = true;
  }
LAB_0046fdb5:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return bVar2;
}

