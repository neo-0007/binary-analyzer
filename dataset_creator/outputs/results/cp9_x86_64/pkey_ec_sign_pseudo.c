
int pkey_ec_sign(long param_1,uchar *param_2,ulong *param_3,uchar *param_4,int param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  EC_KEY *eckey;
  ulong uVar4;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  lVar1 = *(long *)(param_1 + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  eckey = (EC_KEY *)EVP_PKEY_get0_EC_KEY(*(undefined8 *)(param_1 + 0x88));
  iVar2 = ECDSA_size(eckey);
  iVar3 = 0;
  if (iVar2 < 1) goto LAB_004e91f2;
  uVar4 = (ulong)iVar2;
  if (param_2 != (uchar *)0x0) {
    if (*param_3 < uVar4) {
      ERR_new();
      ERR_set_debug("../crypto/ec/ec_pmeth.c",0x82,"pkey_ec_sign");
      ERR_set_error(0x10,100,0);
      iVar3 = 0;
      goto LAB_004e91f2;
    }
    lVar1 = *(long *)(lVar1 + 8);
    iVar2 = 0x40;
    if (lVar1 != 0) {
      iVar2 = EVP_MD_get_type(lVar1);
    }
    iVar3 = ECDSA_sign(iVar2,param_4,param_5,param_2,&local_44,eckey);
    if (iVar3 < 1) goto LAB_004e91f2;
    uVar4 = (ulong)local_44;
  }
  *param_3 = uVar4;
  iVar3 = 1;
LAB_004e91f2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

