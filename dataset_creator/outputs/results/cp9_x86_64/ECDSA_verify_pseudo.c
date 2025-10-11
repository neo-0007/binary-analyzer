
int ECDSA_verify(int type,uchar *dgst,int dgstlen,uchar *sig,int siglen,EC_KEY *eckey)

{
  int iVar1;
  undefined4 in_register_00000014;
  undefined4 in_register_0000003c;
  
  if (*(code **)(*(long *)eckey + 0x68) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004eb110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(*(long *)eckey + 0x68))();
    return iVar1;
  }
  ERR_new(CONCAT44(in_register_0000003c,type),dgst,CONCAT44(in_register_00000014,dgstlen));
  ERR_set_debug("../crypto/ec/ecdsa_vrf.c",0x2f,"ECDSA_verify");
  ERR_set_error(0x10,0x98,0);
  return -1;
}

