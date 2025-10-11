
void EVP_PKEY_asn1_copy(EVP_PKEY_ASN1_METHOD *dst,EVP_PKEY_ASN1_METHOD *src)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  EVP_PKEY_ASN1_METHOD *pEVar6;
  
  uVar1 = *(undefined8 *)(dst + 8);
  uVar2 = *(undefined8 *)(dst + 0x10);
  uVar3 = *(undefined8 *)(dst + 0x18);
  uVar4 = *(undefined8 *)dst;
  pEVar6 = dst;
  for (lVar5 = 0x28; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined8 *)pEVar6 = *(undefined8 *)src;
    src = src + 8;
    pEVar6 = pEVar6 + 8;
  }
  *(undefined8 *)(dst + 8) = uVar1;
  *(undefined8 *)dst = uVar4;
  *(undefined8 *)(dst + 0x10) = uVar2;
  *(undefined8 *)(dst + 0x18) = uVar3;
  return;
}

