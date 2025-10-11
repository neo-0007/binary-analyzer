
undefined8 ossl_x509_algor_mgf1_decode(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  iVar1 = OBJ_obj2nid((ASN1_OBJECT *)*param_1);
  if (iVar1 == 0x38f) {
    uVar3 = param_1[1];
    uVar2 = X509_ALGOR_it();
    uVar3 = ASN1_TYPE_unpack_sequence(uVar2,uVar3);
    return uVar3;
  }
  return 0;
}

