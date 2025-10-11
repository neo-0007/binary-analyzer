
undefined8 FUN_00481340(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined4 local_7c;
  undefined1 local_78 [72];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_7c = 0;
  iVar2 = FUN_0043b840();
  if ((iVar2 != 0) && (param_1 != 0)) {
    *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) | 1;
    if (*(long *)(param_1 + 0x28) != 0) {
      iVar2 = FUN_00406090(*(long *)(param_1 + 0x28),local_78,&local_7c);
      uVar1 = local_7c;
      if (iVar2 != 0) {
        iVar2 = FUN_0043b840();
        if (iVar2 != 0) {
          uVar3 = FUN_00480ff0(param_1,param_2,param_3,local_78,uVar1);
          goto LAB_004813a4;
        }
      }
    }
  }
  uVar3 = 0;
LAB_004813a4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

