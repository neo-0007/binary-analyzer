
undefined4
FUN_004555d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  char *pcVar9;
  undefined8 uVar10;
  long in_FS_OFFSET;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0 [20];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_13c = 0;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  lVar4 = FUN_0043bf50(*param_1);
  if (lVar4 != 0) {
    iVar2 = FUN_00557040(lVar4,&local_138,&local_130,&local_128,&local_120);
    FUN_004ab560(lVar4);
    uVar10 = local_130;
    if (0 < iVar2) {
      uVar5 = thunk_FUN_007129d0(local_130);
      if (uVar5 < 0xb) {
LAB_00455693:
        uVar10 = local_138;
        ppuVar8 = &PTR_s_PRIVATE_KEY_008f2080;
        pcVar9 = "ENCRYPTED PRIVATE KEY";
        lVar4 = 0;
        while (iVar2 = thunk_FUN_00712780(uVar10,pcVar9), iVar2 != 0) {
          lVar4 = lVar4 + 1;
          if (lVar4 == 0x10) {
            uVar3 = 1;
            goto LAB_004556d8;
          }
          pcVar9 = *ppuVar8;
          ppuVar8 = ppuVar8 + 4;
        }
        puVar1 = (&PTR_s_EncryptedPrivateKeyInfo_008f2078)[lVar4 * 4];
        local_13c = (&DAT_008f2068)[lVar4 * 8];
        if ((&DAT_008f2070)[lVar4 * 4] == 0) {
          puVar6 = &local_108;
        }
        else {
          puVar6 = local_e0;
          FUN_0041e290(&local_178,"data-type",(&DAT_008f2070)[lVar4 * 4],0);
          local_e8 = local_158;
          local_108 = local_178;
          uStack_100 = uStack_170;
          local_f8 = local_168;
          uStack_f0 = uStack_160;
        }
        puVar7 = puVar6;
        if (puVar1 != (undefined *)0x0) {
          puVar7 = puVar6 + 5;
          FUN_0041e290(&local_178,"data-structure",puVar1,0);
          *puVar6 = local_178;
          puVar6[1] = uStack_170;
          puVar6[2] = local_168;
          puVar6[3] = uStack_160;
          puVar6[4] = local_158;
        }
        FUN_0041e2e0(&local_178,"data",local_128,local_120);
        *puVar7 = local_178;
        puVar7[1] = uStack_170;
        puVar7[2] = local_168;
        puVar7[3] = uStack_160;
        puVar7[4] = local_158;
        FUN_0041cea0(&local_178,"type",&local_13c);
        puVar7[5] = local_178;
        puVar7[6] = uStack_170;
        puVar7[7] = local_168;
        puVar7[8] = uStack_160;
        puVar7[9] = local_158;
        FUN_0041e470(&local_178);
        puVar7[10] = local_178;
        puVar7[0xb] = uStack_170;
        puVar7[0xc] = local_168;
        puVar7[0xd] = uStack_160;
        puVar7[0xe] = local_158;
        uVar3 = (*param_4)(&local_108,param_5);
        uVar10 = local_138;
      }
      else {
        local_110 = param_7;
        local_118 = param_6;
        iVar2 = FUN_00555740(uVar10,&local_108);
        if ((iVar2 != 0) &&
           (iVar2 = FUN_005554c0(&local_108,local_128,&local_120,FUN_00455520,&local_118),
           iVar2 != 0)) goto LAB_00455693;
        uVar3 = 0;
        uVar10 = local_138;
      }
LAB_004556d8:
      FUN_0041ad60(uVar10,"../providers/implementations/encode_decode/decode_pem2der.c",0xd0);
      FUN_0041ad60(local_130,"../providers/implementations/encode_decode/decode_pem2der.c",0xd1);
      FUN_0041ad60(local_128,"../providers/implementations/encode_decode/decode_pem2der.c",0xd2);
      goto LAB_00455713;
    }
  }
  uVar3 = 1;
LAB_00455713:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar3;
}

