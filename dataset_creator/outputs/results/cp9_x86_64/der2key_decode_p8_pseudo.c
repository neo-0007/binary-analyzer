
undefined8 der2key_decode_p8(uchar **param_1,long param_2,undefined8 *param_3,code *param_4)

{
  int iVar1;
  PKCS8_PRIV_KEY_INFO *p8;
  undefined8 uVar2;
  long in_FS_OFFSET;
  X509_ALGOR *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (X509_ALGOR *)0x0;
  p8 = d2i_PKCS8_PRIV_KEY_INFO((PKCS8_PRIV_KEY_INFO **)0x0,param_1,param_2);
  if (p8 != (PKCS8_PRIV_KEY_INFO *)0x0) {
    iVar1 = PKCS8_pkey_get0((ASN1_OBJECT **)0x0,(uchar **)0x0,(int *)0x0,&local_28,p8);
    if (iVar1 != 0) {
      iVar1 = OBJ_obj2nid(local_28->algorithm);
      if (iVar1 == *(int *)(param_3[1] + 0x18)) {
        uVar2 = ossl_prov_ctx_get0_libctx(*param_3);
        uVar2 = (*param_4)(p8,uVar2,0);
        goto LAB_004513f9;
      }
    }
  }
  uVar2 = 0;
LAB_004513f9:
  PKCS8_PRIV_KEY_INFO_free(p8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

