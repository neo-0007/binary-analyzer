
void OSSL_ENCODER_CTX_set_cipher(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98 [4];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = local_98;
  for (lVar1 = 0xf; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  OSSL_PARAM_construct_utf8_string(&local_c8,"cipher",param_2);
  local_78 = local_a8;
  local_98[0] = local_c8;
  local_98[1] = uStack_c0;
  local_98[2] = local_b8;
  local_98[3] = uStack_b0;
  OSSL_PARAM_construct_utf8_string(&local_c8,"properties",param_3,0);
  local_70 = local_c8;
  uStack_68 = uStack_c0;
  local_50 = local_a8;
  local_60 = local_b8;
  uStack_58 = uStack_b0;
  OSSL_ENCODER_CTX_set_params(param_1,local_98);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

