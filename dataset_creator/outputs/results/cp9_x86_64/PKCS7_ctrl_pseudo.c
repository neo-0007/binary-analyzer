
long PKCS7_ctrl(PKCS7 *p7,int cmd,long larg,char *parg)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  bool bVar6;
  
  iVar1 = OBJ_obj2nid(p7->type);
  if (cmd == 1) {
    if (iVar1 != 0x16) {
      ERR_new();
      uVar3 = 0x27;
      goto LAB_0054a651;
    }
    p7->detached = (int)larg;
    lVar4 = (long)(int)larg;
    if (lVar4 != 0) {
      iVar1 = OBJ_obj2nid(((p7->d).sign)->contents->type);
      if (iVar1 == 0x15) {
        ASN1_OCTET_STRING_free((((p7->d).sign)->contents->d).data);
        (((p7->d).sign)->contents->d).ptr = (char *)0x0;
      }
    }
  }
  else {
    if (cmd == 2) {
      if (iVar1 == 0x16) {
        if ((p7->d).sign == (PKCS7_SIGNED *)0x0) {
          uVar2 = 1;
          uVar5 = 1;
        }
        else {
          bVar6 = (((p7->d).sign)->contents->d).ptr == (char *)0x0;
          uVar5 = (ulong)bVar6;
          uVar2 = (uint)bVar6;
        }
        p7->detached = uVar2;
        return uVar5;
      }
      ERR_new();
      uVar3 = 0x35;
LAB_0054a651:
      ERR_set_debug("../crypto/pkcs7/pk7_lib.c",uVar3,__func___12);
      ERR_set_error(0x21,0x68,0);
      return 0;
    }
    ERR_new();
    lVar4 = 0;
    ERR_set_debug("../crypto/pkcs7/pk7_lib.c",0x3c,__func___12);
    ERR_set_error(0x21,0x6e,0);
  }
  return lVar4;
}

