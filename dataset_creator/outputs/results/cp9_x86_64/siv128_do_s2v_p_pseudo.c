
undefined8 siv128_do_s2v_p(ulong *param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  long local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0x10;
  lVar3 = EVP_MAC_CTX_dup(param_1[6]);
  if (lVar3 == 0) {
    uVar4 = 0;
    goto LAB_0053db3b;
  }
  if (param_4 < 0x10) {
    local_58 = (undefined1  [16])0x0;
    uVar4 = __memcpy_chk(local_58,param_3,param_4,0x10);
    uVar6 = param_1[1];
    local_58[param_4] = 0x80;
    uVar7 = *param_1;
    uVar1 = (uVar6 >> 0x38 | (uVar6 & 0xff000000000000) >> 0x28 | (uVar6 & 0xff0000000000) >> 0x18 |
             (uVar6 & 0xff00000000) >> 8 | (uVar6 & 0xff000000) << 8 | (uVar6 & 0xff0000) << 0x18 |
             (uVar6 & 0xff00) << 0x28 | uVar6 << 0x38) * 2;
    uVar5 = uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 | (uVar7 & 0xff0000000000) >> 0x18 |
            (uVar7 & 0xff00000000) >> 8 | (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18 |
            (uVar7 & 0xff00) << 0x28 | uVar7 << 0x38;
    uVar7 = uVar5 * 2;
    uVar5 = (uint)((long)uVar5 >> 0x3f) & 0x87 ^ uVar1;
    uVar7 = uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 | (uVar7 & 0xff0000000000) >> 0x18 |
            (uVar7 & 0xff00000000) >> 8 | (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18 |
            (uVar7 & 0xff00) << 0x28 | ((uVar6 << 0x38) >> 0x3f | uVar7) << 0x38;
    *param_1 = uVar7;
    uVar6 = uVar1 >> 0x38 | (uVar5 & 0xff000000000000) >> 0x28 | (uVar5 & 0xff0000000000) >> 0x18 |
            (uVar5 & 0xff00000000) >> 8 | (uVar5 & 0xff000000) << 8 | (uVar5 & 0xff0000) << 0x18 |
            (uVar5 & 0xff00) << 0x28 | uVar5 << 0x38;
    param_1[1] = uVar6;
    local_58._8_8_ = local_58._8_8_ ^ uVar6;
    local_58._0_8_ = local_58._0_8_ ^ uVar7;
    iVar2 = EVP_MAC_update(lVar3,uVar4,0x10);
    if (iVar2 == 0) goto LAB_0053db30;
LAB_0053db01:
    iVar2 = EVP_MAC_final(lVar3,param_2,&local_60,0x10);
    if ((iVar2 == 0) || (local_60 != 0x10)) goto LAB_0053db30;
    uVar4 = 1;
  }
  else {
    iVar2 = EVP_MAC_update(lVar3,param_3,param_4 - 0x10);
    if (iVar2 != 0) {
      local_58._8_8_ = *(ulong *)(param_3 + 8 + (param_4 - 0x10)) ^ param_1[1];
      local_58._0_8_ = *(ulong *)(param_3 + -0x10 + param_4) ^ *param_1;
      iVar2 = EVP_MAC_update(lVar3,local_58,0x10);
      if (iVar2 != 0) goto LAB_0053db01;
    }
LAB_0053db30:
    uVar4 = 0;
  }
  EVP_MAC_CTX_free(lVar3);
LAB_0053db3b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar4;
}

