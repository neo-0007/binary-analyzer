
undefined8
uint32_c2i(long *param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5,
          long param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  undefined8 local_50 [2];
  int local_3c;
  ulong local_38;
  long local_30;
  
  puVar3 = (undefined4 *)*param_1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_3c = 0;
  local_38 = 0;
  local_50[0] = param_2;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)CRYPTO_zalloc(8,"../crypto/asn1/x_int64.c",0x1f);
    *param_1 = (long)puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/asn1/x_int64.c",0x20,"uint64_new");
      ERR_set_error(0xd,0xc0100,0);
      uVar2 = 0;
      goto LAB_004a65e9;
    }
  }
  uVar1 = local_38;
  if (param_3 != 0) {
    uVar2 = ossl_c2i_uint64_int(&local_38,&local_3c,local_50,(long)param_3);
    if ((int)uVar2 == 0) goto LAB_004a65e9;
    uVar1 = local_38;
    if ((*(byte *)(param_6 + 0x28) & 2) == 0) {
      if (local_3c != 0) {
        ERR_new();
        ERR_set_debug("../crypto/asn1/x_int64.c",200,__func___10);
        ERR_set_error(0xd,0xe2,0);
        uVar2 = 0;
        goto LAB_004a65e9;
      }
      if (local_38 >> 0x20 != 0) goto LAB_004a667a;
    }
    else if (local_3c == 0) {
      if (0x7fffffff < local_38) {
LAB_004a667a:
        ERR_new();
        ERR_set_debug("../crypto/asn1/x_int64.c",0xd4,__func___10);
        ERR_set_error(0xd,0xdf,0);
        uVar2 = 0;
        goto LAB_004a65e9;
      }
    }
    else {
      if (0x80000000 < local_38) {
        ERR_new();
        ERR_set_debug("../crypto/asn1/x_int64.c",0xcd,__func___10);
        ERR_set_error(0xd,0xe0,0);
        uVar2 = 0;
        goto LAB_004a65e9;
      }
      uVar1 = -local_38;
    }
  }
  *puVar3 = (int)uVar1;
  uVar2 = 1;
LAB_004a65e9:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar2;
}

