
ASN1_BIT_STRING * ossl_c2i_ASN1_BIT_STRING(long *param_1,undefined8 *param_2,long param_3)

{
  size_t __n;
  byte bVar1;
  void *__dest;
  uchar *puVar2;
  ASN1_BIT_STRING *a;
  undefined4 uVar3;
  byte *pbVar4;
  
  if (param_3 < 1) {
    uVar3 = 0x98;
    a = (ASN1_BIT_STRING *)0x0;
LAB_005a0f2f:
    ERR_new();
    ERR_set_debug("../crypto/asn1/a_bitstr.c",0x89,"ossl_c2i_ASN1_BIT_STRING");
    ERR_set_error(0xd,uVar3,0);
    if (param_1 == (long *)0x0) goto LAB_005a0f63;
  }
  else {
    if (0x7fffffff < param_3) {
      uVar3 = 0x97;
      a = (ASN1_BIT_STRING *)0x0;
      goto LAB_005a0f2f;
    }
    if ((param_1 == (long *)0x0) || (a = (ASN1_BIT_STRING *)*param_1, a == (ASN1_BIT_STRING *)0x0))
    {
      a = ASN1_BIT_STRING_new();
      if (a == (ASN1_BIT_STRING *)0x0) {
        return (ASN1_BIT_STRING *)0x0;
      }
      pbVar4 = (byte *)*param_2;
      bVar1 = *pbVar4;
      if (bVar1 < 8) goto LAB_005a0e68;
      uVar3 = 0xdc;
      goto LAB_005a0f2f;
    }
    pbVar4 = (byte *)*param_2;
    bVar1 = *pbVar4;
    if (bVar1 < 8) {
LAB_005a0e68:
      pbVar4 = pbVar4 + 1;
      __n = param_3 - 1;
      a->flags = (ulong)(bVar1 | 8) | a->flags & 0xfffffffffffffff0U;
      if (param_3 == 1) {
        puVar2 = (uchar *)0x0;
LAB_005a0ee3:
        a->length = (int)__n;
        CRYPTO_free(a->data);
        a->type = 3;
        a->data = puVar2;
        if (param_1 != (long *)0x0) {
          *param_1 = (long)a;
        }
        *param_2 = pbVar4;
        return a;
      }
      __dest = CRYPTO_malloc((int)__n,"../crypto/asn1/a_bitstr.c",0x75);
      if (__dest != (void *)0x0) {
        puVar2 = (uchar *)memcpy(__dest,pbVar4,__n);
        puVar2[param_3 + -2] = puVar2[param_3 + -2] & (byte)(0xff << (bVar1 & 0x1f));
        pbVar4 = pbVar4 + __n;
        goto LAB_005a0ee3;
      }
      uVar3 = 0xc0100;
      goto LAB_005a0f2f;
    }
    ERR_new();
    ERR_set_debug("../crypto/asn1/a_bitstr.c",0x89,"ossl_c2i_ASN1_BIT_STRING");
    ERR_set_error(0xd,0xdc,0);
  }
  if ((ASN1_BIT_STRING *)*param_1 == a) {
    return (ASN1_BIT_STRING *)0x0;
  }
LAB_005a0f63:
  ASN1_BIT_STRING_free(a);
  return (ASN1_BIT_STRING *)0x0;
}

