
undefined4 OSSL_DECODER_from_bio(long *param_1,BIO *param_2)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  BIO_METHOD *type;
  BIO *b;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long in_FS_OFFSET;
  char *local_80;
  undefined *local_78;
  char *local_70;
  long *local_68;
  BIO *local_60;
  undefined1 local_58 [16];
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == (BIO *)0x0) {
    ERR_new();
    uVar2 = 0;
    ERR_set_debug("../crypto/encode_decode/decoder_lib.c",0x36,"OSSL_DECODER_from_bio");
    ERR_set_error(0x3c,0xc0102,0);
    goto LAB_005080e5;
  }
  iVar1 = OSSL_DECODER_CTX_get_num_decoders();
  if (iVar1 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/encode_decode/decoder_lib.c",0x3b,"OSSL_DECODER_from_bio");
    ERR_set_error(0x3c,0x66,
                  "No decoders were found. For standard decoders you need at least one of the default or base providers available. Did you forget to load them?"
                 );
    uVar2 = 0;
    goto LAB_005080e5;
  }
  uVar3 = ERR_peek_last_error();
  lVar4 = BIO_ctrl(param_2,0x85,0,(void *)0x0);
  if ((int)lVar4 < 0) {
    type = (BIO_METHOD *)BIO_f_readbuffer();
    b = BIO_new(type);
    if (b == (BIO *)0x0) goto LAB_00508120;
    local_60 = BIO_push(b,param_2);
    local_48 = 0;
    local_58 = (undefined1  [16])0x0;
    local_68 = param_1;
    ossl_pw_enable_passphrase_caching(param_1 + 7);
    uVar2 = decoder_process(0,&local_68);
    if ((local_48 & 2) == 0) goto LAB_00507f59;
    ossl_pw_clear_passphrase_cache(param_1 + 7);
  }
  else {
    local_48 = 0;
    local_58 = (undefined1  [16])0x0;
    local_68 = param_1;
    local_60 = param_2;
    ossl_pw_enable_passphrase_caching(param_1 + 7);
    uVar2 = decoder_process(0,&local_68);
    if ((local_48 & 2) != 0) {
      ossl_pw_clear_passphrase_cache(param_1 + 7);
      goto LAB_005080e5;
    }
    b = (BIO *)0x0;
LAB_00507f59:
    puVar7 = (undefined1 *)*param_1;
    puVar8 = (undefined1 *)param_1[1];
    if (puVar7 == (undefined1 *)0x0) {
      puVar6 = &DAT_008343a2;
      if (puVar8 == (undefined1 *)0x0) {
        local_70 = "";
        puVar7 = &DAT_008343a2;
        puVar8 = &DAT_008343a2;
        local_78 = &DAT_008343a2;
        local_80 = "";
      }
      else {
        local_78 = &DAT_008343a2;
        puVar7 = &DAT_008343a2;
        local_70 = "Input structure: ";
        local_80 = "";
      }
    }
    else if (puVar8 == (undefined1 *)0x0) {
      puVar6 = &DAT_008343a2;
      local_70 = "";
      puVar8 = &DAT_008343a2;
      local_78 = &DAT_008343a2;
      local_80 = "Input type: ";
    }
    else {
      puVar6 = &DAT_007f7194;
      local_70 = "Input structure: ";
      local_78 = &DAT_00813159;
      local_80 = "Input type: ";
    }
    uVar5 = ERR_peek_last_error();
    if (uVar5 == uVar3) {
LAB_00507fb1:
      ERR_new();
      ERR_set_debug("../crypto/encode_decode/decoder_lib.c",0x65,"OSSL_DECODER_from_bio");
      ERR_set_error(0x3c,0x8010c,"No supported data to decode. %s%s%s%s%s%s",local_78,local_80,
                    puVar7,puVar6,local_70,puVar8);
    }
    else {
      uVar3 = ERR_peek_error();
      if (uVar3 == 0) goto LAB_00507fb1;
    }
    ossl_pw_clear_passphrase_cache(param_1 + 7);
    if (b == (BIO *)0x0) {
LAB_00508120:
      uVar2 = 0;
      goto LAB_005080e5;
    }
    uVar2 = 0;
  }
  BIO_pop(b);
  BIO_free(b);
LAB_005080e5:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

