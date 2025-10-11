
long * FUN_006c9f70(long *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  ulong uVar2;
  long *plVar3;
  long in_FS_OFFSET;
  ulong local_38;
  long local_30;
  
  plVar3 = param_1 + 2;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined1 *)FUN_00712930(param_3);
  *param_1 = (long)plVar3;
  if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403890("basic_string::_M_construct null not valid");
  }
  uVar2 = thunk_FUN_007129d0(puVar1);
  local_38 = uVar2;
  if (uVar2 < 0x10) {
    if (uVar2 == 1) {
      *(undefined1 *)(param_1 + 2) = *puVar1;
      goto LAB_006c9fd2;
    }
    if (uVar2 == 0) goto LAB_006c9fd2;
  }
  else {
    plVar3 = (long *)FUN_0069de90(param_1,&local_38,0);
    *param_1 = (long)plVar3;
    param_1[2] = local_38;
  }
  thunk_FUN_00713a50(plVar3,puVar1,uVar2);
  plVar3 = (long *)*param_1;
LAB_006c9fd2:
  param_1[1] = local_38;
  *(undefined1 *)((long)plVar3 + local_38) = 0;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return param_1;
}

