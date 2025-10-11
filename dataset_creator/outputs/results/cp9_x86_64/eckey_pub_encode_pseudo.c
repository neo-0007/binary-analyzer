
undefined8 eckey_pub_encode(X509_PUBKEY *param_1,long param_2)

{
  EC_KEY *key;
  ASN1_OBJECT *a;
  int iVar1;
  uchar *penc;
  ASN1_OBJECT *aobj;
  undefined8 uVar2;
  long in_FS_OFFSET;
  int local_54;
  ASN1_OBJECT *local_50;
  uchar *local_48;
  long local_40;
  
  key = *(EC_KEY **)(param_2 + 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (ASN1_OBJECT *)0x0;
  iVar1 = eckey_param2type(&local_54,&local_50,key);
  if (iVar1 == 0) {
    uVar2 = 0;
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_ameth.c",0x4e,"eckey_pub_encode");
    ERR_set_error(0x10,0x80010,0);
    goto LAB_004db809;
  }
  iVar1 = i2o_ECPublicKey(key,(uchar **)0x0);
  a = local_50;
  if ((iVar1 < 1) ||
     (penc = (uchar *)CRYPTO_malloc(iVar1,"../crypto/ec/ec_ameth.c",0x54), penc == (uchar *)0x0)) {
    penc = (uchar *)0x0;
LAB_004db7e9:
    if (local_54 == 6) goto LAB_004db7d8;
LAB_004db7f1:
    ASN1_STRING_free((ASN1_STRING *)a);
  }
  else {
    local_48 = penc;
    iVar1 = i2o_ECPublicKey(key,&local_48);
    if (iVar1 < 1) goto LAB_004db7e9;
    aobj = OBJ_nid2obj(0x198);
    uVar2 = 1;
    iVar1 = X509_PUBKEY_set0_param(param_1,aobj,local_54,a,penc,iVar1);
    if (iVar1 != 0) goto LAB_004db809;
    if (local_54 != 6) goto LAB_004db7f1;
LAB_004db7d8:
    ASN1_OBJECT_free(a);
  }
  uVar2 = 0;
  CRYPTO_free(penc);
LAB_004db809:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar2;
}

