
int uint64_c2i(long *param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5,
              long param_6)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long in_FS_OFFSET;
  undefined8 local_50 [2];
  int local_3c;
  long local_38;
  long local_30;
  
  plVar3 = (long *)*param_1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_3c = 0;
  local_38 = 0;
  local_50[0] = param_2;
  if (plVar3 == (long *)0x0) {
    plVar3 = (long *)CRYPTO_zalloc(8,"../crypto/asn1/x_int64.c",0x1f);
    *param_1 = (long)plVar3;
    if (plVar3 == (long *)0x0) {
      ERR_new();
      iVar1 = 0;
      ERR_set_debug("../crypto/asn1/x_int64.c",0x20,"uint64_new");
      ERR_set_error(0xd,0xc0100,0);
      goto LAB_004a643a;
    }
  }
  lVar2 = local_38;
  if (param_3 != 0) {
    iVar1 = ossl_c2i_uint64_int(&local_38,&local_3c,local_50,(long)param_3);
    if (iVar1 == 0) goto LAB_004a643a;
    lVar2 = local_38;
    if ((*(byte *)(param_6 + 0x28) & 2) == 0) {
      if (local_3c != 0) {
        ERR_new();
        iVar1 = 0;
        ERR_set_debug("../crypto/asn1/x_int64.c",0x61,__func___5);
        ERR_set_error(0xd,0xe2,0);
        goto LAB_004a643a;
      }
    }
    else if (local_3c == 0) {
      if (local_38 < 0) {
        ERR_new();
        ERR_set_debug("../crypto/asn1/x_int64.c",0x66,__func___5);
        ERR_set_error(0xd,0xdf,0);
        iVar1 = 0;
        goto LAB_004a643a;
      }
    }
    else {
      lVar2 = -local_38;
    }
  }
  *plVar3 = lVar2;
  iVar1 = 1;
LAB_004a643a:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar1;
}

