
int i2b_PVK_constprop_0(long *param_1,undefined8 param_2,int param_3,code *param_4,void *param_5,
                       undefined8 param_6,undefined8 param_7)

{
  uchar *puVar1;
  uchar *puVar2;
  int iVar3;
  int iVar4;
  EVP_CIPHER_CTX *ctx;
  EVP_CIPHER *cipher;
  int num;
  long in_FS_OFFSET;
  undefined8 uStack_4c0;
  uchar *local_488;
  int local_474;
  uchar *local_470;
  uchar local_468 [5];
  undefined8 local_463;
  undefined2 local_45b;
  undefined1 local_459;
  char local_448 [1032];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_470 = (uchar *)0x0;
  iVar3 = do_i2b(0,param_2,0);
  if (iVar3 < 0) {
    num = -1;
    goto LAB_00544a1c;
  }
  num = (-(uint)(param_3 == 0) & 0xfffffff0) + 0x28 + iVar3;
  if ((uchar *)*param_1 == (uchar *)0x0) {
    local_488 = (uchar *)CRYPTO_malloc(num,"../crypto/pem/pvkfmt.c",0x3fe);
    local_470 = local_488;
    if (local_488 == (uchar *)0x0) {
      ERR_new();
      num = -1;
      ERR_set_debug("../crypto/pem/pvkfmt.c",0x400,"i2b_PVK");
      ERR_set_error(9,0xc0100,0);
      goto LAB_00544a1c;
    }
  }
  else {
    local_488 = (uchar *)0x0;
    local_470 = (uchar *)*param_1;
  }
  ctx = EVP_CIPHER_CTX_new();
  puVar2 = local_470;
  if (ctx == (EVP_CIPHER_CTX *)0x0) {
LAB_00544a50:
    cipher = (EVP_CIPHER *)0x0;
LAB_00544a53:
    num = -1;
  }
  else {
    puVar2[0] = '\x1e';
    puVar2[1] = 0xf1;
    puVar2[2] = 0xb5;
    puVar2[3] = 0xb0;
    puVar2[4] = '\0';
    puVar2[5] = '\0';
    puVar2[6] = '\0';
    puVar2[7] = '\0';
    iVar4 = EVP_PKEY_get_id();
    puVar1 = puVar2 + 0x18;
    puVar2[0xb] = '\0';
    puVar2[0xf] = '\0';
    puVar2[0x13] = '\0';
    puVar2[9] = '\0';
    puVar2[10] = '\0';
    puVar2[8] = (iVar4 != 6) + '\x01';
    puVar2[0xc] = param_3 != 0;
    puVar2[0xd] = '\0';
    puVar2[0xe] = '\0';
    puVar2[0x10] = (param_3 != 0) << 4;
    puVar2[0x11] = '\0';
    puVar2[0x12] = '\0';
    *(int *)(puVar2 + 0x14) = iVar3;
    local_470 = puVar1;
    if (param_3 != 0) {
      iVar4 = RAND_bytes_ex(param_6,puVar1,0x10,0);
      if (iVar4 < 1) goto LAB_00544a50;
      local_470 = puVar2 + 0x28;
      do_i2b(&local_470,param_2,0);
      if (param_4 == (code *)0x0) {
        uStack_4c0 = 0x544b45;
        iVar4 = PEM_def_callback(local_448,0x400,1,param_5);
      }
      else {
        uStack_4c0 = 0x544900;
        iVar4 = (*param_4)();
      }
      if (iVar4 < 1) {
        ERR_new();
        cipher = (EVP_CIPHER *)0x0;
        ERR_set_debug("../crypto/pem/pvkfmt.c",0x427,"i2b_PVK");
        ERR_set_error(9,0x68,0);
      }
      else {
        iVar4 = derive_pvk_key(local_468,puVar1,0x10,local_448,iVar4,param_6,param_7);
        if ((iVar4 == 0) ||
           (cipher = (EVP_CIPHER *)EVP_CIPHER_fetch(param_6,"RC4",param_7,uStack_4c0),
           cipher == (EVP_CIPHER *)0x0)) goto LAB_00544a50;
        if (param_3 == 1) {
          local_459 = 0;
          local_463 = 0;
          local_45b = 0;
        }
        puVar2 = puVar2 + 0x30;
        local_470 = puVar2;
        iVar4 = EVP_EncryptInit_ex(ctx,cipher,(ENGINE *)0x0,local_468,(uchar *)0x0);
        if (iVar4 != 0) {
          OPENSSL_cleanse(local_468,0x14);
          iVar3 = EVP_EncryptUpdate(ctx,puVar2,&local_474,puVar2,iVar3 + -8);
          if ((iVar3 != 0) &&
             (iVar3 = EVP_EncryptFinal_ex(ctx,puVar2 + local_474,&local_474), iVar3 != 0))
          goto LAB_005449f2;
        }
      }
      goto LAB_00544a53;
    }
    cipher = (EVP_CIPHER *)0x0;
    do_i2b(&local_470,param_2,0);
LAB_005449f2:
    if (*param_1 == 0) {
      *param_1 = (long)local_488;
    }
  }
  EVP_CIPHER_CTX_free(ctx);
  EVP_CIPHER_free(cipher);
  if (*param_1 == 0) {
    CRYPTO_free(local_488);
  }
LAB_00544a1c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return num;
}

