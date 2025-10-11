
void BF_cbc_encrypt(uchar *in,uchar *out,long length,BF_KEY *schedule,uchar *ivec,int enc)

{
  byte *pbVar1;
  long lVar2;
  uchar uVar3;
  uchar uVar4;
  uint uVar5;
  uchar *puVar6;
  uint uVar7;
  uchar uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar12;
  ulong uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  uint uVar17;
  uint *puVar18;
  uchar *puVar19;
  long in_FS_OFFSET;
  uint *local_78;
  uint *local_70;
  uint local_48;
  uint local_44;
  long local_40;
  ulong uVar11;
  
  uVar13 = length - 8;
  uVar9 = *(uint *)(ivec + 4);
  uVar7 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = *(uint *)ivec;
  uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
  uVar11 = (ulong)uVar9;
  local_70 = (uint *)in;
  if (enc == 0) {
    if (-1 < (long)uVar13) {
      lVar2 = (uVar13 >> 3) * 8 + 8;
      puVar6 = out + lVar2;
      puVar12 = (uint *)in;
      puVar19 = out;
      uVar5 = uVar7;
      do {
        uVar7 = *puVar12;
        uVar17 = puVar12[1];
        out = puVar19 + 8;
        puVar12 = puVar12 + 2;
        uVar10 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
        uVar7 = uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 | uVar17 << 0x18;
        local_48 = uVar10;
        local_44 = uVar7;
        BF_decrypt(&local_48,schedule);
        uVar9 = uVar9 ^ local_48;
        uVar5 = local_44 ^ uVar5;
        puVar19[3] = (uchar)uVar9;
        puVar19[2] = (uchar)(uVar9 >> 8);
        *puVar19 = (uchar)(uVar9 >> 0x18);
        puVar19[6] = (uchar)(uVar5 >> 8);
        puVar19[4] = (uchar)(uVar5 >> 0x18);
        puVar19[1] = (uchar)(uVar9 >> 0x10);
        puVar19[5] = (uchar)(uVar5 >> 0x10);
        puVar19[7] = (uchar)uVar5;
        puVar19 = out;
        uVar5 = uVar7;
        uVar9 = uVar10;
      } while (puVar6 != out);
      uVar11 = (ulong)uVar10;
      local_70 = (uint *)(in + lVar2);
      uVar13 = length + -0x10 + (uVar13 >> 3) * -8;
    }
    uVar9 = uVar7;
    if (uVar13 != 0xfffffffffffffff8) {
      uVar9 = *local_70;
      uVar5 = local_70[1];
      uVar17 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
      uVar9 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
      local_48 = uVar17;
      local_44 = uVar9;
      BF_decrypt(&local_48,schedule);
      uVar7 = uVar7 ^ local_44;
      puVar19 = out + uVar13 + 8;
      uVar5 = (uint)uVar11 ^ local_48;
      switch(uVar13) {
      default:
        uVar11 = (ulong)uVar17;
        goto LAB_005ab118;
      case 0xfffffffffffffff9:
        goto switchD_005ab1df_caseD_fffffff9;
      case 0xfffffffffffffffa:
        puVar6 = puVar19;
        goto LAB_005ab213;
      case 0xfffffffffffffffb:
        goto switchD_005ab1df_caseD_fffffffb;
      case 0xfffffffffffffffc:
        break;
      case 0xffffffffffffffff:
        puVar19 = puVar19 + -1;
        *puVar19 = (uchar)(uVar7 >> 8);
      case 0xfffffffffffffffe:
        puVar19 = puVar19 + -1;
        *puVar19 = (uchar)(uVar7 >> 0x10);
      case 0xfffffffffffffffd:
        puVar19[-1] = (uchar)(uVar7 >> 0x18);
        puVar19 = puVar19 + -1;
      }
      puVar19[-1] = (uchar)uVar5;
      puVar19 = puVar19 + -1;
switchD_005ab1df_caseD_fffffffb:
      puVar19[-1] = (uchar)(uVar5 >> 8);
      puVar6 = puVar19 + -1;
LAB_005ab213:
      puVar19 = puVar6 + -1;
      puVar6[-1] = (uchar)(uVar5 >> 0x10);
switchD_005ab1df_caseD_fffffff9:
      puVar19[-1] = (uchar)(uVar5 >> 0x18);
      uVar11 = (ulong)uVar17;
    }
LAB_005ab118:
    uVar16 = (uchar)(uVar11 >> 0x18);
    uVar14 = (uchar)(uVar11 >> 0x10);
    uVar8 = (uchar)(uVar9 >> 8);
    uVar15 = (uchar)(uVar11 >> 8);
    uVar3 = (uchar)(uVar9 >> 0x18);
    uVar4 = (uchar)(uVar9 >> 0x10);
    goto LAB_005ab140;
  }
  local_78 = (uint *)out;
  if (-1 < (long)uVar13) {
    lVar2 = (uVar13 >> 3) * 8 + 8;
    local_78 = (uint *)(out + lVar2);
    puVar12 = (uint *)in;
    local_44 = uVar7;
    do {
      uVar9 = *puVar12;
      uVar7 = puVar12[1];
      puVar18 = (uint *)((long)out + 8);
      puVar12 = puVar12 + 2;
      local_44 = local_44 ^
                 (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18);
      local_48 = (uint)uVar11 ^
                 (uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18);
      BF_encrypt(&local_48,schedule);
      uVar11 = (ulong)local_48;
      *(char *)((long)out + 3) = (char)local_48;
      *out = (char)(local_48 >> 0x18);
      *(char *)((long)out + 1) = (char)(local_48 >> 0x10);
      *(char *)((long)out + 2) = (char)(local_48 >> 8);
      *(char *)((long)out + 4) = (char)(local_44 >> 0x18);
      *(char *)((long)out + 5) = (char)(local_44 >> 0x10);
      *(char *)((long)out + 6) = (char)(local_44 >> 8);
      *(char *)((long)out + 7) = (char)local_44;
      out = (uchar *)puVar18;
    } while (puVar18 != local_78);
    local_70 = (uint *)(in + lVar2);
    uVar13 = length + -0x10 + (uVar13 >> 3) * -8;
    uVar7 = local_44;
  }
  uVar9 = uVar7;
  if (uVar13 == 0xfffffffffffffff8) goto LAB_005ab118;
  puVar19 = (uchar *)((long)local_70 + uVar13 + 8);
  local_48 = (uint)uVar11;
  switch(uVar13) {
  default:
    goto switchD_005ab015_default;
  case 0xfffffffffffffff9:
    uVar9 = 0;
    goto LAB_005ab280;
  case 0xfffffffffffffffa:
    uVar9 = 0;
    goto LAB_005ab272;
  case 0xfffffffffffffffb:
    uVar9 = 0;
    goto LAB_005ab263;
  case 0xfffffffffffffffc:
    goto LAB_005ab25b;
  case 0xfffffffffffffffd:
    uVar9 = 0;
    goto LAB_005ab249;
  case 0xfffffffffffffffe:
    uVar9 = 0;
    break;
  case 0xffffffffffffffff:
    pbVar1 = puVar19 + -1;
    puVar19 = puVar19 + -1;
    uVar9 = (uint)*pbVar1 << 8;
  }
  pbVar1 = puVar19 + -1;
  puVar19 = puVar19 + -1;
  uVar9 = uVar9 | (uint)*pbVar1 << 0x10;
LAB_005ab249:
  pbVar1 = puVar19 + -1;
  puVar19 = puVar19 + -1;
  uVar7 = uVar7 ^ (uVar9 | (uint)*pbVar1 << 0x18);
LAB_005ab25b:
  uVar9 = (uint)puVar19[-1];
  puVar19 = puVar19 + -1;
LAB_005ab263:
  pbVar1 = puVar19 + -1;
  puVar19 = puVar19 + -1;
  uVar9 = uVar9 | (uint)*pbVar1 << 8;
LAB_005ab272:
  pbVar1 = puVar19 + -1;
  puVar19 = puVar19 + -1;
  uVar9 = uVar9 | (uint)*pbVar1 << 0x10;
LAB_005ab280:
  local_48 = (uint)uVar11 ^ (uVar9 | (uint)puVar19[-1] << 0x18);
switchD_005ab015_default:
  local_44 = uVar7;
  BF_encrypt(&local_48,schedule);
  uVar11 = (ulong)local_48;
  *local_78 = local_48 >> 0x18 | (local_48 & 0xff0000) >> 8 | (local_48 & 0xff00) << 8 |
              local_48 << 0x18;
  uVar3 = (uchar)(local_44 >> 0x18);
  uVar16 = (uchar)(local_48 >> 0x18);
  uVar15 = (uchar)(local_48 >> 8);
  uVar14 = (uchar)(local_48 >> 0x10);
  local_78[1] = local_44 >> 0x18 | (local_44 & 0xff0000) >> 8 | (local_44 & 0xff00) << 8 |
                local_44 << 0x18;
  uVar4 = (uchar)(local_44 >> 0x10);
  uVar8 = (uchar)(local_44 >> 8);
  uVar9 = local_44;
LAB_005ab140:
  *ivec = uVar16;
  ivec[1] = uVar14;
  ivec[2] = uVar15;
  ivec[3] = (uchar)uVar11;
  ivec[4] = uVar3;
  ivec[5] = uVar4;
  ivec[6] = uVar8;
  ivec[7] = (uchar)uVar9;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return;
}

