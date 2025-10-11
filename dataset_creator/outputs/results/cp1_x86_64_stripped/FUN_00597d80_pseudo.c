
undefined4 FUN_00597d80(undefined8 param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  long in_FS_OFFSET;
  undefined1 auStack_2028 [8200];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = 0x2000;
  if (param_2 < 0x2001) {
    iVar1 = param_2;
  }
  uVar2 = FUN_00597cc0(param_1,auStack_2028,iVar1,param_3,param_4);
  FUN_004227b0(auStack_2028,0x2000);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

