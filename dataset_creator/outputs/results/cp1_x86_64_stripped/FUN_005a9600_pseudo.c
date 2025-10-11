
void FUN_005a9600(undefined8 param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined8 local_88 [15];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_88[0] = param_1;
  if (DAT_00942788 != 0) {
    iVar1 = FUN_00435f40(DAT_00942788,local_88);
    if (-1 < iVar1) {
      FUN_004364a0(DAT_00942788,iVar1);
      goto LAB_005a9658;
    }
  }
  FUN_00423d90(local_88,&PTR_s_default_009127a0,5,0x70,FUN_005a8ac0);
LAB_005a9658:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

