
undefined4 FUN_00455520(undefined8 param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined4 local_18 [2];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_4 == (undefined8 *)0x0) || ((code *)*param_4 == (code *)0x0)) ||
     (iVar1 = (*(code *)*param_4)(param_1,(long)param_2,local_18,0,param_4[1]), iVar1 == 0)) {
    local_18[0] = 0xffffffff;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return local_18[0];
}

