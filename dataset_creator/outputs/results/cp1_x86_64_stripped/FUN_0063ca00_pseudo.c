
undefined8 * FUN_0063ca00(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined1 local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = thunk_FUN_007564d0(param_2);
  uVar2 = FUN_0063afd0(0,0,&local_31);
  *param_1 = uVar2;
                    /* try { // try from 0063ca53 to 0063ca70 has its CatchHandler @ 0063ca95 */
  FUN_0063c070(param_1,*(long *)(*param_3 + -0x18) + lVar1);
  FUN_0063c2e0(param_1,param_2,lVar1);
  FUN_0063c140(param_1,param_3);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

