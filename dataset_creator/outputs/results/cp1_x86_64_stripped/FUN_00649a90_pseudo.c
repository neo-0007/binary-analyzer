
void FUN_00649a90(undefined8 *param_1,char *param_2,long param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  param_1[2] = 0;
  *(uint *)(param_1 + 1) = (uint)(param_3 != 0);
  *param_1 = &PTR_FUN_00935650;
                    /* try { // try from 00649ad8 to 00649adc has its CatchHandler @ 00649b61 */
  FUN_00627c60(param_1,0,0);
  *param_1 = &PTR_FUN_009356f0;
  if ((*param_2 != 'C') || (param_2[1] != '\0')) {
    iVar1 = thunk_FUN_00712780(param_2,"POSIX");
    if (iVar1 != 0) {
                    /* try { // try from 00649b36 to 00649b50 has its CatchHandler @ 00649b58 */
      FUN_006c4500(&local_28,param_2,0);
      FUN_00627c60(param_1,local_28,0);
      FUN_006c4530(&local_28);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

