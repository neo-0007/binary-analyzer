
void DES_ede3_cbc_encrypt
               (uchar *input,uchar *output,long length,DES_key_schedule *ks1,DES_key_schedule *ks2,
               DES_key_schedule *ks3,DES_cblock *ivec,int enc)

{
  uint *puVar1;
  byte *pbVar2;
  uint *puVar3;
  uchar uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uchar *puVar8;
  uchar uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  uint *local_80;
  uchar *local_70;
  uint local_48;
  uint uStack_44;
  long local_40;
  
  uVar12 = length - 8;
  uVar10 = *(uint *)*ivec;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = *(uint *)(*ivec + 4);
  local_70 = output;
  if (enc == 0) {
    local_80 = (uint *)input;
    if (-1 < (long)uVar12) {
      lVar11 = (uVar12 >> 3) * 8 + 8;
      local_80 = (uint *)(input + lVar11);
      puVar8 = output;
      uVar6 = uVar10;
      uVar7 = uVar5;
      do {
        uVar10 = *(uint *)input;
        uVar5 = *(uint *)((long)input + 4);
        input = (uchar *)((long)input + 8);
        local_48 = uVar10;
        uStack_44 = uVar5;
        DES_decrypt3(&local_48,ks1,ks2,ks3);
        uVar6 = local_48 ^ uVar6;
        uVar7 = uStack_44 ^ uVar7;
        *puVar8 = (uchar)uVar6;
        puVar8[1] = (uchar)(uVar6 >> 8);
        puVar8[3] = (uchar)(uVar6 >> 0x18);
        puVar8[4] = (uchar)uVar7;
        puVar8[2] = (uchar)(uVar6 >> 0x10);
        puVar8[5] = (uchar)(uVar7 >> 8);
        puVar8[6] = (uchar)(uVar7 >> 0x10);
        puVar8[7] = (uchar)(uVar7 >> 0x18);
        puVar8 = puVar8 + 8;
        uVar6 = uVar10;
        uVar7 = uVar5;
      } while ((uint *)input != local_80);
      local_70 = output + lVar11;
      uVar12 = length + -0x10 + (uVar12 >> 3) * -8;
    }
    uVar6 = uVar10;
    uVar7 = uVar5;
    if (uVar12 != 0xfffffffffffffff8) {
      uVar6 = *local_80;
      uVar7 = local_80[1];
      local_48 = uVar6;
      uStack_44 = uVar7;
      DES_decrypt3(&local_48,ks1,ks2,ks3);
      uVar10 = uVar10 ^ local_48;
      uVar5 = uVar5 ^ uStack_44;
      local_70 = local_70 + uVar12 + 8;
      puVar8 = local_70;
      switch(uVar12) {
      default:
        goto switchD_004c52ae_default;
      case 0xfffffffffffffff9:
        goto switchD_004c52ae_caseD_fffffff9;
      case 0xfffffffffffffffa:
        goto LAB_004c50c3;
      case 0xfffffffffffffffb:
        goto switchD_004c52ae_caseD_fffffffb;
      case 0xfffffffffffffffc:
        break;
      case 0xffffffffffffffff:
        local_70 = local_70 + -1;
        *local_70 = (uchar)(uVar5 >> 0x10);
      case 0xfffffffffffffffe:
        local_70[-1] = (uchar)(uVar5 >> 8);
        local_70 = local_70 + -1;
      case 0xfffffffffffffffd:
        local_70[-1] = (uchar)uVar5;
        local_70 = local_70 + -1;
      }
      puVar8 = local_70 + -1;
      local_70[-1] = (uchar)(uVar10 >> 0x18);
switchD_004c52ae_caseD_fffffffb:
      local_70 = puVar8 + -1;
      puVar8[-1] = (uchar)(uVar10 >> 0x10);
LAB_004c50c3:
      local_70[-1] = (uchar)(uVar10 >> 8);
      local_70 = local_70 + -1;
switchD_004c52ae_caseD_fffffff9:
      local_70[-1] = (uchar)uVar10;
    }
switchD_004c52ae_default:
    uVar9 = (uchar)(uVar6 >> 0x18);
    uVar4 = (uchar)(uVar7 >> 0x18);
    goto LAB_004c50ef;
  }
  if (-1 < (long)uVar12) {
    lVar11 = (uVar12 >> 3) * 8 + 8;
    puVar3 = (uint *)(input + lVar11);
    puVar8 = output;
    uStack_44 = uVar5;
    local_48 = uVar10;
    do {
      uVar10 = *(uint *)input;
      puVar1 = (uint *)((long)input + 4);
      input = (uchar *)((long)input + 8);
      local_48 = local_48 ^ uVar10;
      uStack_44 = uStack_44 ^ *puVar1;
      DES_encrypt3(&local_48,ks1,ks2,ks3);
      *puVar8 = (uchar)local_48;
      puVar8[1] = (uchar)(local_48 >> 8);
      puVar8[2] = (uchar)(local_48 >> 0x10);
      puVar8[4] = (uchar)uStack_44;
      puVar8[3] = (uchar)(local_48 >> 0x18);
      puVar8[5] = (uchar)(uStack_44 >> 8);
      puVar8[6] = (uchar)(uStack_44 >> 0x10);
      puVar8[7] = (uchar)(uStack_44 >> 0x18);
      puVar8 = puVar8 + 8;
    } while (puVar3 != (uint *)input);
    local_70 = output + lVar11;
    uVar12 = length + -0x10 + (uVar12 >> 3) * -8;
    uVar10 = local_48;
    uVar5 = uStack_44;
  }
  uVar6 = uVar10;
  uVar7 = uVar5;
  if (uVar12 == 0xfffffffffffffff8) goto switchD_004c52ae_default;
  lVar11 = (long)input + uVar12 + 8;
  switch(uVar12) {
  default:
    goto switchD_004c508f_default;
  case 0xfffffffffffffff9:
    uVar6 = 0;
    goto LAB_004c5303;
  case 0xfffffffffffffffa:
    uVar6 = 0;
    goto LAB_004c52f5;
  case 0xfffffffffffffffb:
    uVar6 = 0;
    goto LAB_004c52e5;
  case 0xfffffffffffffffc:
    goto LAB_004c52d8;
  case 0xfffffffffffffffd:
    uVar6 = 0;
    goto LAB_004c52ca;
  case 0xfffffffffffffffe:
    uVar6 = 0;
    break;
  case 0xffffffffffffffff:
    pbVar2 = (byte *)(lVar11 + -1);
    lVar11 = lVar11 + -1;
    uVar6 = (uint)*pbVar2 << 0x10;
  }
  pbVar2 = (byte *)(lVar11 + -1);
  lVar11 = lVar11 + -1;
  uVar6 = (uint)*pbVar2 << 8 | uVar6;
LAB_004c52ca:
  pbVar2 = (byte *)(lVar11 + -1);
  lVar11 = lVar11 + -1;
  uVar5 = uVar5 ^ (uVar6 | *pbVar2);
LAB_004c52d8:
  pbVar2 = (byte *)(lVar11 + -1);
  lVar11 = lVar11 + -1;
  uVar6 = (uint)*pbVar2 << 0x18;
LAB_004c52e5:
  pbVar2 = (byte *)(lVar11 + -1);
  lVar11 = lVar11 + -1;
  uVar6 = (uint)*pbVar2 << 0x10 | uVar6;
LAB_004c52f5:
  uVar6 = (uint)*(byte *)(lVar11 + -1) << 8 | uVar6;
  lVar11 = lVar11 + -1;
LAB_004c5303:
  uVar10 = uVar10 ^ (uVar6 | *(byte *)(lVar11 + -1));
switchD_004c508f_default:
  local_48 = uVar10;
  uStack_44 = uVar5;
  DES_encrypt3(&local_48,ks1,ks2,ks3);
  *(ulong *)local_70 = CONCAT44(uStack_44,local_48);
  uVar9 = (uchar)(local_48 >> 0x18);
  uVar4 = (uchar)(uStack_44 >> 0x18);
  uVar6 = local_48;
  uVar7 = uStack_44;
LAB_004c50ef:
  (*ivec)[0] = (uchar)uVar6;
  (*ivec)[1] = (uchar)(uVar6 >> 8);
  (*ivec)[2] = (uchar)(uVar6 >> 0x10);
  (*ivec)[3] = uVar9;
  (*ivec)[4] = (uchar)uVar7;
  (*ivec)[5] = (uchar)(uVar7 >> 8);
  (*ivec)[6] = (uchar)(uVar7 >> 0x10);
  (*ivec)[7] = uVar4;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return;
}

