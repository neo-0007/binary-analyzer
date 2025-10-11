
int msblob2key_decode(undefined8 *param_1,undefined8 param_2,uint param_3,code *param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  uint num;
  uint uVar2;
  BIO *b;
  undefined1 *data;
  long in_FS_OFFSET;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined4 local_148;
  undefined1 local_144 [4];
  int local_140;
  int local_13c;
  undefined1 *local_138;
  long local_130;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 local_58 [24];
  long local_40;
  
  iVar1 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  b = (BIO *)ossl_bio_new_from_core_bio(*param_1);
  local_140 = -1;
  local_13c = -1;
  local_130 = 0;
  if (b == (BIO *)0x0) goto LAB_00452e38;
  iVar1 = BIO_read(b,local_58,0x10);
  if (iVar1 == 0x10) {
    ERR_set_mark();
    local_138 = local_58;
    iVar1 = ossl_do_blob_header(&local_138,0x10,local_144,&local_148,&local_140,&local_13c);
    ERR_pop_to_mark();
    if (iVar1 < 1) {
LAB_00452f81:
      data = (undefined1 *)0x0;
      goto LAB_00452ccf;
    }
    *(uint *)(param_1 + 2) = param_3;
    if (local_140 == 0) {
      if (*(int *)param_1[1] != 6) goto LAB_00452f81;
    }
    else if (*(int *)param_1[1] != 0x74) goto LAB_00452f81;
    num = ossl_blob_length(local_148,local_140,local_13c);
    if (0x19000 < num) {
      ERR_new();
      data = (undefined1 *)0x0;
      ERR_set_debug("../providers/implementations/encode_decode/decode_msblob2key.c",0x77,
                    "msblob2key_decode");
      ERR_set_error(9,0x80,0);
      goto LAB_00452ccf;
    }
    data = (undefined1 *)
           CRYPTO_malloc(num,"../providers/implementations/encode_decode/decode_msblob2key.c",0x7a);
    if (data != (undefined1 *)0x0) {
      local_138 = data;
      uVar2 = BIO_read(b,data,num);
      if (num == uVar2) {
        if ((param_3 == 0) || ((param_3 & 1) != 0)) {
          if ((local_13c == 0) && (*(long *)(param_1[1] + 0x18) != 0)) {
            local_128 = (undefined1  [16])0x0;
            local_118 = (undefined1  [16])0x0;
            local_108 = (undefined1  [16])0x0;
            iVar1 = ossl_pw_set_ossl_passphrase_cb(local_128,param_6,param_7);
            if (iVar1 == 0) goto LAB_00452e14;
            local_138 = data;
            local_130 = (**(code **)(param_1[1] + 0x18))(&local_138,local_148,local_13c);
            if (param_3 == 0) goto LAB_0045309d;
          }
          else {
LAB_0045309d:
            if (local_130 != 0) goto LAB_00452f47;
            if (param_3 != 0) goto LAB_0045311c;
            if (local_13c == 0) goto LAB_00452ccf;
            if (*(code **)(param_1[1] + 0x20) != (code *)0x0) {
              local_138 = data;
              local_130 = (**(code **)(param_1[1] + 0x20))(&local_138,local_148);
            }
          }
joined_r0x00453089:
          if (local_130 != 0) {
LAB_00452f47:
            if (*(code **)(param_1[1] + 0x28) != (code *)0x0) {
              (**(code **)(param_1[1] + 0x28))(local_130,param_1);
            }
          }
        }
        else {
          if (local_130 != 0) goto LAB_00452f47;
LAB_0045311c:
          if ((param_3 & 2) != 0) {
            if ((local_13c != 0) && (*(code **)(param_1[1] + 0x20) != (code *)0x0)) {
              local_138 = data;
              local_130 = (**(code **)(param_1[1] + 0x20))(&local_138,local_148);
            }
            goto joined_r0x00453089;
          }
        }
      }
      else {
        ERR_new();
        ERR_set_debug("../providers/implementations/encode_decode/decode_msblob2key.c",0x81,
                      "msblob2key_decode");
        ERR_set_error(9,0x7b,0);
      }
      goto LAB_00452ccf;
    }
    ERR_new();
    iVar1 = 0;
    ERR_set_debug("../providers/implementations/encode_decode/decode_msblob2key.c",0x7c,
                  "msblob2key_decode");
    ERR_set_error(9,0xc0100,0);
  }
  else {
    ERR_new();
    data = (undefined1 *)0x0;
    ERR_set_debug("../providers/implementations/encode_decode/decode_msblob2key.c",100,
                  "msblob2key_decode");
    ERR_set_error(9,0x7b,0);
LAB_00452ccf:
    CRYPTO_free(data);
    BIO_free(b);
    if (local_130 == 0) {
      data = (undefined1 *)0x0;
      iVar1 = 1;
      b = (BIO *)0x0;
    }
    else {
      data = (undefined1 *)0x0;
      local_128._0_4_ = 2;
      OSSL_PARAM_construct_int(&local_178,"type",local_128);
      local_d8 = local_158;
      local_f8 = local_178;
      uStack_f0 = uStack_170;
      local_e8 = local_168;
      uStack_e0 = uStack_160;
      OSSL_PARAM_construct_utf8_string(&local_178,"data-type",*(undefined8 *)(param_1[1] + 8),0);
      local_d0 = local_178;
      uStack_c8 = uStack_170;
      local_c0 = local_168;
      uStack_b8 = uStack_160;
      local_b0 = local_158;
      OSSL_PARAM_construct_octet_string(&local_178,"reference",&local_130,8);
      b = (BIO *)0x0;
      local_88 = local_158;
      local_a8 = local_178;
      uStack_a0 = uStack_170;
      local_98 = local_168;
      uStack_90 = uStack_160;
      OSSL_PARAM_construct_end(&local_178);
      local_60 = local_158;
      local_80 = local_178;
      uStack_78 = uStack_170;
      local_70 = local_168;
      uStack_68 = uStack_160;
      iVar1 = (*param_4)(&local_f8,param_5);
    }
  }
LAB_00452e14:
  BIO_free(b);
  CRYPTO_free(data);
  (**(code **)(param_1[1] + 0x30))(local_130);
LAB_00452e38:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar1;
}

