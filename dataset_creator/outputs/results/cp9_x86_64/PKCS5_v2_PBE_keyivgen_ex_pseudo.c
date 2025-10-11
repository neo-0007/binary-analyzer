
undefined4
PKCS5_v2_PBE_keyivgen_ex
          (EVP_CIPHER_CTX *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,int param_7,undefined8 param_8,undefined8 param_9)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  PBE2PARAM *a;
  EVP_CIPHER *pEVar4;
  EVP_CIPHER *cipher;
  long in_FS_OFFSET;
  code *local_a0;
  char local_98 [88];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = PBE2PARAM_it();
  a = (PBE2PARAM *)ASN1_TYPE_unpack_sequence(uVar3,param_4);
  if (a == (PBE2PARAM *)0x0) {
    ERR_new();
    pEVar4 = (EVP_CIPHER *)0x0;
    uVar2 = 0;
    ERR_set_debug("../crypto/evp/p5_crpt2.c",0x7d,"PKCS5_v2_PBE_keyivgen_ex");
    ERR_set_error(6,0x72,0);
  }
  else {
    iVar1 = OBJ_obj2nid(a->keyfunc->algorithm);
    iVar1 = EVP_PBE_find_ex(2,iVar1,0,0,0,&local_a0);
    if (iVar1 == 0) {
      ERR_new();
      pEVar4 = (EVP_CIPHER *)0x0;
      ERR_set_debug("../crypto/evp/p5_crpt2.c",0x84,"PKCS5_v2_PBE_keyivgen_ex");
      ERR_set_error(6,0x7c,0);
      uVar2 = 0;
    }
    else {
      iVar1 = OBJ_obj2txt(local_98,0x50,a->encryption->algorithm,0);
      if (iVar1 < 1) {
        ERR_new();
        uVar2 = 0;
        pEVar4 = (EVP_CIPHER *)0x0;
        ERR_set_debug("../crypto/evp/p5_crpt2.c",0x8c,"PKCS5_v2_PBE_keyivgen_ex");
        ERR_set_error(6,0x6b,0);
      }
      else {
        ERR_set_mark();
        pEVar4 = (EVP_CIPHER *)EVP_CIPHER_fetch(param_8,local_98,param_9);
        cipher = pEVar4;
        if (pEVar4 == (EVP_CIPHER *)0x0) {
          cipher = EVP_get_cipherbyname(local_98);
          if (cipher == (EVP_CIPHER *)0x0) {
            ERR_clear_last_mark();
            uVar2 = 0;
            ERR_new();
            ERR_set_debug("../crypto/evp/p5_crpt2.c",0x98,"PKCS5_v2_PBE_keyivgen_ex");
            ERR_set_error(6,0x6b,0);
            goto LAB_0052ebc8;
          }
        }
        ERR_pop_to_mark();
        iVar1 = EVP_CipherInit_ex(param_1,cipher,(ENGINE *)0x0,(uchar *)0x0,(uchar *)0x0,param_7);
        if (iVar1 == 0) {
          uVar2 = 0;
        }
        else {
          iVar1 = EVP_CIPHER_asn1_to_param(param_1,a->encryption->parameter);
          if (iVar1 < 0) {
            ERR_new();
            uVar2 = 0;
            ERR_set_debug("../crypto/evp/p5_crpt2.c",0xa1,"PKCS5_v2_PBE_keyivgen_ex");
            ERR_set_error(6,0x7a,0);
          }
          else {
            uVar2 = (*local_a0)(param_1,param_2,param_3,a->keyfunc->parameter,0,0,param_7,param_8,
                                param_9);
          }
        }
      }
    }
  }
LAB_0052ebc8:
  EVP_CIPHER_free(pEVar4);
  PBE2PARAM_free(a);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

