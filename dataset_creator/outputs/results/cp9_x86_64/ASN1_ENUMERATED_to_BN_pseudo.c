
BIGNUM * ASN1_ENUMERATED_to_BN(ASN1_ENUMERATED *ai,BIGNUM *bn)

{
  BIGNUM *pBVar1;
  
  pBVar1 = (BIGNUM *)asn1_string_to_bn(ai,bn,10);
  return pBVar1;
}

