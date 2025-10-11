
X509_PUBKEY * key_to_pubkey(undefined8 param_1,int param_2,void *param_3,int param_4,code *param_5)

{
  uchar *penc;
  int iVar1;
  X509_PUBKEY *pub;
  ASN1_OBJECT *aobj;
  X509_PUBKEY *pXVar2;
  long in_FS_OFFSET;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (uchar *)0x0;
  pub = X509_PUBKEY_new();
  if (pub != (X509_PUBKEY *)0x0) {
    iVar1 = (*param_5)(param_1,&local_48);
    penc = local_48;
    if (0 < iVar1) {
      aobj = OBJ_nid2obj(param_2);
      iVar1 = X509_PUBKEY_set0_param(pub,aobj,param_4,param_3,penc,iVar1);
      pXVar2 = pub;
      if (iVar1 != 0) goto LAB_00454d05;
    }
  }
  ERR_new();
  ERR_set_debug("../providers/implementations/encode_decode/encode_key2any.c",0x9d,"key_to_pubkey");
  ERR_set_error(0x39,0xc0100,0);
  pXVar2 = (X509_PUBKEY *)0x0;
  X509_PUBKEY_free(pub);
  CRYPTO_free(local_48);
LAB_00454d05:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pXVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

