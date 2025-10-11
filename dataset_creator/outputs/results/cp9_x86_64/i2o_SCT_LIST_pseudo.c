
ulong i2o_SCT_LIST(undefined8 param_1,long *param_2)

{
  bool bVar1;
  ushort *puVar2;
  int iVar3;
  uint num;
  undefined8 uVar4;
  void *pvVar5;
  ulong uVar6;
  int iVar7;
  long in_FS_OFFSET;
  ushort *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (ushort *)0x0;
  if (param_2 == (long *)0x0) {
    bVar1 = false;
  }
  else {
    pvVar5 = (void *)*param_2;
    bVar1 = false;
    if (pvVar5 == (void *)0x0) {
      num = i2o_SCT_LIST(param_1,0);
      uVar6 = (ulong)num;
      if (num == 0xffffffff) {
        ERR_new();
        ERR_set_debug("../crypto/ct/ct_oct.c",0x14a,"i2o_SCT_LIST");
        ERR_set_error(0x32,0x69,0);
        goto LAB_0061fbc9;
      }
      pvVar5 = CRYPTO_malloc(num,"../crypto/ct/ct_oct.c",0x14d);
      *param_2 = (long)pvVar5;
      if (pvVar5 == (void *)0x0) {
        ERR_new();
        ERR_set_debug("../crypto/ct/ct_oct.c",0x14e,"i2o_SCT_LIST");
        uVar6 = 0xffffffff;
        ERR_set_error(0x32,0xc0100,0);
        goto LAB_0061fbc9;
      }
      bVar1 = true;
    }
    local_48 = (ushort *)((long)pvVar5 + 2);
  }
  uVar6 = 2;
  iVar7 = 0;
  while( true ) {
    iVar3 = OPENSSL_sk_num(param_1);
    puVar2 = local_48;
    if (iVar3 <= iVar7) break;
    if (param_2 == (long *)0x0) {
      uVar4 = OPENSSL_sk_value(param_1,iVar7);
      iVar3 = i2o_SCT(uVar4,0);
      if (iVar3 == -1) goto LAB_0061fbbb;
    }
    else {
      local_48 = local_48 + 1;
      uVar4 = OPENSSL_sk_value(param_1,iVar7);
      iVar3 = i2o_SCT(uVar4,&local_48);
      if (iVar3 == -1) goto LAB_0061fbbb;
      *puVar2 = (ushort)iVar3 << 8 | (ushort)iVar3 >> 8;
    }
    iVar7 = iVar7 + 1;
    uVar6 = uVar6 + (long)(iVar3 + 2);
  }
  if (uVar6 < 0x10000) {
    if (param_2 != (long *)0x0) {
      local_48 = (ushort *)*param_2;
      *(char *)local_48 = (char)(uVar6 - 2 >> 8);
      *(char *)((long)local_48 + 1) = (char)uVar6 + -2;
      if (!bVar1) {
        *param_2 = *param_2 + uVar6;
      }
    }
    uVar6 = uVar6 & 0xffffffff;
  }
  else {
LAB_0061fbbb:
    uVar6 = 0xffffffff;
    if (bVar1) {
      CRYPTO_free((void *)*param_2);
      *param_2 = 0;
    }
  }
LAB_0061fbc9:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

