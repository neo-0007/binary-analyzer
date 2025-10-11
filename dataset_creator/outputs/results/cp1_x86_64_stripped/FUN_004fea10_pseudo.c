
void FUN_004fea10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
  long in_FS_OFFSET;
  undefined1 auStack_1c8 [64];
  undefined1 local_188 [64];
  undefined1 local_148 [64];
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_108 = *param_4;
  local_100 = 0;
  local_f0 = 0;
  local_e0 = 0;
  local_d0 = 0;
  local_c0 = 0;
  local_f8 = param_4[1];
  local_b0 = 0;
  local_e8 = param_4[2];
  local_a0 = 0;
  local_d8 = param_4[3];
  local_c8 = *param_5;
  local_b8 = param_5[1];
  local_a8 = param_5[2];
  local_98 = param_5[3];
  local_90 = 0;
  local_88 = *param_6;
  local_80 = 0;
  local_78 = param_6[1];
  local_70 = 0;
  local_68 = param_6[2];
  local_60 = 0;
  local_58 = param_6[3];
  local_50 = 0;
  FUN_004fdbd0(auStack_1c8,local_188,local_148,&local_108,&local_c8,&local_88);
  FUN_004fcc90(param_1,auStack_1c8);
  FUN_004fcc90(param_2,local_188);
  FUN_004fcc90(param_3,local_148);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

