
void FUN_0069e300(long *param_1,long param_2,long param_3,undefined1 *param_4,long param_5)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = param_1[1] - (param_2 + param_3);
  local_48 = (param_5 - param_3) + param_1[1];
  if (param_1 + 2 == (long *)*param_1) {
    lVar2 = 0xf;
  }
  else {
    lVar2 = param_1[2];
  }
  puVar1 = (undefined1 *)FUN_0069de90(param_1,&local_48,lVar2);
  if (param_2 != 0) {
    if (param_2 == 1) {
      *puVar1 = *(undefined1 *)*param_1;
    }
    else {
      thunk_FUN_00713a50(puVar1,(undefined1 *)*param_1,param_2);
    }
  }
  if ((param_4 != (undefined1 *)0x0) && (param_5 != 0)) {
    if (param_5 == 1) {
      puVar1[param_2] = *param_4;
    }
    else {
      thunk_FUN_00713a50(puVar1 + param_2,param_4,param_5);
    }
  }
  if (lVar4 != 0) {
    puVar3 = (undefined1 *)(param_2 + param_3 + *param_1);
    if (lVar4 == 1) {
      puVar1[param_2 + param_5] = *puVar3;
    }
    else {
      thunk_FUN_00713a50(puVar1 + param_2 + param_5,puVar3,lVar4);
    }
  }
  if (param_1 + 2 != (long *)*param_1) {
    thunk_FUN_007104f0();
  }
  *param_1 = (long)puVar1;
  param_1[2] = local_48;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

