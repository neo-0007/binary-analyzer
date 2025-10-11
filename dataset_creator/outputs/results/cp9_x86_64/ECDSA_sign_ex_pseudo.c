
int ECDSA_sign_ex(int type,uchar *dgst,int dgstlen,uchar *sig,uint *siglen,BIGNUM *kinv,BIGNUM *rp,
                 EC_KEY *eckey)

{
  int iVar1;
  undefined4 in_register_0000003c;
  
  if (*(code **)(*(long *)eckey + 0x50) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004eaff2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(*(long *)eckey + 0x50))(CONCAT44(in_register_0000003c,type),dgst,dgstlen);
    return iVar1;
  }
  ERR_new(CONCAT44(in_register_0000003c,type));
  ERR_set_debug("../crypto/ec/ecdsa_sign.c",0x2f,"ECDSA_sign_ex");
  ERR_set_error(0x10,0x98,0);
  return 0;
}

