
void FUN_00417f90(undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined4 param_4,
                 long param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined1 local_68 [8];
  long local_60;
  undefined4 local_54;
  long local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = (**(code **)(param_5 + 8))(0,param_3,param_6);
  if (lVar1 == 0) {
    uVar2 = 0;
    if (param_3 != (undefined8 *)0x0) {
      uVar2 = *param_3;
    }
    local_60 = 0;
    local_54 = param_4;
    local_50 = param_5;
    local_48 = param_6;
    FUN_00417c60(param_1,param_2,uVar2,FUN_00417f00,FUN_00417dc0,FUN_00417e80,local_68);
    if ((local_60 == 0) ||
       (lVar1 = (**(code **)(param_5 + 8))(local_60,param_3,param_6), lVar1 == 0)) {
      (**(code **)(param_5 + 8))(0,param_3,param_6);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return;
}

