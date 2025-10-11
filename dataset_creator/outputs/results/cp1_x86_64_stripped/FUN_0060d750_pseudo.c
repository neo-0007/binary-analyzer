
void FUN_0060d750(undefined8 param_1,int *param_2,int param_3)

{
  long in_FS_OFFSET;
  undefined8 local_48 [5];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 == 0) {
    FUN_004ae9e0(param_1,"%*sFull Name:\n",param_3,&DAT_0083e5c2);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      FUN_0060d6c0(param_1,*(undefined8 *)(param_2 + 2),param_3);
      return;
    }
  }
  else {
    local_48[0] = *(undefined8 *)(param_2 + 2);
    FUN_004ae9e0(param_1,"%*sRelative Name:\n%*s",param_3,&DAT_0083e5c2,param_3 + 2);
    FUN_005b7150(param_1,local_48,0,"mIcSt11char_traitsIcESaIcEEE");
    FUN_004ab870(param_1,&DAT_008243ea);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

