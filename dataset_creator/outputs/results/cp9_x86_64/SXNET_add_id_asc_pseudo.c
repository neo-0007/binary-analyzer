
int SXNET_add_id_asc(SXNET **psx,char *zone,char *user,int userlen)

{
  int iVar1;
  ASN1_INTEGER *izone;
  
  izone = s2i_ASN1_INTEGER((X509V3_EXT_METHOD *)0x0,zone);
  if (izone != (ASN1_INTEGER *)0x0) {
    iVar1 = SXNET_add_id_INTEGER(psx,izone,user,userlen);
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("../crypto/x509/v3_sxnet.c",0x79,"SXNET_add_id_asc");
  ERR_set_error(0x22,0x83,0);
  return 0;
}

