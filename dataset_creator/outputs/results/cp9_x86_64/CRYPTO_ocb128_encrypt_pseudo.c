
undefined8 CRYPTO_ocb128_encrypt(undefined8 *param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong *puVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  undefined1 local_58 [16];
  long local_40;
  
  uVar11 = param_1[0xd];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = uVar11 + (param_4 >> 4);
  if ((param_4 < 0x10) || (param_1[4] == 0)) {
    while (uVar11 = uVar11 + 1, uVar11 <= uVar1) {
      iVar9 = 0;
      uVar8 = uVar11;
      if ((uVar11 & 1) == 0) {
        do {
          uVar8 = uVar8 >> 1;
          iVar9 = iVar9 + 1;
        } while ((uVar8 & 1) == 0);
        puVar7 = (ulong *)ocb_lookup_l(param_1,iVar9);
      }
      else {
        puVar7 = (ulong *)ocb_lookup_l(param_1,0);
      }
      if (puVar7 == (ulong *)0x0) goto LAB_00427ede;
      uVar8 = param_1[0x12];
      uVar2 = *puVar7;
      uVar3 = param_1[0x13];
      uVar4 = puVar7[1];
      param_1[0x12] = uVar8 ^ uVar2;
      param_1[0x13] = uVar3 ^ uVar4;
      uVar5 = param_2[1];
      local_58._0_8_ = *param_2;
      param_1[0x14] = param_1[0x14] ^ local_58._0_8_;
      local_58._8_8_ = uVar3 ^ uVar4 ^ uVar5;
      param_1[0x15] = param_1[0x15] ^ uVar5;
      local_58._0_8_ = local_58._0_8_ ^ uVar8 ^ uVar2;
      (*(code *)*param_1)(local_58,local_58,param_1[2]);
      local_58._0_8_ = local_58._0_8_ ^ param_1[0x12];
      local_58._8_8_ = local_58._8_8_ ^ param_1[0x13];
      *param_3 = local_58._0_8_;
      param_3[1] = local_58._8_8_;
      param_3 = param_3 + 2;
      param_2 = param_2 + 2;
    }
  }
  else {
    lVar10 = 0;
    uVar11 = uVar1;
    while (uVar11 = uVar11 >> 1, uVar11 != 0) {
      lVar10 = lVar10 + 1;
    }
    lVar10 = ocb_lookup_l(param_1,lVar10);
    if (lVar10 == 0) {
LAB_00427ede:
      uVar6 = 0;
      goto LAB_00427de1;
    }
    (*(code *)param_1[4])
              (param_2,param_3,param_4 >> 4,param_1[2],param_1[0xd] + 1,param_1 + 0x12,param_1[0xb],
               param_1 + 0x14);
  }
  uVar11 = (ulong)((uint)param_4 & 0xf);
  if ((param_4 & 0xf) != 0) {
    param_1[0x12] = param_1[0x12] ^ param_1[7];
    param_1[0x13] = param_1[0x13] ^ param_1[8];
    (*(code *)*param_1)(param_1 + 0x12,local_58,param_1[2]);
    uVar8 = 0;
    do {
      *(byte *)((long)param_3 + uVar8) = *(byte *)((long)param_2 + uVar8) ^ local_58[uVar8];
      uVar8 = uVar8 + 1;
    } while (uVar11 != uVar8);
    local_58 = (undefined1  [16])0x0;
    __memcpy_chk(local_58,param_2,uVar11,0x10);
    local_58[uVar11] = 0x80;
    param_1[0x14] = param_1[0x14] ^ local_58._0_8_;
    param_1[0x15] = param_1[0x15] ^ local_58._8_8_;
  }
  param_1[0xd] = uVar1;
  uVar6 = 1;
LAB_00427de1:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar6;
}

