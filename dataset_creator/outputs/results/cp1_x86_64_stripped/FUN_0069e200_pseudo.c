
void FUN_0069e200(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  ulong local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != param_2) {
    puVar2 = (undefined8 *)*param_1;
    uVar1 = param_2[1];
    if (param_1 + 2 == puVar2) {
      uVar3 = 0xf;
    }
    else {
      uVar3 = param_1[2];
    }
    if (uVar3 < uVar1) {
      local_38 = uVar1;
      puVar2 = (undefined8 *)FUN_0069de90(param_1,&local_38);
      if (param_1 + 2 != (undefined8 *)*param_1) {
        thunk_FUN_007104f0();
      }
      *param_1 = puVar2;
      param_1[2] = local_38;
    }
    if (uVar1 != 0) {
      if (uVar1 == 1) {
        *(undefined1 *)puVar2 = *(undefined1 *)*param_2;
        puVar2 = (undefined8 *)*param_1;
      }
      else {
        thunk_FUN_00713a50(puVar2,(undefined1 *)*param_2,uVar1);
        puVar2 = (undefined8 *)*param_1;
      }
    }
    param_1[1] = uVar1;
    *(undefined1 *)((long)puVar2 + uVar1) = 0;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return;
}

