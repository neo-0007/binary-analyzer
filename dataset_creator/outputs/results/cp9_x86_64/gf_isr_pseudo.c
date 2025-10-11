
void gf_isr(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 local_148 [64];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [64];
  undefined1 local_88 [72];
  long local_40;
  
  iVar1 = 4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  gf_sqr(&local_108);
  gf_mul(local_c8,param_2,&local_108);
  gf_sqr(&local_108,local_c8);
  gf_mul(local_c8,param_2,&local_108);
  gf_sqr(&local_108,local_c8);
  gf_sqr(local_88,&local_108);
  gf_sqr(&local_108,local_88);
  gf_mul(local_148,local_c8,&local_108);
  gf_sqr(&local_108,local_148);
  gf_sqr(local_88,&local_108);
  gf_sqr(&local_108,local_88);
  gf_mul(local_148,local_c8,&local_108);
  gf_sqr(local_c8,local_148);
  do {
    gf_sqr(local_88,local_c8);
    gf_sqr(local_c8,local_88);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 8;
  gf_mul(&local_108,local_148,local_c8);
  gf_sqr(local_148,&local_108);
  gf_mul(local_c8,param_2,local_148);
  gf_sqr(local_88,local_c8);
  gf_sqr(local_148,local_88);
  do {
    gf_sqr(local_88,local_148);
    gf_sqr(local_148,local_88);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 0x12;
  gf_mul(local_c8,&local_108,local_148);
  gf_sqr(local_148,local_c8);
  do {
    gf_sqr(local_88,local_148);
    gf_sqr(local_148,local_88);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 0x12;
  gf_mul(&local_108,local_c8,local_148);
  gf_sqr(local_148,&local_108);
  do {
    gf_sqr(local_88,local_148);
    gf_sqr(local_148,local_88);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 0x37;
  gf_mul(&local_108,local_c8,local_148);
  gf_sqr(local_148,&local_108);
  do {
    gf_sqr(local_88,local_148);
    gf_sqr(local_148,local_88);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 0x6f;
  gf_mul(local_c8,&local_108,local_148);
  gf_sqr(local_148,local_c8);
  gf_mul(&local_108,param_2,local_148);
  gf_sqr(local_148,&local_108);
  do {
    gf_sqr(local_88,local_148);
    gf_sqr(local_148,local_88);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  gf_mul(&local_108,local_c8,local_148);
  gf_sqr(local_c8,&local_108);
  gf_mul(local_148,local_c8,param_2);
  *param_1 = local_108;
  param_1[1] = uStack_100;
  param_1[2] = local_f8;
  param_1[3] = uStack_f0;
  param_1[4] = local_e8;
  param_1[5] = uStack_e0;
  param_1[6] = local_d8;
  param_1[7] = uStack_d0;
  gf_eq(local_148,ONE);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

