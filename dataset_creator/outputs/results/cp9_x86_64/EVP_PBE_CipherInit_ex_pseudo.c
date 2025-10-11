
undefined4
EVP_PBE_CipherInit_ex
          (ASN1_OBJECT *param_1,char *param_2,uint param_3,undefined8 param_4,undefined8 param_5,
          undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined4 uVar2;
  size_t sVar3;
  char *pcVar4;
  EVP_CIPHER *pEVar5;
  long lVar6;
  EVP_CIPHER *pEVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  int local_b0;
  int local_ac;
  code *local_a8;
  code *local_a0;
  char local_98 [88];
  long local_40;
  
  uVar8 = (ulong)param_3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = OBJ_obj2nid(param_1);
  iVar1 = EVP_PBE_find_ex(0,iVar1,&local_b0,&local_ac,&local_a0,&local_a8);
  if (iVar1 == 0) {
    uVar2 = 0;
    if (param_1 == (ASN1_OBJECT *)0x0) {
      OPENSSL_strlcpy(local_98,"NULL",0x50);
    }
    else {
      i2t_ASN1_OBJECT(local_98,0x50,param_1);
    }
    ERR_new();
    lVar6 = 0;
    pEVar5 = (EVP_CIPHER *)0x0;
    ERR_set_debug("../crypto/evp/evp_pbe.c",0x6d,"EVP_PBE_CipherInit_ex");
    ERR_set_error(6,0x79,"TYPE=%s",local_98);
  }
  else {
    if (param_2 == (char *)0x0) {
      uVar8 = 0;
    }
    else if (param_3 == 0xffffffff) {
      sVar3 = strlen(param_2);
      uVar8 = sVar3 & 0xffffffff;
    }
    if (local_b0 == -1) {
      pEVar5 = (EVP_CIPHER *)0x0;
      pEVar7 = (EVP_CIPHER *)0x0;
    }
    else {
      ERR_set_mark();
      pcVar4 = OBJ_nid2sn(local_b0);
      pEVar5 = (EVP_CIPHER *)EVP_CIPHER_fetch(param_7,pcVar4,param_8);
      pEVar7 = pEVar5;
      if (pEVar5 == (EVP_CIPHER *)0x0) {
        pcVar4 = OBJ_nid2sn(local_b0);
        pEVar7 = EVP_get_cipherbyname(pcVar4);
        if (pEVar7 == (EVP_CIPHER *)0x0) {
          ERR_clear_last_mark();
          uVar2 = 0;
          ERR_new();
          ERR_set_debug("../crypto/evp/evp_pbe.c",0x7f,"EVP_PBE_CipherInit_ex");
          pcVar4 = OBJ_nid2sn(local_b0);
          ERR_set_error(6,0xa0,pcVar4);
          lVar6 = 0;
          goto LAB_005f49b7;
        }
      }
      ERR_pop_to_mark();
    }
    lVar6 = 0;
    if (local_ac != -1) {
      ERR_set_mark();
      pcVar4 = OBJ_nid2sn(local_ac);
      lVar6 = EVP_MD_fetch(param_7,pcVar4,param_8);
      if (lVar6 == 0) {
        uVar2 = 0;
        pcVar4 = OBJ_nid2sn(local_ac);
        EVP_get_digestbyname(pcVar4);
        ERR_clear_last_mark();
        ERR_new();
        ERR_set_debug("../crypto/evp/evp_pbe.c",0x8f,"EVP_PBE_CipherInit_ex");
        ERR_set_error(6,0xa1,0);
        goto LAB_005f49b7;
      }
      ERR_pop_to_mark();
    }
    if (local_a8 == (code *)0x0) {
      uVar2 = (*local_a0)(param_5,param_2,uVar8,param_4,pEVar7,lVar6,param_6);
    }
    else {
      uVar2 = (*local_a8)(param_5,param_2,uVar8,param_4,pEVar7,lVar6,param_6,param_7,param_8);
    }
  }
LAB_005f49b7:
  EVP_CIPHER_free(pEVar5);
  EVP_MD_free(lVar6);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar2;
}

