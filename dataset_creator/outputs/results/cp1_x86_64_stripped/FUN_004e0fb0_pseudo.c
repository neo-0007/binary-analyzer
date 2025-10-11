
void FUN_004e0fb0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 auStack_f8 [48];
  undefined1 local_c8 [48];
  undefined1 local_98 [48];
  undefined1 local_68 [40];
  long local_40;
  
  iVar1 = 4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_004e0ae0(auStack_f8);
  FUN_004e0ae0(local_c8,auStack_f8);
  FUN_004e0ae0(local_c8,local_c8);
  FUN_004e02c0(local_c8,param_2,local_c8);
  FUN_004e02c0(auStack_f8,auStack_f8,local_c8);
  FUN_004e0ae0(local_98,auStack_f8);
  FUN_004e02c0(local_c8,local_c8,local_98);
  FUN_004e0ae0(local_98,local_c8);
  do {
    FUN_004e0ae0(local_98,local_98);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 9;
  FUN_004e02c0(local_c8,local_98,local_c8);
  FUN_004e0ae0(local_98,local_c8);
  do {
    FUN_004e0ae0(local_98,local_98);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 0x13;
  FUN_004e02c0(local_98,local_98,local_c8);
  FUN_004e0ae0(local_68,local_98);
  do {
    FUN_004e0ae0(local_68,local_68);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 10;
  FUN_004e02c0(local_98,local_68,local_98);
  do {
    FUN_004e0ae0(local_98,local_98);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 0x31;
  FUN_004e02c0(local_c8,local_98,local_c8);
  FUN_004e0ae0(local_98,local_c8);
  do {
    FUN_004e0ae0(local_98,local_98);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 99;
  FUN_004e02c0(local_98,local_98,local_c8);
  FUN_004e0ae0(local_68,local_98);
  do {
    FUN_004e0ae0(local_68,local_68);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 0x31;
  FUN_004e02c0(local_98,local_68,local_98);
  FUN_004e0ae0(local_98,local_98);
  do {
    FUN_004e0ae0(local_98,local_98);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 4;
  FUN_004e02c0(local_c8,local_98,local_c8);
  FUN_004e0ae0(local_c8,local_c8);
  do {
    FUN_004e0ae0(local_c8,local_c8);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_004e02c0(param_1,local_c8,auStack_f8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

