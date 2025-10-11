
void FUN_006b5810(undefined8 *param_1,long param_2,long param_3,undefined4 *param_4,long param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (param_5 - param_3) + param_1[1];
  lVar5 = param_1[1] - (param_2 + param_3);
  if (param_1 + 2 == (undefined8 *)*param_1) {
    uVar3 = 3;
  }
  else {
    uVar3 = param_1[2];
  }
  puVar2 = (undefined4 *)FUN_006b5350(param_1,&local_48,uVar3);
  if (param_2 != 0) {
    if (param_2 == 1) {
      *puVar2 = *(undefined4 *)*param_1;
    }
    else {
      FUN_00771ea0(puVar2,(undefined4 *)*param_1,param_2,0x3fffffffffffffff);
    }
  }
  if ((param_4 != (undefined4 *)0x0) && (param_5 != 0)) {
    if (param_5 == 1) {
      puVar2[param_2] = *param_4;
    }
    else {
      FUN_00771ea0(puVar2 + param_2,param_4,param_5,0x3fffffffffffffff);
    }
  }
  puVar4 = (undefined8 *)*param_1;
  if (lVar5 != 0) {
    puVar1 = (undefined4 *)((long)puVar4 + (param_2 + param_3) * 4);
    if (lVar5 == 1) {
      puVar2[param_2 + param_5] = *puVar1;
    }
    else {
      FUN_00771ea0(puVar2 + param_2 + param_5,puVar1,lVar5,0x3fffffffffffffff);
      puVar4 = (undefined8 *)*param_1;
    }
  }
  if (param_1 + 2 != puVar4) {
    thunk_FUN_007104f0();
  }
  *param_1 = puVar2;
  param_1[2] = local_48;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

