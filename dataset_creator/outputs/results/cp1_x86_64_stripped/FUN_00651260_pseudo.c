
void FUN_00651260(long *param_1,long *param_2)

{
  undefined1 *puVar1;
  long *plVar2;
  long in_FS_OFFSET;
  ulong local_50;
  undefined1 *local_48;
  ulong local_40;
  undefined1 local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*param_1 + 0x18))(&local_48,param_1);
  if ((code *)param_2[4] != (code *)0x0) {
                    /* try { // try from 0065129c to 00651371 has its CatchHandler @ 00651377 */
    (*(code *)param_2[4])(param_2);
  }
  puVar1 = local_48;
  plVar2 = param_2 + 2;
  *param_2 = (long)plVar2;
  if ((local_48 + local_40 != (undefined1 *)0x0) && (local_48 == (undefined1 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00403890("basic_string::_M_construct null not valid");
  }
  local_50 = local_40;
  if (local_40 < 0x10) {
    if (local_40 == 1) {
      *(undefined1 *)(param_2 + 2) = *local_48;
      goto LAB_006512d8;
    }
    if (local_40 == 0) goto LAB_006512d8;
  }
  else {
    plVar2 = (long *)FUN_0069de90(param_2,&local_50,0);
    *param_2 = (long)plVar2;
    param_2[2] = local_50;
  }
  thunk_FUN_00713a50(plVar2,puVar1,local_40);
  plVar2 = (long *)*param_2;
LAB_006512d8:
  param_2[1] = local_50;
  *(undefined1 *)((long)plVar2 + local_50) = 0;
  param_2[4] = (long)FUN_0064f190;
  if (local_48 != local_38) {
    thunk_FUN_007104f0();
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return;
}

