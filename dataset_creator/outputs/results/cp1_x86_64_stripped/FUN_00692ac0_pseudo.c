
void FUN_00692ac0(undefined8 *param_1,undefined1 *param_2,ulong param_3)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  ulong local_28;
  long local_20;
  
  puVar1 = param_1 + 2;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *param_1 = puVar1;
  if ((param_2 + param_3 != (undefined1 *)0x0) && (param_2 == (undefined1 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00403890("basic_string::_M_construct null not valid");
  }
  local_28 = param_3;
  if (param_3 < 0x10) {
    if (param_3 == 1) {
      *(undefined1 *)(param_1 + 2) = *param_2;
      goto LAB_00692b10;
    }
    if (param_3 == 0) goto LAB_00692b10;
  }
  else {
    puVar1 = (undefined8 *)FUN_0069de90(param_1,&local_28,0);
    *param_1 = puVar1;
    param_1[2] = local_28;
  }
  thunk_FUN_00713a50(puVar1,param_2,param_3);
  puVar1 = (undefined8 *)*param_1;
LAB_00692b10:
  param_1[1] = local_28;
  *(undefined1 *)((long)puVar1 + local_28) = 0;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return;
}

