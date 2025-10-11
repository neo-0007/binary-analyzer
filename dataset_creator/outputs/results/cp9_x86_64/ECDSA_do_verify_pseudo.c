
int ECDSA_do_verify(uchar *dgst,int dgst_len,ECDSA_SIG *sig,EC_KEY *eckey)

{
  int iVar1;
  undefined4 in_register_00000034;
  
  if (*(code **)(*(long *)eckey + 0x70) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004eb0c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(*(long *)eckey + 0x70))();
    return iVar1;
  }
  ERR_new(dgst,CONCAT44(in_register_00000034,dgst_len));
  ERR_set_debug("../crypto/ec/ecdsa_vrf.c",0x1f,"ECDSA_do_verify");
  ERR_set_error(0x10,0x98,0);
  return -1;
}

