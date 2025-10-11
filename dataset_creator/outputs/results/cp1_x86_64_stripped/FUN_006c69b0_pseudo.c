
void FUN_006c69b0(undefined8 *param_1,undefined1 *param_2,long param_3)

{
  undefined1 *puVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 != 0) && (param_2 == (undefined1 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00403890("basic_string::_M_construct null not valid");
  }
  uVar2 = param_3 - (long)param_2;
  local_28 = uVar2;
  if (uVar2 < 0x10) {
    puVar1 = (undefined1 *)*param_1;
    if (uVar2 == 1) {
      *puVar1 = *param_2;
      puVar1 = (undefined1 *)*param_1;
      goto LAB_006c6a02;
    }
    if (uVar2 == 0) goto LAB_006c6a02;
  }
  else {
    puVar1 = (undefined1 *)FUN_0069de90(param_1,&local_28,0);
    *param_1 = puVar1;
    param_1[2] = local_28;
  }
  thunk_FUN_00713a50(puVar1,param_2,uVar2);
  puVar1 = (undefined1 *)*param_1;
LAB_006c6a02:
  param_1[1] = local_28;
  puVar1[local_28] = 0;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return;
}

