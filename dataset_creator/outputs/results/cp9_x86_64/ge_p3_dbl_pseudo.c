
void ge_p3_dbl(undefined8 param_1,undefined8 *param_2)

{
  long in_FS_OFFSET;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  long local_10;
  
  local_88 = *param_2;
  uStack_80 = param_2[1];
  local_78 = param_2[2];
  uStack_70 = param_2[3];
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = param_2[4];
  local_60 = param_2[5];
  uStack_58 = param_2[6];
  local_50 = param_2[7];
  uStack_48 = param_2[8];
  local_38 = param_2[10];
  uStack_30 = param_2[0xb];
  local_40 = param_2[9];
  local_28 = param_2[0xc];
  uStack_20 = param_2[0xd];
  local_18 = param_2[0xe];
  ge_p2_dbl(param_1,&local_88);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

