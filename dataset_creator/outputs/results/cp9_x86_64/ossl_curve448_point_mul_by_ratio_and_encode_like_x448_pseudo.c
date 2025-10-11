
void ossl_curve448_point_mul_by_ratio_and_encode_like_x448(undefined8 param_1,undefined8 *param_2)

{
  long in_FS_OFFSET;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  local_138 = *param_2;
  uStack_130 = param_2[1];
  local_128 = param_2[2];
  uStack_120 = param_2[3];
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_118 = param_2[4];
  uStack_110 = param_2[5];
  local_108 = param_2[6];
  uStack_100 = param_2[7];
  local_e8 = param_2[10];
  uStack_e0 = param_2[0xb];
  local_d8 = param_2[0xc];
  uStack_d0 = param_2[0xd];
  local_b8 = param_2[0x10];
  uStack_b0 = param_2[0x11];
  local_c8 = param_2[0xe];
  uStack_c0 = param_2[0xf];
  local_a8 = param_2[0x12];
  uStack_a0 = param_2[0x13];
  local_f8 = param_2[8];
  uStack_f0 = param_2[9];
  local_98 = param_2[0x14];
  uStack_90 = param_2[0x15];
  local_88 = param_2[0x16];
  uStack_80 = param_2[0x17];
  local_78 = param_2[0x18];
  uStack_70 = param_2[0x19];
  local_68 = param_2[0x1a];
  uStack_60 = param_2[0x1b];
  local_58 = param_2[0x1c];
  uStack_50 = param_2[0x1d];
  local_48 = param_2[0x1e];
  uStack_40 = param_2[0x1f];
  gf_invert(&local_78,&local_138,0);
  gf_mul(&local_b8,&local_78,&local_f8);
  gf_sqr(&local_f8,&local_b8);
  gf_serialize(param_1,&local_f8,1);
  ossl_curve448_point_destroy(&local_138);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

