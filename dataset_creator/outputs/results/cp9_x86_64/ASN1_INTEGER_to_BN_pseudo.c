
BIGNUM * ASN1_INTEGER_to_BN(ASN1_INTEGER *ai,BIGNUM *bn)

{
  BIGNUM *pBVar1;
  
  pBVar1 = (BIGNUM *)asn1_string_to_bn(ai,bn,2);
  return pBVar1;
}

