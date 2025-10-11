
void DES_ncbc_encrypt(uchar *input,uchar *output,long length,DES_key_schedule *schedule,
                     DES_cblock *ivec,int enc)

{
  uint *puVar1;
  byte *pbVar2;
  long lVar3;
  uint uVar4;
  uchar *puVar5;
  uint uVar6;
  uint uVar7;
  uchar *puVar8;
  uint *puVar9;
  ulong uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uint uVar14;
  long in_FS_OFFSET;
  uchar *local_80;
  uint *local_70;
  uint local_48;
  uint uStack_44;
  long local_40;
  
  uVar10 = length - 8;
  uVar6 = *(uint *)*ivec;
  uVar14 = *(uint *)(*ivec + 4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = (uint *)input;
  if (enc == 0) {
    local_80 = output;
    if (-1 < (long)uVar10) {
      lVar3 = (uVar10 >> 3) * 8 + 8;
      local_80 = output + lVar3;
      puVar9 = (uint *)input;
      uVar7 = uVar6;
      uVar4 = uVar14;
      do {
        uVar6 = *puVar9;
        uVar14 = puVar9[1];
        puVar5 = output + 8;
        puVar9 = puVar9 + 2;
        local_48 = uVar6;
        uStack_44 = uVar14;
        DES_encrypt1(&local_48,schedule,0);
        uVar7 = local_48 ^ uVar7;
        uVar4 = uStack_44 ^ uVar4;
        *output = (uchar)uVar7;
        output[1] = (uchar)(uVar7 >> 8);
        output[3] = (uchar)(uVar7 >> 0x18);
        output[4] = (uchar)uVar4;
        output[2] = (uchar)(uVar7 >> 0x10);
        output[5] = (uchar)(uVar4 >> 8);
        output[6] = (uchar)(uVar4 >> 0x10);
        output[7] = (uchar)(uVar4 >> 0x18);
        output = puVar5;
        uVar7 = uVar6;
        uVar4 = uVar14;
      } while (puVar5 != local_80);
      local_70 = (uint *)(input + lVar3);
      uVar10 = length + -0x10 + (uVar10 >> 3) * -8;
    }
    uVar4 = uVar6;
    uVar7 = uVar14;
    if (uVar10 != 0xfffffffffffffff8) {
      uVar7 = local_70[1];
      uVar4 = *local_70;
      local_48 = uVar4;
      uStack_44 = uVar7;
      DES_encrypt1(&local_48,schedule,0);
      uVar14 = uVar14 ^ uStack_44;
      uVar6 = uVar6 ^ local_48;
      local_80 = local_80 + uVar10 + 8;
      puVar5 = local_80;
      switch(uVar10) {
      default:
        goto switchD_004c4e0e_default;
      case 0xfffffffffffffff9:
        goto switchD_004c4e0e_caseD_fffffff9;
      case 0xfffffffffffffffa:
        goto LAB_004c4c38;
      case 0xfffffffffffffffb:
        goto switchD_004c4e0e_caseD_fffffffb;
      case 0xfffffffffffffffc:
        break;
      case 0xffffffffffffffff:
        local_80 = local_80 + -1;
        *local_80 = (uchar)(uVar14 >> 0x10);
      case 0xfffffffffffffffe:
        local_80 = local_80 + -1;
        *local_80 = (uchar)(uVar14 >> 8);
      case 0xfffffffffffffffd:
        local_80[-1] = (uchar)uVar14;
        local_80 = local_80 + -1;
      }
      puVar5 = local_80 + -1;
      local_80[-1] = (uchar)(uVar6 >> 0x18);
switchD_004c4e0e_caseD_fffffffb:
      local_80 = puVar5 + -1;
      puVar5[-1] = (uchar)(uVar6 >> 0x10);
LAB_004c4c38:
      local_80[-1] = (uchar)(uVar6 >> 8);
      local_80 = local_80 + -1;
switchD_004c4e0e_caseD_fffffff9:
      local_80[-1] = (uchar)uVar6;
    }
switchD_004c4e0e_default:
    uVar13 = (uchar)uVar7;
    uVar12 = (uchar)uVar4;
    uVar11 = (uchar)(uVar7 >> 8);
    goto LAB_004c4c70;
  }
  if (-1 < (long)uVar10) {
    lVar3 = (uVar10 >> 3) * 8 + 8;
    puVar5 = output + lVar3;
    puVar8 = output;
    puVar9 = (uint *)input;
    local_48 = uVar6;
    uStack_44 = uVar14;
    do {
      uVar6 = *puVar9;
      puVar1 = puVar9 + 1;
      output = puVar8 + 8;
      puVar9 = puVar9 + 2;
      local_48 = local_48 ^ uVar6;
      uStack_44 = uStack_44 ^ *puVar1;
      DES_encrypt1(&local_48,schedule,1);
      *puVar8 = (uchar)local_48;
      puVar8[1] = (uchar)(local_48 >> 8);
      puVar8[2] = (uchar)(local_48 >> 0x10);
      puVar8[3] = (uchar)(local_48 >> 0x18);
      puVar8[4] = (uchar)uStack_44;
      puVar8[5] = (uchar)(uStack_44 >> 8);
      puVar8[6] = (uchar)(uStack_44 >> 0x10);
      puVar8[7] = (uchar)(uStack_44 >> 0x18);
      puVar8 = output;
    } while (puVar5 != output);
    local_70 = (uint *)(input + lVar3);
    uVar10 = length + -0x10 + (uVar10 >> 3) * -8;
    uVar6 = local_48;
    uVar14 = uStack_44;
  }
  uVar4 = uVar6;
  uVar7 = uVar14;
  if (uVar10 == 0xfffffffffffffff8) goto switchD_004c4e0e_default;
  puVar5 = (uchar *)((long)local_70 + uVar10 + 8);
  switch(uVar10) {
  default:
    goto switchD_004c4bfa_default;
  case 0xfffffffffffffff9:
    uVar7 = 0;
    goto LAB_004c4e5e;
  case 0xfffffffffffffffa:
    uVar7 = 0;
    puVar8 = puVar5;
    goto LAB_004c4e51;
  case 0xfffffffffffffffb:
    uVar7 = 0;
    goto LAB_004c4e43;
  case 0xfffffffffffffffc:
    goto LAB_004c4e36;
  case 0xfffffffffffffffd:
    uVar7 = 0;
    goto LAB_004c4e27;
  case 0xfffffffffffffffe:
    uVar7 = 0;
    break;
  case 0xffffffffffffffff:
    pbVar2 = puVar5 + -1;
    puVar5 = puVar5 + -1;
    uVar7 = (uint)*pbVar2 << 0x10;
  }
  pbVar2 = puVar5 + -1;
  puVar5 = puVar5 + -1;
  uVar7 = (uint)*pbVar2 << 8 | uVar7;
LAB_004c4e27:
  pbVar2 = puVar5 + -1;
  puVar5 = puVar5 + -1;
  uVar14 = uVar14 ^ (uVar7 | *pbVar2);
LAB_004c4e36:
  pbVar2 = puVar5 + -1;
  puVar5 = puVar5 + -1;
  uVar7 = (uint)*pbVar2 << 0x18;
LAB_004c4e43:
  uVar7 = (uint)puVar5[-1] << 0x10 | uVar7;
  puVar8 = puVar5 + -1;
LAB_004c4e51:
  puVar5 = puVar8 + -1;
  uVar7 = (uint)puVar8[-1] << 8 | uVar7;
LAB_004c4e5e:
  uVar6 = uVar6 ^ (uVar7 | puVar5[-1]);
switchD_004c4bfa_default:
  local_48 = uVar6;
  uStack_44 = uVar14;
  DES_encrypt1(&local_48,schedule,1);
  uVar12 = (uchar)local_48;
  uVar13 = (uchar)uStack_44;
  *(ulong *)output = CONCAT44(uStack_44,local_48);
  uVar11 = (uchar)(uStack_44 >> 8);
  uVar4 = local_48;
  uVar7 = uStack_44;
LAB_004c4c70:
  (*ivec)[0] = uVar12;
  (*ivec)[1] = (uchar)(uVar4 >> 8);
  (*ivec)[2] = (uchar)(uVar4 >> 0x10);
  (*ivec)[3] = (uchar)(uVar4 >> 0x18);
  (*ivec)[4] = uVar13;
  (*ivec)[5] = uVar11;
  (*ivec)[6] = (uchar)(uVar7 >> 0x10);
  (*ivec)[7] = (uchar)(uVar7 >> 0x18);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return;
}

