
int PKCS7_content_new(PKCS7 *p7,int nid)

{
  int iVar1;
  PKCS7 *p7_00;
  
  p7_00 = PKCS7_new();
  if (p7_00 != (PKCS7 *)0x0) {
    iVar1 = PKCS7_set_type(p7_00,nid);
    if (iVar1 != 0) {
      iVar1 = PKCS7_set_content(p7,p7_00);
      if (iVar1 != 0) {
        return 1;
      }
    }
  }
  PKCS7_free(p7_00);
  return 0;
}

