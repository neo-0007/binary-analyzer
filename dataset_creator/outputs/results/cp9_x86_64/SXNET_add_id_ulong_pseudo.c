
int SXNET_add_id_ulong(SXNET **psx,ulong lzone,char *user,int userlen)

{
  int iVar1;
  ASN1_INTEGER *izone;
  
  izone = ASN1_INTEGER_new();
  if (izone != (ASN1_INTEGER *)0x0) {
    iVar1 = ASN1_INTEGER_set(izone,lzone);
    if (iVar1 != 0) {
      iVar1 = SXNET_add_id_INTEGER(psx,izone,user,userlen);
      return iVar1;
    }
  }
  ERR_new();
  ERR_set_debug("../crypto/x509/v3_sxnet.c",0x88,"SXNET_add_id_ulong");
  ERR_set_error(0x22,0xc0100,0);
  ASN1_INTEGER_free(izone);
  return 0;
}

