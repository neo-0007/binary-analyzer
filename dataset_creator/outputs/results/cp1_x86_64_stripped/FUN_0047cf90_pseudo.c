
undefined8 FUN_0047cf90(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined4 local_7c;
  undefined1 local_78 [72];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_7c = 0;
  iVar1 = FUN_0043b840();
  if (((param_1 != 0) && (iVar1 != 0)) && (*(long *)(param_1 + 0x168) != 0)) {
    iVar1 = FUN_00406090(*(long *)(param_1 + 0x168),local_78,&local_7c);
    if (iVar1 != 0) {
      *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 1;
      uVar2 = FUN_0047cf00(param_1,param_2,param_3,local_78,local_7c);
      goto LAB_0047cff2;
    }
  }
  uVar2 = 0;
LAB_0047cff2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

