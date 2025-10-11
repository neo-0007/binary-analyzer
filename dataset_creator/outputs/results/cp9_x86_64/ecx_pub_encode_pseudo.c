
undefined8 ecx_pub_encode(X509_PUBKEY *param_1,long param_2)

{
  int iVar1;
  uchar *penc;
  ASN1_OBJECT *aobj;
  int penclen;
  char cVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_2 + 0x20) == 0) {
    ERR_new();
    uVar3 = 0;
    ERR_set_debug("../crypto/ec/ecx_meth.c",0x25,"ecx_pub_encode");
    ERR_set_error(0x10,0x74,0);
  }
  else {
    iVar1 = **(int **)(param_2 + 8);
    if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
      cVar2 = ' ';
    }
    else {
      cVar2 = (iVar1 != 0x40b) + '8';
    }
    penc = (uchar *)CRYPTO_memdup(*(long *)(param_2 + 0x20) + 0x11,cVar2,"../crypto/ec/ecx_meth.c");
    if (penc == (uchar *)0x0) {
      ERR_new();
      uVar3 = 0;
      ERR_set_debug("../crypto/ec/ecx_meth.c",0x2b,"ecx_pub_encode");
      ERR_set_error(0x10,0xc0100,0);
    }
    else {
      iVar1 = **(int **)(param_2 + 8);
      if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
        penclen = 0x20;
      }
      else {
        penclen = (iVar1 != 0x40b) + 0x38;
      }
      aobj = OBJ_nid2obj(iVar1);
      iVar1 = X509_PUBKEY_set0_param(param_1,aobj,-1,(void *)0x0,penc,penclen);
      if (iVar1 == 0) {
        CRYPTO_free(penc);
        ERR_new();
        ERR_set_debug("../crypto/ec/ecx_meth.c",0x32,"ecx_pub_encode");
        ERR_set_error(0x10,0xc0100,0);
        return 0;
      }
      uVar3 = 1;
    }
  }
  return uVar3;
}

