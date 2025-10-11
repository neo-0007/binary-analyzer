
undefined8 ossl_rsa_sp800_56b_validate_strength(undefined8 param_1,uint param_2)

{
  ushort uVar1;
  
  uVar1 = ossl_ifc_ffc_compute_security_bits();
  if ((param_2 != 0xffffffff) && (uVar1 != param_2)) {
    ERR_new();
    ERR_set_debug("../crypto/rsa/rsa_sp800_56b_gen.c",0xb8,"ossl_rsa_sp800_56b_validate_strength");
    ERR_set_error(4,0xb0,0);
    return 0;
  }
  return 1;
}

