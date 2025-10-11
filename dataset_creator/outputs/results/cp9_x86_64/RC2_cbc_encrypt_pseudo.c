
void RC2_cbc_encrypt(uchar *in,uchar *out,long length,RC2_KEY *ks,uchar *iv,int enc)

{
  uint *puVar1;
  byte *pbVar2;
  uint *puVar3;
  uint uVar4;
  uchar uVar5;
  uchar uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uchar *puVar11;
  long lVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  uint *local_90;
  uchar *local_80;
  ulong local_58;
  ulong local_50;
  long local_40;
  
  uVar8 = (ulong)*(uint *)iv;
  uVar13 = (ulong)*(uint *)(iv + 4);
  uVar9 = length - 8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = out;
  if (enc == 0) {
    local_90 = (uint *)in;
    if (-1 < (long)uVar9) {
      lVar12 = (uVar9 >> 3) * 8 + 8;
      local_90 = (uint *)(in + lVar12);
      puVar11 = out;
      uVar7 = uVar13;
      uVar10 = uVar8;
      do {
        uVar8 = (ulong)*(uint *)in;
        uVar13 = (ulong)*(uint *)((long)in + 4);
        in = (uchar *)((long)in + 8);
        local_58 = uVar8;
        local_50 = uVar13;
        RC2_decrypt(&local_58,ks);
        uVar10 = uVar10 ^ local_58;
        uVar7 = local_50 ^ uVar7;
        *puVar11 = (uchar)uVar10;
        puVar11[1] = (uchar)(uVar10 >> 8);
        puVar11[3] = (uchar)(uVar10 >> 0x18);
        puVar11[4] = (uchar)uVar7;
        puVar11[5] = (uchar)(uVar7 >> 8);
        puVar11[2] = (uchar)(uVar10 >> 0x10);
        puVar11[6] = (uchar)(uVar7 >> 0x10);
        puVar11[7] = (uchar)(uVar7 >> 0x18);
        puVar11 = puVar11 + 8;
        uVar7 = uVar13;
        uVar10 = uVar8;
      } while ((uint *)in != local_90);
      local_80 = out + lVar12;
      uVar9 = length + -0x10 + (uVar9 >> 3) * -8;
    }
    uVar7 = uVar8;
    uVar10 = uVar13;
    if (uVar9 != 0xfffffffffffffff8) {
      uVar10 = (ulong)local_90[1];
      uVar7 = (ulong)*local_90;
      local_58 = uVar7;
      local_50 = uVar10;
      RC2_decrypt(&local_58,ks);
      uVar13 = uVar13 ^ local_50;
      uVar8 = local_58 ^ uVar8;
      local_80 = local_80 + uVar9 + 8;
      puVar11 = local_80;
      switch(uVar9) {
      default:
        goto switchD_0054fbd8_default;
      case 0xfffffffffffffff9:
        goto switchD_0054fbd8_caseD_fffffff9;
      case 0xfffffffffffffffa:
        goto LAB_0054fa05;
      case 0xfffffffffffffffb:
        goto switchD_0054fbd8_caseD_fffffffb;
      case 0xfffffffffffffffc:
        break;
      case 0xffffffffffffffff:
        local_80 = local_80 + -1;
        *local_80 = (uchar)(uVar13 >> 0x10);
      case 0xfffffffffffffffe:
        local_80 = local_80 + -1;
        *local_80 = (uchar)(uVar13 >> 8);
      case 0xfffffffffffffffd:
        local_80[-1] = (uchar)uVar13;
        local_80 = local_80 + -1;
      }
      puVar11 = local_80 + -1;
      local_80[-1] = (uchar)(uVar8 >> 0x18);
switchD_0054fbd8_caseD_fffffffb:
      local_80 = puVar11 + -1;
      puVar11[-1] = (uchar)(uVar8 >> 0x10);
LAB_0054fa05:
      local_80[-1] = (uchar)(uVar8 >> 8);
      local_80 = local_80 + -1;
switchD_0054fbd8_caseD_fffffff9:
      local_80[-1] = (uchar)uVar8;
    }
switchD_0054fbd8_default:
    uVar6 = (uchar)(uVar7 >> 0x18);
    uVar5 = (uchar)uVar10;
    goto LAB_0054fa44;
  }
  if (-1 < (long)uVar9) {
    lVar12 = (uVar9 >> 3) * 8 + 8;
    puVar3 = (uint *)(in + lVar12);
    local_58 = uVar8;
    local_50 = uVar13;
    puVar11 = out;
    do {
      uVar4 = *(uint *)in;
      puVar1 = (uint *)((long)in + 4);
      in = (uchar *)((long)in + 8);
      local_58 = local_58 ^ uVar4;
      local_50 = *puVar1 ^ local_50;
      RC2_encrypt(&local_58,ks);
      *puVar11 = (uchar)local_58;
      puVar11[1] = (uchar)(local_58 >> 8);
      puVar11[2] = (uchar)(local_58 >> 0x10);
      puVar11[3] = (uchar)(local_58 >> 0x18);
      puVar11[4] = (uchar)local_50;
      puVar11[5] = (uchar)(local_50 >> 8);
      puVar11[6] = (uchar)(local_50 >> 0x10);
      puVar11[7] = (uchar)(local_50 >> 0x18);
      puVar11 = puVar11 + 8;
    } while (puVar3 != (uint *)in);
    local_80 = out + lVar12;
    uVar9 = length + -0x10 + (uVar9 >> 3) * -8;
    uVar8 = local_58;
    uVar13 = local_50;
  }
  uVar7 = uVar8;
  uVar10 = uVar13;
  if (uVar9 == 0xfffffffffffffff8) goto switchD_0054fbd8_default;
  lVar12 = (long)in + uVar9 + 8;
  switch(uVar9) {
  default:
    goto switchD_0054f9c0_default;
  case 0xfffffffffffffff9:
    uVar9 = 0;
    goto LAB_0054fc2d;
  case 0xfffffffffffffffa:
    uVar9 = 0;
    goto LAB_0054fc1e;
  case 0xfffffffffffffffb:
    uVar9 = 0;
    goto LAB_0054fc0e;
  case 0xfffffffffffffffc:
    goto LAB_0054fc01;
  case 0xfffffffffffffffd:
    uVar9 = 0;
    goto LAB_0054fbf2;
  case 0xfffffffffffffffe:
    uVar9 = 0;
    break;
  case 0xffffffffffffffff:
    pbVar2 = (byte *)(lVar12 + -1);
    lVar12 = lVar12 + -1;
    uVar9 = (ulong)*pbVar2 << 0x10;
  }
  pbVar2 = (byte *)(lVar12 + -1);
  lVar12 = lVar12 + -1;
  uVar9 = (ulong)*pbVar2 << 8 | uVar9;
LAB_0054fbf2:
  pbVar2 = (byte *)(lVar12 + -1);
  lVar12 = lVar12 + -1;
  uVar13 = uVar13 ^ (uVar9 | *pbVar2);
LAB_0054fc01:
  pbVar2 = (byte *)(lVar12 + -1);
  lVar12 = lVar12 + -1;
  uVar9 = (ulong)*pbVar2 << 0x18;
LAB_0054fc0e:
  pbVar2 = (byte *)(lVar12 + -1);
  lVar12 = lVar12 + -1;
  uVar9 = (ulong)*pbVar2 << 0x10 | uVar9;
LAB_0054fc1e:
  uVar9 = (ulong)*(byte *)(lVar12 + -1) << 8 | uVar9;
  lVar12 = lVar12 + -1;
LAB_0054fc2d:
  uVar8 = uVar8 ^ (uVar9 | *(byte *)(lVar12 + -1));
switchD_0054f9c0_default:
  local_58 = uVar8;
  local_50 = uVar13;
  RC2_encrypt(&local_58,ks);
  *(undefined4 *)local_80 = (undefined4)local_58;
  *(undefined4 *)(local_80 + 4) = (undefined4)local_50;
  uVar5 = (uchar)local_50;
  uVar6 = (uchar)(local_58 >> 0x18);
  uVar7 = local_58;
  uVar10 = local_50;
LAB_0054fa44:
  *iv = (uchar)uVar7;
  iv[1] = (uchar)(uVar7 >> 8);
  iv[2] = (uchar)(uVar7 >> 0x10);
  iv[3] = uVar6;
  iv[4] = uVar5;
  iv[5] = (uchar)(uVar10 >> 8);
  iv[6] = (uchar)(uVar10 >> 0x10);
  iv[7] = (uchar)(uVar10 >> 0x18);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return;
}

