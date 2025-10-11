
PKCS8_PRIV_KEY_INFO *
key_to_p8info(undefined8 param_1,int param_2,void *param_3,int param_4,code *param_5)

{
  uchar *penc;
  int iVar1;
  PKCS8_PRIV_KEY_INFO *priv;
  ASN1_OBJECT *aobj;
  PKCS8_PRIV_KEY_INFO *pPVar2;
  long in_FS_OFFSET;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (uchar *)0x0;
  priv = PKCS8_PRIV_KEY_INFO_new();
  if (priv != (PKCS8_PRIV_KEY_INFO *)0x0) {
    iVar1 = (*param_5)(param_1,&local_48);
    penc = local_48;
    if (0 < iVar1) {
      aobj = OBJ_nid2obj(param_2);
      iVar1 = PKCS8_pkey_set0(priv,aobj,0,param_4,param_3,penc,iVar1);
      pPVar2 = priv;
      if (iVar1 != 0) goto LAB_0045497d;
    }
  }
  ERR_new();
  ERR_set_debug("../providers/implementations/encode_decode/encode_key2any.c",0x5e,"key_to_p8info");
  ERR_set_error(0x39,0xc0100,0);
  pPVar2 = (PKCS8_PRIV_KEY_INFO *)0x0;
  PKCS8_PRIV_KEY_INFO_free(priv);
  CRYPTO_free(local_48);
LAB_0045497d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

