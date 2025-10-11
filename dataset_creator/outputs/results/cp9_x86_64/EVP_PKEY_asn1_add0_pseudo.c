
int EVP_PKEY_asn1_add0(EVP_PKEY_ASN1_METHOD *ameth)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  undefined8 local_168 [41];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  puVar3 = local_168;
  for (lVar2 = 0x28; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  if (*(long *)(ameth + 0x10) == 0) {
    if ((*(ulong *)(ameth + 8) & 1) == 0) goto LAB_0049eb01;
  }
  else if ((*(ulong *)(ameth + 8) & 1) != 0) {
LAB_0049eb01:
    ERR_new();
    ERR_set_debug("../crypto/asn1/ameth_lib.c",0x9e,"EVP_PKEY_asn1_add0");
    ERR_set_error(6,0x80106,0);
    iVar1 = 0;
    goto LAB_0049ea98;
  }
  if ((app_methods != 0) || (app_methods = OPENSSL_sk_new(ameth_cmp), app_methods != 0)) {
    local_168[0]._0_4_ = *(undefined4 *)ameth;
    iVar1 = OPENSSL_sk_find(app_methods,local_168);
    if (iVar1 < 0) {
      iVar1 = OPENSSL_sk_push(app_methods,ameth);
      if (iVar1 != 0) {
        OPENSSL_sk_sort(app_methods);
        iVar1 = 1;
        goto LAB_0049ea98;
      }
    }
    else {
      ERR_new();
      ERR_set_debug("../crypto/asn1/ameth_lib.c",0xaa,"EVP_PKEY_asn1_add0");
      ERR_set_error(6,0xb3,0);
    }
  }
  iVar1 = 0;
LAB_0049ea98:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar1;
}

