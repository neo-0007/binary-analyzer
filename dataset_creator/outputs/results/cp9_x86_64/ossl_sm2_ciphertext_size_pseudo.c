
undefined8 ossl_sm2_ciphertext_size(EC_KEY *param_1,undefined8 param_2,int param_3,long *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  EC_GROUP *pEVar4;
  long lVar5;
  
  pEVar4 = EC_KEY_get0_group(param_1);
  lVar5 = ec_field_size(pEVar4);
  iVar1 = EVP_MD_get_size();
  if ((lVar5 != 0) && (-1 < iVar1)) {
    iVar2 = ASN1_object_size(0,(int)lVar5 + 1,2);
    iVar1 = ASN1_object_size(0,iVar1,4);
    iVar3 = ASN1_object_size(0,param_3,4);
    iVar1 = ASN1_object_size(1,iVar1 + iVar2 * 2 + iVar3,0x10);
    *param_4 = (long)iVar1;
    return 1;
  }
  return 0;
}

