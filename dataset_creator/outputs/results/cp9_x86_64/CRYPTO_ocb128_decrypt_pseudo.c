
undefined8 CRYPTO_ocb128_decrypt(undefined8 *param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  undefined1 local_58 [16];
  long local_40;
  
  uVar10 = param_1[0xd];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = uVar10 + (param_4 >> 4);
  if ((param_4 < 0x10) || (param_1[4] == 0)) {
    while (uVar10 = uVar10 + 1, uVar10 <= uVar1) {
      iVar8 = 0;
      uVar7 = uVar10;
      if ((uVar10 & 1) == 0) {
        do {
          uVar7 = uVar7 >> 1;
          iVar8 = iVar8 + 1;
        } while ((uVar7 & 1) == 0);
        puVar6 = (ulong *)ocb_lookup_l(param_1,iVar8);
      }
      else {
        puVar6 = (ulong *)ocb_lookup_l(param_1,0);
      }
      if (puVar6 == (ulong *)0x0) goto LAB_0042813e;
      uVar7 = param_1[0x12];
      uVar2 = *puVar6;
      uVar3 = param_1[0x13];
      uVar4 = puVar6[1];
      param_1[0x12] = uVar7 ^ uVar2;
      param_1[0x13] = uVar3 ^ uVar4;
      local_58._0_8_ = uVar7 ^ uVar2 ^ *param_2;
      local_58._8_8_ = uVar3 ^ uVar4 ^ param_2[1];
      (*(code *)param_1[1])(local_58,local_58,param_1[3]);
      local_58._0_8_ = param_1[0x12] ^ local_58._0_8_;
      local_58._8_8_ = param_1[0x13] ^ local_58._8_8_;
      param_1[0x14] = param_1[0x14] ^ local_58._0_8_;
      param_1[0x15] = param_1[0x15] ^ local_58._8_8_;
      *param_3 = local_58._0_8_;
      param_3[1] = local_58._8_8_;
      param_3 = param_3 + 2;
      param_2 = param_2 + 2;
    }
  }
  else {
    lVar9 = 0;
    uVar10 = uVar1;
    while (uVar10 = uVar10 >> 1, uVar10 != 0) {
      lVar9 = lVar9 + 1;
    }
    lVar9 = ocb_lookup_l(param_1,lVar9);
    if (lVar9 == 0) {
LAB_0042813e:
      uVar5 = 0;
      goto LAB_00428031;
    }
    (*(code *)param_1[4])
              (param_2,param_3,param_4 >> 4,param_1[3],param_1[0xd] + 1,param_1 + 0x12,param_1[0xb],
               param_1 + 0x14);
  }
  uVar10 = (ulong)((uint)param_4 & 0xf);
  if ((param_4 & 0xf) != 0) {
    param_1[0x12] = param_1[0x12] ^ param_1[7];
    param_1[0x13] = param_1[0x13] ^ param_1[8];
    (*(code *)*param_1)(param_1 + 0x12,local_58,param_1[2]);
    uVar7 = 0;
    do {
      *(byte *)((long)param_3 + uVar7) = *(byte *)((long)param_2 + uVar7) ^ local_58[uVar7];
      uVar7 = uVar7 + 1;
    } while (uVar10 != uVar7);
    local_58 = (undefined1  [16])0x0;
    __memcpy_chk(local_58,param_3,uVar10,0x10);
    local_58[uVar10] = 0x80;
    param_1[0x14] = param_1[0x14] ^ local_58._0_8_;
    param_1[0x15] = param_1[0x15] ^ local_58._8_8_;
  }
  param_1[0xd] = uVar1;
  uVar5 = 1;
LAB_00428031:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar5;
}

