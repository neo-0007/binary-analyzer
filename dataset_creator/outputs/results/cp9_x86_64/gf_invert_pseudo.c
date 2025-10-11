
void gf_invert(undefined8 *param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined1 auStack_b8 [64];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  gf_sqr(auStack_b8);
  gf_isr(&local_78,auStack_b8);
  gf_sqr(auStack_b8,&local_78);
  gf_mul(&local_78,auStack_b8,param_2);
  *param_1 = local_78;
  param_1[1] = uStack_70;
  param_1[2] = local_68;
  param_1[3] = uStack_60;
  param_1[4] = local_58;
  param_1[5] = uStack_50;
  param_1[6] = local_48;
  param_1[7] = uStack_40;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

