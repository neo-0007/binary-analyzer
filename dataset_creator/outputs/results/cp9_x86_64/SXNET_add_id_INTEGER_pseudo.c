
int SXNET_add_id_INTEGER(SXNET **psx,ASN1_INTEGER *izone,char *user,int userlen)

{
  int iVar1;
  ASN1_OCTET_STRING *pAVar2;
  SXNET *sx;
  SXNET *pSVar3;
  size_t sVar4;
  SXNET *pSVar5;
  
  if ((izone == (ASN1_INTEGER *)0x0 || user == (char *)0x0) || (psx == (SXNET **)0x0)) {
    ERR_new();
    ERR_set_debug("../crypto/x509/v3_sxnet.c",0x9c,"SXNET_add_id_INTEGER");
    ERR_set_error(0x22,0x6b,0);
    return 0;
  }
  if (userlen == -1) {
    sVar4 = strlen(user);
    userlen = (int)sVar4;
    if (0x40 < userlen) goto LAB_006106bd;
  }
  else if (0x40 < userlen) {
LAB_006106bd:
    ERR_new();
    ERR_set_debug("../crypto/x509/v3_sxnet.c",0xa2,"SXNET_add_id_INTEGER");
    ERR_set_error(0x22,0x84,0);
    return 0;
  }
  pSVar5 = *psx;
  sx = pSVar5;
  if (pSVar5 == (SXNET *)0x0) {
    sx = SXNET_new();
    pSVar3 = sx;
    if (sx != (SXNET *)0x0) {
      iVar1 = ASN1_INTEGER_set(sx->version,0);
      if (iVar1 != 0) goto LAB_00610646;
      pSVar3 = (SXNET *)0x0;
      pSVar5 = sx;
    }
  }
  else {
LAB_00610646:
    pAVar2 = SXNET_get_id_INTEGER(sx,izone);
    if (pAVar2 != (ASN1_OCTET_STRING *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/x509/v3_sxnet.c",0xad,"SXNET_add_id_INTEGER");
      ERR_set_error(0x22,0x85,0);
      pSVar3 = *psx;
      goto joined_r0x006107ac;
    }
    pSVar3 = (SXNET *)SXNETID_new();
    pSVar5 = sx;
    if (pSVar3 != (SXNET *)0x0) {
      if (userlen == -1) {
        sVar4 = strlen(user);
        userlen = (int)sVar4;
      }
      iVar1 = ASN1_OCTET_STRING_set((ASN1_STRING *)pSVar3->ids,user,userlen);
      if ((iVar1 != 0) && (iVar1 = OPENSSL_sk_push(sx->ids,pSVar3), iVar1 != 0)) {
        pSVar3->version = izone;
        *psx = sx;
        return 1;
      }
    }
  }
  ERR_new();
  ERR_set_debug("../crypto/x509/v3_sxnet.c",0xc1,"SXNET_add_id_INTEGER");
  ERR_set_error(0x22,0xc0100,0);
  SXNETID_free((SXNETID *)pSVar3);
  pSVar3 = *psx;
  sx = pSVar5;
joined_r0x006107ac:
  if (pSVar3 == (SXNET *)0x0) {
    SXNET_free(sx);
  }
  return 0;
}

