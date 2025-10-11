
undefined8
PKCS5_pbe_set0_algor_ex
          (X509_ALGOR *param_1,int param_2,int param_3,void *param_4,int param_5,undefined8 param_6)

{
  ASN1_OCTET_STRING *pval;
  int iVar1;
  PBEPARAM *a;
  ASN1_ITEM *it;
  ASN1_STRING *pAVar2;
  ASN1_OBJECT *aobj;
  undefined8 uVar3;
  size_t __n;
  long in_FS_OFFSET;
  void *local_58;
  ASN1_OCTET_STRING *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (ASN1_STRING *)0x0;
  a = PBEPARAM_new();
  if (a == (PBEPARAM *)0x0) {
    ERR_new();
    uVar3 = 0x25;
LAB_005a85a9:
    ERR_set_debug("../crypto/asn1/p5_pbe.c",uVar3,"PKCS5_pbe_set0_algor_ex");
    ERR_set_error(0xd,0xc0100,0);
    local_58 = (void *)0x0;
  }
  else {
    if (param_3 < 1) {
      param_3 = 0x800;
    }
    iVar1 = ASN1_INTEGER_set(a->iter,(long)param_3);
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0x2b;
      goto LAB_005a85a9;
    }
    if (param_5 == 0) {
      __n = 8;
      param_5 = 8;
LAB_005a848f:
      local_58 = CRYPTO_malloc((int)__n,"../crypto/asn1/p5_pbe.c",0x33);
      if (local_58 == (void *)0x0) {
        ERR_new();
        uVar3 = 0x35;
      }
      else {
        if (param_4 == (void *)0x0) {
          iVar1 = RAND_bytes_ex(param_6,local_58,__n,0);
          if (iVar1 < 1) goto LAB_005a8538;
        }
        else {
          local_58 = memcpy(local_58,param_4,__n);
        }
        ASN1_STRING_set0(a->salt,local_58,param_5);
        it = (ASN1_ITEM *)PBEPARAM_it();
        pAVar2 = ASN1_item_pack(a,it,&local_48);
        if (pAVar2 != (ASN1_STRING *)0x0) {
          PBEPARAM_free(a);
          pval = local_48;
          aobj = OBJ_nid2obj(param_2);
          iVar1 = X509_ALGOR_set0(param_1,aobj,0x10,pval);
          uVar3 = 1;
          if (iVar1 != 0) goto LAB_005a855c;
          local_58 = (void *)0x0;
          a = (PBEPARAM *)0x0;
          goto LAB_005a8538;
        }
        ERR_new();
        uVar3 = 0x41;
        local_58 = (void *)0x0;
      }
      ERR_set_debug("../crypto/asn1/p5_pbe.c",uVar3,"PKCS5_pbe_set0_algor_ex");
      ERR_set_error(0xd,0xc0100,0);
    }
    else {
      __n = (size_t)param_5;
      if (-1 < param_5) goto LAB_005a848f;
      local_58 = (void *)0x0;
    }
  }
LAB_005a8538:
  CRYPTO_free(local_58);
  PBEPARAM_free(a);
  ASN1_STRING_free(local_48);
  uVar3 = 0;
LAB_005a855c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar3;
}

