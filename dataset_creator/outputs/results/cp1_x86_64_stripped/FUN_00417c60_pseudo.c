
void FUN_00417c60(undefined8 param_1,undefined4 param_2,long param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_4c = 0;
  local_30 = param_7;
  local_58 = param_1;
  local_50 = param_2;
  local_48 = param_4;
  local_40 = param_5;
  local_38 = param_6;
  if (param_3 == 0) {
    FUN_00421710(param_1,FUN_00417ac0,&local_58);
  }
  else {
    uVar1 = FUN_00420cf0(param_3);
    lVar2 = FUN_004174a0(param_1);
    lVar3 = FUN_004174a0(uVar1);
    if (lVar2 == lVar3) {
      local_58 = uVar1;
      FUN_00417ac0(param_3,&local_58);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

