
undefined4 ecx_priv_encode(PKCS8_PRIV_KEY_INFO *param_1,long param_2)

{
  uchar *puVar1;
  int iVar2;
  int iVar3;
  ASN1_OBJECT *aobj;
  undefined4 uVar4;
  long in_FS_OFFSET;
  uchar *local_50;
  ASN1_OCTET_STRING local_48;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (uchar *)0x0;
  if ((*(long *)(param_2 + 0x20) == 0) ||
     (puVar1 = *(uchar **)(*(long *)(param_2 + 0x20) + 0x50), puVar1 == (uchar *)0x0)) {
    ERR_new();
    uVar4 = 0;
    ERR_set_debug("../crypto/ec/ecx_meth.c",0x6c,"ecx_priv_encode");
    ERR_set_error(0x10,0x7b,0);
  }
  else {
    iVar2 = **(int **)(param_2 + 8);
    if ((iVar2 == 0x40a) || (iVar2 == 0x43f)) {
      local_48.length = 0x20;
    }
    else {
      local_48.length = (iVar2 != 0x40b) + 0x38;
    }
    local_48.flags = 0;
    local_48.data = puVar1;
    iVar2 = i2d_ASN1_OCTET_STRING(&local_48,&local_50);
    puVar1 = local_50;
    if (iVar2 < 0) {
      ERR_new();
      uVar4 = 0;
      ERR_set_debug("../crypto/ec/ecx_meth.c",0x76,"ecx_priv_encode");
      ERR_set_error(0x10,0xc0100,0);
    }
    else {
      aobj = OBJ_nid2obj(**(int **)(param_2 + 8));
      iVar3 = PKCS8_pkey_set0(param_1,aobj,0,-1,(void *)0x0,puVar1,iVar2);
      if (iVar3 == 0) {
        CRYPTO_clear_free(local_50,(long)iVar2,"../crypto/ec/ecx_meth.c",0x7c);
        ERR_new();
        ERR_set_debug("../crypto/ec/ecx_meth.c",0x7d,"ecx_priv_encode");
        ERR_set_error(0x10,0xc0100,0);
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

