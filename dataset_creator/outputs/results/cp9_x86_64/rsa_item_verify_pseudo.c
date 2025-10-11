
int rsa_item_verify(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                   undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  
  iVar1 = OBJ_obj2nid((ASN1_OBJECT *)*param_4);
  if (iVar1 == 0x390) {
    iVar1 = ossl_rsa_pss_to_ctx(param_1,0,param_4,param_6);
    iVar1 = (uint)(0 < iVar1) * 3 + -1;
  }
  else {
    ERR_new();
    ERR_set_debug("../crypto/rsa/rsa_ameth.c",0x269,"rsa_item_verify");
    ERR_set_error(4,0x9b,0);
    iVar1 = -1;
  }
  return iVar1;
}

