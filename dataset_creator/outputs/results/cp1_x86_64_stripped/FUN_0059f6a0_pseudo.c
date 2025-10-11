
undefined8 FUN_0059f6a0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long in_FS_OFFSET;
  int local_2a8 [2];
  undefined1 *local_2a0;
  undefined1 local_298 [24];
  undefined8 local_280;
  undefined1 local_198 [72];
  undefined8 local_150;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = (undefined1 *)0x0;
  local_2a8[0] = param_2;
  if (param_2 == 1) {
    puVar2 = local_198;
    local_2a0 = puVar2;
    local_150 = param_3;
  }
  else if (param_2 == 2) {
    puVar2 = local_298;
    local_2a0 = puVar2;
    local_280 = param_3;
  }
  else {
    uVar1 = 0xffffffff;
    if (param_2 == 0) goto LAB_0059f6de;
  }
  uVar1 = FUN_00435f60(param_1,local_2a8,param_4,puVar2);
LAB_0059f6de:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

