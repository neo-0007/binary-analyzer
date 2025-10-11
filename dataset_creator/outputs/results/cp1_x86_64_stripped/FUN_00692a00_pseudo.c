
void FUN_00692a00(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  ulong local_28;
  long local_20;
  
  puVar3 = param_1 + 2;
  uVar1 = param_2[1];
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *param_1 = puVar3;
  puVar2 = (undefined1 *)*param_2;
  if ((puVar2 + uVar1 != (undefined1 *)0x0) && (puVar2 == (undefined1 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00403890("basic_string::_M_construct null not valid");
  }
  local_28 = uVar1;
  if (uVar1 < 0x10) {
    if (uVar1 == 1) {
      *(undefined1 *)(param_1 + 2) = *puVar2;
      goto LAB_00692a51;
    }
    if (uVar1 == 0) goto LAB_00692a51;
  }
  else {
    puVar3 = (undefined8 *)FUN_0069de90(param_1,&local_28,0);
    *param_1 = puVar3;
    param_1[2] = local_28;
  }
  thunk_FUN_00713a50(puVar3,puVar2,uVar1);
  puVar3 = (undefined8 *)*param_1;
LAB_00692a51:
  param_1[1] = local_28;
  *(undefined1 *)((long)puVar3 + local_28) = 0;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return;
}

