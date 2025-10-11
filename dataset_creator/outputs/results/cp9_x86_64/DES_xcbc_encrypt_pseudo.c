
void DES_xcbc_encrypt(uchar *input,uchar *output,long length,DES_key_schedule *schedule,
                     DES_cblock *ivec,const_DES_cblock *inw,const_DES_cblock *outw,int enc)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uchar uVar6;
  uchar *puVar7;
  uchar *puVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  uint *puVar13;
  uint uVar14;
  uchar uVar15;
  uint *puVar16;
  uint uVar17;
  long in_FS_OFFSET;
  uint *local_a0;
  ulong local_78;
  long local_70;
  uint *local_68;
  uint local_48;
  uint local_44;
  long local_40;
  
  local_78 = length - 8;
  uVar10 = *(uint *)*ivec;
  uVar2 = *(uint *)(*outw + 4);
  uVar3 = *(uint *)*outw;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = *(uint *)*inw;
  uVar5 = *(uint *)(*inw + 4);
  uVar9 = *(uint *)(*ivec + 4);
  local_68 = (uint *)input;
  if (enc == 0) {
    if ((long)local_78 < 1) {
      uVar14 = uVar10;
      uVar17 = uVar9;
      local_70 = length;
      if (local_78 == 0xfffffffffffffff8) goto LAB_005c133c;
    }
    else {
      uVar11 = length - 9U >> 3;
      lVar12 = uVar11 * 8 + 8;
      puVar8 = output + lVar12;
      puVar13 = (uint *)input;
      puVar7 = output;
      do {
        uVar14 = *puVar13;
        output = puVar7 + 8;
        uVar17 = puVar13[1];
        local_48 = uVar3 ^ uVar14;
        local_44 = uVar2 ^ uVar17;
        DES_encrypt1(&local_48,schedule,0);
        uVar10 = uVar4 ^ local_48 ^ uVar10;
        *puVar7 = (uchar)uVar10;
        uVar9 = uVar5 ^ local_44 ^ uVar9;
        puVar7[1] = (uchar)(uVar10 >> 8);
        puVar7[3] = (uchar)(uVar10 >> 0x18);
        puVar7[4] = (uchar)uVar9;
        puVar7[2] = (uchar)(uVar10 >> 0x10);
        puVar7[5] = (uchar)(uVar9 >> 8);
        puVar7[6] = (uchar)(uVar9 >> 0x10);
        puVar7[7] = (uchar)(uVar9 >> 0x18);
        puVar13 = puVar13 + 2;
        puVar7 = output;
        uVar10 = uVar14;
        uVar9 = uVar17;
      } while (puVar8 != output);
      local_68 = (uint *)(input + lVar12);
      lVar12 = uVar11 * -8;
      local_70 = lVar12 + local_78;
      local_78 = length + -0x10 + lVar12;
    }
    uVar10 = *local_68;
    local_48 = uVar3 ^ uVar10;
    uVar9 = local_68[1];
    local_44 = uVar2 ^ uVar9;
    DES_encrypt1(&local_48,schedule,0);
    puVar7 = output + local_78 + 8;
    uVar14 = uVar14 ^ uVar4 ^ local_48;
    uVar17 = uVar5 ^ local_44 ^ uVar17;
    switch(local_70) {
    default:
      goto LAB_005c133c;
    case 1:
      goto switchD_005c1324_caseD_1;
    case 2:
      puVar8 = puVar7;
      goto LAB_005c13e2;
    case 3:
      goto LAB_005c13d5;
    case 4:
      goto switchD_005c1324_caseD_4;
    case 5:
      break;
    case 8:
      puVar7 = puVar7 + -1;
      *puVar7 = (uchar)(uVar17 >> 0x18);
    case 7:
      puVar7 = puVar7 + -1;
      *puVar7 = (uchar)(uVar17 >> 0x10);
    case 6:
      puVar7[-1] = (uchar)(uVar17 >> 8);
      puVar7 = puVar7 + -1;
    }
    puVar7[-1] = (uchar)uVar17;
    puVar7 = puVar7 + -1;
switchD_005c1324_caseD_4:
    puVar7[-1] = (uchar)(uVar14 >> 0x18);
    puVar7 = puVar7 + -1;
LAB_005c13d5:
    puVar7[-1] = (uchar)(uVar14 >> 0x10);
    puVar8 = puVar7 + -1;
LAB_005c13e2:
    puVar7 = puVar8 + -1;
    puVar8[-1] = (uchar)(uVar14 >> 8);
switchD_005c1324_caseD_1:
    puVar7[-1] = (uchar)uVar14;
  }
  else {
    local_a0 = (uint *)output;
    if (-1 < (long)local_78) {
      lVar12 = (local_78 >> 3) * 8 + 8;
      local_a0 = (uint *)(output + lVar12);
      puVar13 = (uint *)input;
      do {
        puVar16 = (uint *)((long)output + 8);
        local_48 = uVar10 ^ *puVar13 ^ uVar4;
        local_44 = puVar13[1] ^ uVar5 ^ uVar9;
        DES_encrypt1(&local_48,schedule,1);
        uVar10 = local_48 ^ uVar3;
        *output = (char)uVar10;
        *(char *)((long)output + 1) = (char)(uVar10 >> 8);
        *(char *)((long)output + 2) = (char)(uVar10 >> 0x10);
        *(char *)((long)output + 3) = (char)(uVar10 >> 0x18);
        uVar9 = local_44 ^ uVar2;
        *(char *)((long)output + 4) = (char)uVar9;
        *(char *)((long)output + 5) = (char)(uVar9 >> 8);
        *(char *)((long)output + 6) = (char)(uVar9 >> 0x10);
        *(char *)((long)output + 7) = (char)(uVar9 >> 0x18);
        puVar13 = puVar13 + 2;
        output = (uchar *)puVar16;
      } while (puVar16 != local_a0);
      local_68 = (uint *)(input + lVar12);
      local_78 = length + -0x10 + (local_78 >> 3) * -8;
    }
    if (local_78 != 0xfffffffffffffff8) {
      puVar7 = (uchar *)((long)local_68 + local_78 + 8);
      switch(local_78) {
      default:
        local_44 = 0;
        local_48 = 0;
        goto LAB_005c1459;
      case 0xfffffffffffffff9:
        local_44 = 0;
        local_48 = 0;
        goto LAB_005c1453;
      case 0xfffffffffffffffa:
        local_44 = 0;
        local_48 = 0;
        puVar8 = puVar7;
        goto LAB_005c1446;
      case 0xfffffffffffffffb:
        local_44 = 0;
        local_48 = 0;
        goto LAB_005c1438;
      case 0xfffffffffffffffc:
        local_44 = 0;
        goto LAB_005c142b;
      case 0xfffffffffffffffd:
        local_44 = 0;
        goto LAB_005c141f;
      case 0xfffffffffffffffe:
        local_44 = 0;
        break;
      case 0xffffffffffffffff:
        pbVar1 = puVar7 + -1;
        puVar7 = puVar7 + -1;
        local_44 = (uint)*pbVar1 << 0x10;
      }
      pbVar1 = puVar7 + -1;
      puVar7 = puVar7 + -1;
      local_44 = (uint)*pbVar1 << 8 | local_44;
LAB_005c141f:
      pbVar1 = puVar7 + -1;
      puVar7 = puVar7 + -1;
      local_44 = *pbVar1 | local_44;
LAB_005c142b:
      pbVar1 = puVar7 + -1;
      puVar7 = puVar7 + -1;
      local_48 = (uint)*pbVar1 << 0x18;
LAB_005c1438:
      local_48 = (uint)puVar7[-1] << 0x10 | local_48;
      puVar8 = puVar7 + -1;
LAB_005c1446:
      puVar7 = puVar8 + -1;
      local_48 = (uint)puVar8[-1] << 8 | local_48;
LAB_005c1453:
      local_48 = puVar7[-1] | local_48;
LAB_005c1459:
      local_48 = uVar10 ^ uVar4 ^ local_48;
      local_44 = uVar9 ^ uVar5 ^ local_44;
      DES_encrypt1(&local_48,schedule,1);
      uVar9 = uVar2 ^ local_44;
      uVar10 = local_48 ^ uVar3;
      local_a0[1] = uVar9;
      *local_a0 = uVar10;
      uVar15 = (uchar)uVar10;
      uVar6 = (uchar)(uVar9 >> 0x10);
      goto LAB_005c135f;
    }
  }
LAB_005c133c:
  uVar15 = (uchar)uVar10;
  uVar6 = (uchar)(uVar9 >> 0x10);
LAB_005c135f:
  (*ivec)[0] = uVar15;
  (*ivec)[1] = (uchar)(uVar10 >> 8);
  (*ivec)[2] = (uchar)(uVar10 >> 0x10);
  (*ivec)[3] = (uchar)(uVar10 >> 0x18);
  (*ivec)[4] = (uchar)uVar9;
  (*ivec)[5] = (uchar)(uVar9 >> 8);
  (*ivec)[6] = uVar6;
  (*ivec)[7] = (uchar)(uVar9 >> 0x18);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

