
X509_EXTENSION * X509V3_EXT_i2d(int ext_nid,int crit,void *ext_struc)

{
  X509V3_EXT_METHOD *pXVar1;
  X509_EXTENSION *pXVar2;
  
  pXVar1 = X509V3_EXT_get_nid(ext_nid);
  if (pXVar1 != (X509V3_EXT_METHOD *)0x0) {
    pXVar2 = (X509_EXTENSION *)do_ext_i2d(pXVar1,ext_nid,crit,ext_struc);
    return pXVar2;
  }
  ERR_new();
  ERR_set_debug("../crypto/x509/v3_conf.c",0xc0,__func___6);
  ERR_set_error(0x22,0x81,0);
  return (X509_EXTENSION *)0x0;
}

