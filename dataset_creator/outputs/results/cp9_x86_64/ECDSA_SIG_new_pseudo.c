
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ECDSA_SIG * ECDSA_SIG_new(void)

{
  ECDSA_SIG *pEVar1;
  
  pEVar1 = (ECDSA_SIG *)CRYPTO_zalloc(0x10,"../crypto/ec/ec_asn1.c",0x4aa);
  if (pEVar1 != (ECDSA_SIG *)0x0) {
    return pEVar1;
  }
  ERR_new();
  ERR_set_debug("../crypto/ec/ec_asn1.c",0x4ac,"ECDSA_SIG_new");
  ERR_set_error(0x10,0xc0100,0);
  return (ECDSA_SIG *)0x0;
}

