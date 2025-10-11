
undefined8 FUN_0049fab0(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (int *)0x0) {
    uVar2 = 0;
  }
  else if (((param_1[1] & 0xfffffeffU) != 10) ||
          ((uVar2 = 0xffffffff, *param_1 < 9 &&
           (iVar1 = FUN_0049fa80(&local_18,param_1), uVar2 = local_18, iVar1 == 0)))) {
    uVar2 = 0xffffffffffffffff;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar2;
}

