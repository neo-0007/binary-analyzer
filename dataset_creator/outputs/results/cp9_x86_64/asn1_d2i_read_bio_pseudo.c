
ulong asn1_d2i_read_bio(BIO *param_1,undefined8 *param_2)

{
  size_t len;
  int iVar1;
  uint uVar2;
  uint uVar3;
  BUF_MEM *str;
  ulong uVar4;
  undefined4 extraout_var;
  ulong uVar5;
  ulong uVar6;
  undefined4 extraout_var_00;
  undefined8 uVar7;
  ulong uVar8;
  int iVar9;
  uchar *puVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  bool bVar12;
  ulong local_78;
  int local_58;
  int local_54;
  uchar *local_50;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  str = BUF_MEM_new();
  if (str != (BUF_MEM *)0x0) {
    uVar5 = 0;
    uVar4 = 0;
    iVar9 = 0;
    ERR_set_mark();
LAB_0049be2f:
    uVar8 = uVar5 - uVar4;
    if (8 < uVar8) goto LAB_0049bf0d;
LAB_0049be3f:
    len = uVar4 + 8;
    if ((uVar5 <= len) && (iVar1 = BUF_MEM_grow_clean(str,len), CONCAT44(extraout_var,iVar1) != 0))
    {
      iVar1 = BIO_read(param_1,str->data + uVar5,(int)len - (int)uVar5);
      if ((iVar1 < 0) && (uVar8 == 0)) {
        ERR_new();
        uVar7 = 0x8e;
LAB_0049bfe1:
        ERR_set_debug("../crypto/asn1/a_d2i_fp.c",uVar7,"asn1_d2i_read_bio");
        ERR_set_error(0xd,0x8e,0);
        goto LAB_0049c000;
      }
      if (0 < iVar1) {
        bVar12 = CARRY8((long)iVar1,uVar5);
        uVar5 = (long)iVar1 + uVar5;
        if (bVar12) {
          ERR_new();
          uVar7 = 0x93;
          goto LAB_0049c18f;
        }
        uVar8 = uVar5 - uVar4;
      }
      puVar10 = (uchar *)(str->data + uVar4);
      local_50 = puVar10;
      if (uVar8 != 0) goto LAB_0049beb9;
      goto LAB_0049c000;
    }
    ERR_new();
    uVar7 = 0x89;
    goto LAB_0049c0f9;
  }
  ERR_new();
  ERR_set_debug("../crypto/asn1/a_d2i_fp.c",0x7e,"asn1_d2i_read_bio");
  ERR_set_error(0xd,0xc0100,0);
  uVar4 = 0xffffffff;
LAB_0049bdf9:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
LAB_0049beb9:
  while( true ) {
    local_50 = puVar10;
    uVar2 = ASN1_get_object(&local_50,(long *)&local_48,&local_58,&local_54,uVar8);
    if ((uVar2 & 0x80) != 0) {
      uVar8 = ERR_peek_last_error();
      uVar3 = (uint)uVar8 & 0x7fffffff;
      if ((uVar8 & 0x80000000) == 0) {
        uVar3 = (uint)uVar8 & 0x7fffff;
      }
      if (uVar3 != 0x9b) goto LAB_0049c000;
      ERR_pop_to_mark();
    }
    uVar4 = uVar4 + (long)((int)local_50 - (int)puVar10);
    if ((uVar2 & 1) == 0) {
      if ((iVar9 != 0) && (local_48 == 0)) {
        if ((local_58 != 0) || (iVar9 = iVar9 + -1, iVar9 != 0)) goto LAB_0049be2f;
        goto LAB_0049bf45;
      }
      if (local_48 <= uVar5 - uVar4) goto LAB_0049bf77;
      uVar8 = (uVar4 + local_48) - uVar5;
      if ((uVar8 < 0x80000000) && (uVar5 <= uVar4 + local_48)) {
        local_78 = 0x4000;
        goto joined_r0x0049c052;
      }
      ERR_new();
      uVar7 = 0xc4;
      goto LAB_0049c18f;
    }
    if (iVar9 == -1) {
      ERR_new();
      ERR_set_debug("../crypto/asn1/a_d2i_fp.c",0xaf,"asn1_d2i_read_bio");
      ERR_set_error(0xd,0x7b,0);
      goto LAB_0049c000;
    }
    iVar9 = iVar9 + 1;
    uVar8 = uVar5 - uVar4;
    if (uVar8 < 9) break;
LAB_0049bf0d:
    puVar10 = (uchar *)(str->data + uVar4);
  }
  goto LAB_0049be3f;
joined_r0x0049c052:
  if (uVar8 != 0) {
    uVar6 = uVar8;
    if (local_78 <= uVar8) {
      uVar6 = local_78;
    }
    iVar1 = BUF_MEM_grow_clean(str,uVar6 + uVar5);
    uVar11 = uVar6;
    if (CONCAT44(extraout_var_00,iVar1) != 0) goto LAB_0049c090;
    ERR_new();
    uVar7 = 0xd1;
LAB_0049c0f9:
    ERR_set_debug("../crypto/asn1/a_d2i_fp.c",uVar7,"asn1_d2i_read_bio");
    ERR_set_error(0xd,0xc0100,0);
    goto LAB_0049c000;
  }
LAB_0049bf77:
  bVar12 = CARRY8(local_48,uVar4);
  uVar4 = local_48 + uVar4;
  if (bVar12) {
    ERR_new();
    uVar7 = 0xe7;
    goto LAB_0049c18f;
  }
  if (iVar9 == 0) goto LAB_0049bf45;
  goto LAB_0049be2f;
LAB_0049bf45:
  if (uVar4 < 0x80000000) {
    *param_2 = str;
    uVar4 = uVar4 & 0xffffffff;
  }
  else {
    ERR_new();
    uVar7 = 0xf3;
LAB_0049c18f:
    ERR_set_debug("../crypto/asn1/a_d2i_fp.c",uVar7,"asn1_d2i_read_bio");
    ERR_set_error(0xd,0x9b,0);
LAB_0049c000:
    ERR_clear_last_mark();
    BUF_MEM_free(str);
    uVar4 = 0xffffffff;
  }
  goto LAB_0049bdf9;
LAB_0049c090:
  do {
    iVar1 = BIO_read(param_1,str->data + uVar5,(int)uVar11);
    if (iVar1 < 1) {
      ERR_new();
      uVar7 = 0xd8;
      goto LAB_0049bfe1;
    }
    uVar5 = uVar5 + (long)iVar1;
    uVar11 = uVar11 - (long)iVar1;
  } while (uVar11 != 0);
  uVar11 = local_78 * 2;
  if (0x3ffffffe < local_78) {
    uVar11 = local_78;
  }
  uVar8 = uVar8 - uVar6;
  local_78 = uVar11;
  goto joined_r0x0049c052;
}

