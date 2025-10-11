
undefined8 FUN_004de650(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined1 auStack_1b8 [64];
  undefined1 local_178 [256];
  byte local_78 [55];
  byte local_41;
  undefined1 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_004de580(param_1,local_78,0x39,param_3,param_4);
  if ((int)uVar1 != 0) {
    local_78[0] = local_78[0] & 0xfc;
    local_41 = local_41 | 0x80;
    local_40 = 0;
    FUN_004dfd50(auStack_1b8,local_78,0x39);
    FUN_004dff60(auStack_1b8,auStack_1b8);
    FUN_004dff60(auStack_1b8,auStack_1b8);
    FUN_004dc950(local_178,PTR_DAT_0093bf28,auStack_1b8);
    FUN_004dd930(param_2,local_178);
    FUN_004dfd40(auStack_1b8);
    FUN_004dd920(local_178);
    FUN_004227b0(local_78,0x39);
    uVar1 = 0xffffffff;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

