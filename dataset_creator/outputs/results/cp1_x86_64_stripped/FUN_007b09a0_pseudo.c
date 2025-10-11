
void FUN_007b09a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 code *param_5)

{
  int iVar1;
  undefined4 uVar2;
  long *in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  local_40 = in_FS_OFFSET[5];
  do {
    iVar1 = FUN_007b0770(param_1,param_3,param_4,&local_48);
    if (iVar1 != 0) break;
    uVar2 = (*param_5)(param_3,param_2,param_3,param_4,*in_FS_OFFSET + -0x58);
    iVar1 = FUN_007b0940(param_1,local_48,uVar2);
  } while (iVar1 == 0x16);
  if (local_40 == in_FS_OFFSET[5]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

