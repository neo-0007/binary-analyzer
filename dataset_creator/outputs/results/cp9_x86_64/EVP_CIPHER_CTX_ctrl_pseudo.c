
int EVP_CIPHER_CTX_ctrl(EVP_CIPHER_CTX *ctx,int type,int arg,void *ptr)

{
  EVP_CIPHER *pEVar1;
  int iVar2;
  long lVar3;
  undefined4 in_register_00000014;
  undefined4 in_register_00000034;
  char *pcVar4;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  int local_e4;
  long local_e0;
  undefined8 local_d8 [4];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long local_30;
  
  local_e0 = (long)arg;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  puVar5 = local_d8;
  for (lVar3 = 0x14; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  if ((ctx == (EVP_CIPHER_CTX *)0x0) || (pEVar1 = ctx->cipher, pEVar1 == (EVP_CIPHER *)0x0)) {
    ERR_new();
    ERR_set_debug("../crypto/evp/evp_enc.c",0x43f,"EVP_CIPHER_CTX_ctrl");
    ERR_set_error(6,0x83,0);
    iVar2 = 0;
    goto LAB_0040a8b2;
  }
  if (pEVar1[1].do_cipher == (_func_1090 *)0x0) {
    if ((code *)pEVar1->app_data == (code *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/evp/evp_enc.c",0x4f3,"EVP_CIPHER_CTX_ctrl");
      ERR_set_error(6,0x84,0);
      iVar2 = 0;
      goto LAB_0040a8b2;
    }
    iVar2 = (*(code *)pEVar1->app_data)
                      (ctx,CONCAT44(in_register_00000034,type),CONCAT44(in_register_00000014,arg),
                       ptr);
    goto LAB_0040a8f5;
  }
  switch(type) {
  case 0:
    iVar2 = 1;
    goto LAB_0040a8b2;
  case 1:
    OSSL_PARAM_construct_size_t(&local_118,"keylen",&local_e0);
    break;
  case 2:
    OSSL_PARAM_construct_size_t(&local_118,"keybits",&local_e0);
    goto LAB_0040a9d4;
  case 3:
    OSSL_PARAM_construct_size_t(&local_118,"keybits",&local_e0);
    goto LAB_0040aa24;
  case 4:
    if (-1 < arg) {
      local_e4 = arg;
      OSSL_PARAM_construct_uint(&local_118,"rounds",&local_e4);
      goto LAB_0040aa70;
    }
    goto LAB_0040a92a;
  case 5:
    if (arg < 0) goto LAB_0040a92a;
    local_e4 = arg;
    OSSL_PARAM_construct_uint(&local_118,"rounds",&local_e4);
LAB_0040aa24:
    local_d8[0] = local_118;
    local_d8[1] = uStack_110;
    local_b8 = local_f8;
    local_d8[2] = local_108;
    local_d8[3] = uStack_100;
    goto LAB_0040a96b;
  case 6:
    OSSL_PARAM_construct_octet_string(&local_118,"randkey",ptr,local_e0);
LAB_0040aa70:
    local_d8[0] = local_118;
    local_d8[1] = uStack_110;
    local_b8 = local_f8;
    local_d8[2] = local_108;
    local_d8[3] = uStack_100;
    goto LAB_0040a9f3;
  default:
    goto switchD_0040a877_caseD_7;
  case 9:
    if (arg < 0) goto LAB_0040a92a;
    OSSL_PARAM_construct_size_t(&local_118,"ivlen",&local_e0);
    goto LAB_0040a94c;
  case 0x10:
    OSSL_PARAM_construct_octet_string(&local_118,"tag",ptr,local_e0);
    local_d8[0] = local_118;
    local_d8[1] = uStack_110;
    local_d8[2] = local_108;
    local_d8[3] = uStack_100;
    local_b8 = local_f8;
    goto LAB_0040a9f3;
  case 0x11:
    OSSL_PARAM_construct_octet_string(&local_118,"tag",ptr,local_e0);
    local_d8[0] = local_118;
    local_d8[1] = uStack_110;
    local_b8 = local_f8;
    local_d8[2] = local_108;
    local_d8[3] = uStack_100;
    goto LAB_0040a96b;
  case 0x12:
    OSSL_PARAM_construct_octet_string(&local_118,"tlsivfixed",ptr,local_e0);
    goto LAB_0040a94c;
  case 0x13:
    if (arg < 0) {
      local_e0 = 0;
    }
    OSSL_PARAM_construct_octet_string(&local_118,"tlsivgen",ptr,local_e0);
LAB_0040a9d4:
    local_b8 = local_f8;
    local_d8[0] = local_118;
    local_d8[1] = uStack_110;
    local_d8[2] = local_108;
    local_d8[3] = uStack_100;
LAB_0040a9f3:
    iVar2 = evp_do_ciph_ctx_getparams(ctx->cipher,ctx[1].cipher,local_d8);
    goto LAB_0040a8f5;
  case 0x14:
    if (6 < arg - 2U) goto LAB_0040a92a;
    local_e0 = (long)(0xf - arg);
    OSSL_PARAM_construct_size_t(&local_118,"ivlen",&local_e0);
    break;
  case 0x16:
    OSSL_PARAM_construct_octet_string(&local_118,"tlsaad",ptr,local_e0);
    local_d8[0] = local_118;
    local_d8[1] = uStack_110;
    local_b8 = local_f8;
    local_d8[2] = local_108;
    local_d8[3] = uStack_100;
    iVar2 = evp_do_ciph_ctx_setparams(ctx->cipher,ctx[1].cipher,local_d8);
    if (0 < iVar2) {
      OSSL_PARAM_construct_size_t(&local_118,"tlsaadpad",&local_e0);
      local_d8[0] = local_118;
      local_d8[1] = uStack_110;
      local_b8 = local_f8;
      local_d8[2] = local_108;
      local_d8[3] = uStack_100;
      iVar2 = evp_do_ciph_ctx_getparams(ctx->cipher,ctx[1].cipher,local_d8);
      if (iVar2 < 1) goto LAB_0040a8f5;
      goto LAB_0040acb0;
    }
    goto LAB_0040a8f5;
  case 0x17:
    if (arg < 0) {
      iVar2 = -1;
      goto LAB_0040a8b2;
    }
    pcVar4 = "mackey";
    goto LAB_0040acd8;
  case 0x18:
    if (arg < 0) goto LAB_0040a92a;
    pcVar4 = "tlsivinv";
LAB_0040acd8:
    OSSL_PARAM_construct_octet_string(&local_118,pcVar4,ptr,local_e0);
    break;
  case 0x19:
    if (arg < 0x20) goto LAB_0040a92a;
    OSSL_PARAM_construct_octet_string
              (&local_118,"tls1multi_aad",*(undefined8 *)((long)ptr + 8),
               *(undefined8 *)((long)ptr + 0x10));
    local_b8 = local_f8;
    local_d8[0] = local_118;
    local_d8[1] = uStack_110;
    local_d8[2] = local_108;
    local_d8[3] = uStack_100;
    OSSL_PARAM_construct_uint(&local_118,"tls1multi_interleave",(long)ptr + 0x18);
    local_b0 = local_118;
    uStack_a8 = uStack_110;
    local_90 = local_f8;
    local_a0 = local_108;
    uStack_98 = uStack_100;
    iVar2 = evp_do_ciph_ctx_setparams(ctx->cipher,ctx[1].cipher,local_d8);
    if (iVar2 < 1) goto LAB_0040a8b2;
    OSSL_PARAM_construct_size_t(&local_118,"tls1multi_aadpacklen",&local_e0);
    local_d8[0] = local_118;
    local_d8[1] = uStack_110;
    local_b8 = local_f8;
    local_d8[2] = local_108;
    local_d8[3] = uStack_100;
    OSSL_PARAM_construct_uint(&local_118,"tls1multi_interleave",(long)ptr + 0x18);
    local_90 = local_f8;
    local_b0 = local_118;
    uStack_a8 = uStack_110;
    local_a0 = local_108;
    uStack_98 = uStack_100;
    OSSL_PARAM_construct_end(&local_118);
    local_88 = local_118;
    uStack_80 = uStack_110;
    local_78 = local_108;
    uStack_70 = uStack_100;
    local_68 = local_f8;
    goto LAB_0040ae2c;
  case 0x1a:
                    /* WARNING: Load size is inaccurate */
    OSSL_PARAM_construct_octet_string
              (&local_118,"tls1multi_enc",*ptr,*(undefined8 *)((long)ptr + 0x10));
    local_d8[0] = local_118;
    local_d8[1] = uStack_110;
    local_b8 = local_f8;
    local_d8[2] = local_108;
    local_d8[3] = uStack_100;
    OSSL_PARAM_construct_octet_string
              (&local_118,"tls1multi_encin",*(undefined8 *)((long)ptr + 8),
               *(undefined8 *)((long)ptr + 0x10));
    local_90 = local_f8;
    local_b0 = local_118;
    uStack_a8 = uStack_110;
    local_a0 = local_108;
    uStack_98 = uStack_100;
    OSSL_PARAM_construct_uint(&local_118,"tls1multi_interleave",(long)ptr + 0x18);
    local_88 = local_118;
    uStack_80 = uStack_110;
    local_68 = local_f8;
    local_78 = local_108;
    uStack_70 = uStack_100;
    iVar2 = evp_do_ciph_ctx_setparams(ctx->cipher,ctx[1].cipher,local_d8);
    if (iVar2 < 1) goto LAB_0040a8b2;
    OSSL_PARAM_construct_size_t(&local_118,"tls1multi_enclen",&local_e0);
    local_b8 = local_f8;
    local_d8[0] = local_118;
    local_d8[1] = uStack_110;
    local_d8[2] = local_108;
    local_d8[3] = uStack_100;
    OSSL_PARAM_construct_end(&local_118);
    local_b0 = local_118;
    uStack_a8 = uStack_110;
    local_a0 = local_108;
    uStack_98 = uStack_100;
    goto LAB_0040ae1f;
  case 0x1c:
    OSSL_PARAM_construct_size_t(&local_118,"tls1multi_maxsndfrag",&local_e0);
    local_d8[0] = local_118;
    local_d8[1] = uStack_110;
    local_b8 = local_f8;
    local_d8[2] = local_108;
    local_d8[3] = uStack_100;
    iVar2 = evp_do_ciph_ctx_setparams(ctx->cipher,ctx[1].cipher,local_d8);
    if (iVar2 < 1) goto LAB_0040a92a;
    OSSL_PARAM_construct_size_t(&local_118,"tls1multi_maxbufsz",&local_e0);
    local_b8 = local_f8;
    local_d8[0] = local_118;
    local_d8[1] = uStack_110;
    local_d8[2] = local_108;
    local_d8[3] = uStack_100;
    OSSL_PARAM_construct_end(&local_118);
    local_b0 = local_118;
    uStack_a8 = uStack_110;
    local_a0 = local_108;
    uStack_98 = uStack_100;
LAB_0040ae1f:
    local_90 = local_f8;
LAB_0040ae2c:
    iVar2 = evp_do_ciph_ctx_getparams(ctx->cipher,ctx[1].cipher,local_d8);
    if (iVar2 < 1) {
      iVar2 = 0;
    }
    else {
LAB_0040acb0:
      iVar2 = (int)local_e0;
    }
    goto LAB_0040a8b2;
  case 0x27:
    if (arg < 0) goto LAB_0040a92a;
    local_e4 = arg;
    OSSL_PARAM_construct_uint(&local_118,"speed",&local_e4);
LAB_0040a94c:
    local_b8 = local_f8;
    local_d8[0] = local_118;
    local_d8[1] = uStack_110;
    local_d8[2] = local_108;
    local_d8[3] = uStack_100;
    goto LAB_0040a96b;
  }
  local_d8[0] = local_118;
  local_d8[1] = uStack_110;
  local_d8[2] = local_108;
  local_d8[3] = uStack_100;
  local_b8 = local_f8;
LAB_0040a96b:
  iVar2 = evp_do_ciph_ctx_setparams(ctx->cipher,ctx[1].cipher,local_d8);
LAB_0040a8f5:
  if (iVar2 == -1) {
switchD_0040a877_caseD_7:
    ERR_new();
    ERR_set_debug("../crypto/evp/evp_enc.c",0x4fb,"EVP_CIPHER_CTX_ctrl");
    ERR_set_error(6,0x85,0);
LAB_0040a92a:
    iVar2 = 0;
  }
LAB_0040a8b2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

