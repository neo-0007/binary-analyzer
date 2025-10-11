
undefined8
do_PVK_body_key_isra_0
          (long param_1,uint param_2,uint param_3,code *param_4,void *param_5,undefined8 param_6,
          undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  uchar *in;
  uchar *out;
  int iVar1;
  EVP_CIPHER_CTX *a;
  undefined8 *ptr;
  EVP_CIPHER *cipher;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  int local_46c;
  uchar local_468 [5];
  undefined8 local_463;
  undefined2 local_45b;
  undefined1 local_459;
  char local_448 [1032];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  a = EVP_CIPHER_CTX_new();
  if (a == (EVP_CIPHER_CTX *)0x0) {
    ERR_new();
    uVar2 = 0;
    ERR_set_debug("../crypto/pem/pvkfmt.c",0x344,"do_PVK_body_key");
    ERR_set_error(9,0xc0100,0);
    EVP_CIPHER_CTX_free((EVP_CIPHER_CTX *)0x0);
    EVP_CIPHER_free(0);
    goto LAB_00545837;
  }
  if (param_2 == 0) {
    uVar2 = do_b2i_key_isra_0(param_1,param_3,param_6,param_7);
    EVP_CIPHER_CTX_free(a);
    EVP_CIPHER_free(0);
    goto LAB_00545837;
  }
  if (param_4 == (code *)0x0) {
    iVar1 = PEM_def_callback(local_448,0x400,0,param_5);
  }
  else {
    iVar1 = (*param_4)();
  }
  if (iVar1 < 0) {
    ERR_new();
    ERR_set_debug("../crypto/pem/pvkfmt.c",0x354,"do_PVK_body_key");
    uVar4 = 0x68;
  }
  else {
    ptr = (undefined8 *)CRYPTO_malloc(param_3 + 8,"../crypto/pem/pvkfmt.c",0x357);
    if (ptr != (undefined8 *)0x0) {
      iVar1 = derive_pvk_key(local_468,param_1,(ulong)param_2,local_448,iVar1,param_8);
      if (iVar1 == 0) {
LAB_00545800:
        cipher = (EVP_CIPHER *)0x0;
LAB_00545803:
        uVar2 = 0;
        EVP_CIPHER_CTX_free(a);
        EVP_CIPHER_free(cipher);
      }
      else {
        puVar3 = (undefined8 *)((ulong)param_2 + param_1);
        *ptr = *puVar3;
        if (param_3 < 8) {
          ERR_new();
          cipher = (EVP_CIPHER *)0x0;
          ERR_set_debug("../crypto/pem/pvkfmt.c",0x364,"do_PVK_body_key");
          ERR_set_error(9,0x7d,0);
          goto LAB_00545803;
        }
        cipher = (EVP_CIPHER *)EVP_CIPHER_fetch(param_8,"RC4",param_9);
        if (cipher == (EVP_CIPHER *)0x0) goto LAB_00545800;
        iVar1 = EVP_DecryptInit_ex(a,cipher,(ENGINE *)0x0,local_468,(uchar *)0x0);
        if (iVar1 == 0) goto LAB_00545803;
        in = (uchar *)(puVar3 + 1);
        out = (uchar *)(ptr + 1);
        iVar1 = EVP_DecryptUpdate(a,out,&local_46c,in,param_3 - 8);
        if (iVar1 == 0) goto LAB_00545803;
        iVar1 = EVP_DecryptFinal_ex(a,out + local_46c,&local_46c);
        if (iVar1 == 0) goto LAB_00545803;
        if ((*(int *)(ptr + 1) != 0x32415352) && (*(int *)(ptr + 1) != 0x32535344)) {
          local_45b = 0;
          local_463 = 0;
          local_459 = 0;
          iVar1 = EVP_DecryptInit_ex(a,cipher,(ENGINE *)0x0,local_468,(uchar *)0x0);
          if (iVar1 != 0) {
            iVar1 = EVP_DecryptUpdate(a,out,&local_46c,in,param_3 - 8);
            if (iVar1 != 0) {
              iVar1 = EVP_DecryptFinal_ex(a,out + local_46c,&local_46c);
              if (iVar1 != 0) {
                if ((*(int *)(ptr + 1) == 0x32415352) || (*(int *)(ptr + 1) == 0x32535344))
                goto LAB_005457d2;
                ERR_new();
                ERR_set_debug("../crypto/pem/pvkfmt.c",0x37d,"do_PVK_body_key");
                ERR_set_error(9,0x65,0);
              }
            }
          }
          goto LAB_00545803;
        }
LAB_005457d2:
        uVar2 = do_b2i_key_isra_0(ptr,param_3,param_6,param_7);
        EVP_CIPHER_CTX_free(a);
        EVP_CIPHER_free(cipher);
      }
      OPENSSL_cleanse(local_468,0x14);
      CRYPTO_free(ptr);
      goto LAB_00545837;
    }
    ERR_new();
    ERR_set_debug("../crypto/pem/pvkfmt.c",0x359,"do_PVK_body_key");
    uVar4 = 0xc0100;
  }
  uVar2 = 0;
  ERR_set_error(9,uVar4,0);
  EVP_CIPHER_CTX_free(a);
  EVP_CIPHER_free(0);
LAB_00545837:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

