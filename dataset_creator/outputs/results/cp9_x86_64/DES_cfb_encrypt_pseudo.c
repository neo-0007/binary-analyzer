
void DES_cfb_encrypt(uchar *in,uchar *out,int numbits,long length,DES_key_schedule *schedule,
                    DES_cblock *ivec,int enc)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uchar *puVar11;
  uchar *puVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  uchar *local_90;
  uint local_60;
  uint local_5c;
  undefined8 local_58;
  uint local_50;
  uint local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (numbits - 1U < 0x40) {
    iVar5 = numbits >> 3;
    iVar14 = numbits + 7 >> 3;
    uVar13 = *(uint *)*ivec;
    uVar9 = *(uint *)(*ivec + 4);
    bVar2 = (byte)numbits & 7;
    uVar15 = (ulong)iVar14;
    local_90 = in;
    if (enc == 0) {
      if (uVar15 <= (ulong)length) {
        do {
          length = length - uVar15;
          local_60 = uVar13;
          local_5c = uVar9;
          DES_encrypt1(&local_60,schedule,1);
          local_90 = local_90 + uVar15;
          switch(iVar14) {
          default:
            uVar10 = 0;
            uVar6 = 0;
            puVar11 = local_90;
            goto LAB_005c0aab;
          case 2:
            uVar10 = 0;
            uVar6 = 0;
            goto LAB_005c0a9e;
          case 3:
            uVar10 = 0;
            uVar6 = 0;
            goto LAB_005c0a91;
          case 4:
            uVar10 = 0;
            goto LAB_005c0a86;
          case 5:
            uVar10 = 0;
            goto LAB_005c0a7c;
          case 6:
            uVar10 = 0;
            goto LAB_005c0a6f;
          case 7:
            uVar10 = 0;
            break;
          case 8:
            pbVar1 = local_90 + -1;
            local_90 = local_90 + -1;
            uVar10 = (uint)*pbVar1 << 0x18;
          }
          pbVar1 = local_90 + -1;
          local_90 = local_90 + -1;
          uVar10 = (uint)*pbVar1 << 0x10 | uVar10;
LAB_005c0a6f:
          pbVar1 = local_90 + -1;
          local_90 = local_90 + -1;
          uVar10 = (uint)*pbVar1 << 8 | uVar10;
LAB_005c0a7c:
          pbVar1 = local_90 + -1;
          local_90 = local_90 + -1;
          uVar10 = *pbVar1 | uVar10;
LAB_005c0a86:
          pbVar1 = local_90 + -1;
          local_90 = local_90 + -1;
          uVar6 = (uint)*pbVar1 << 0x18;
LAB_005c0a91:
          uVar6 = (uint)local_90[-1] << 0x10 | uVar6;
          local_90 = local_90 + -1;
LAB_005c0a9e:
          puVar11 = local_90 + -1;
          uVar6 = (uint)local_90[-1] << 8 | uVar6;
LAB_005c0aab:
          local_90 = puVar11 + (uVar15 - 1);
          uVar6 = puVar11[-1] | uVar6;
          uVar3 = uVar9;
          uVar4 = uVar6;
          if ((numbits != 0x20) && (uVar3 = uVar6, uVar4 = uVar10, numbits != 0x40)) {
            local_58 = CONCAT44(uVar9,uVar13);
            local_50 = uVar6;
            local_4c = uVar10;
            if ((numbits & 7U) == 0) {
              local_58 = *(undefined8 *)((long)&local_58 + (long)iVar5);
            }
            else {
              puVar7 = (uint *)&local_58;
              do {
                puVar8 = (uint *)((long)puVar7 + 1);
                *(byte *)puVar7 =
                     *(char *)((long)puVar7 + (long)iVar5) << (sbyte)(numbits & 7U) |
                     (byte)((int)(uint)*(byte *)((long)puVar7 + (long)iVar5 + 1) >>
                           (8 - bVar2 & 0x1f));
                puVar7 = puVar8;
              } while (puVar8 != &local_50);
            }
            uVar3 = (uint)local_58;
            uVar4 = local_58._4_4_;
          }
          uVar9 = uVar4;
          uVar13 = uVar3;
          uVar6 = uVar6 ^ local_60;
          uVar10 = uVar10 ^ local_5c;
          puVar11 = out + uVar15;
          puVar12 = puVar11;
          switch(iVar14) {
          default:
            goto switchD_005c0b29_caseD_0;
          case 2:
            goto LAB_005c0b72;
          case 3:
            goto LAB_005c0b65;
          case 4:
            goto switchD_005c0b29_caseD_4;
          case 5:
            break;
          case 8:
            puVar11 = puVar11 + -1;
            *puVar11 = (uchar)(uVar10 >> 0x18);
          case 7:
            puVar12 = puVar11 + -1;
            *puVar12 = (uchar)(uVar10 >> 0x10);
          case 6:
            puVar11 = puVar12 + -1;
            puVar12[-1] = (uchar)(uVar10 >> 8);
          }
          puVar11[-1] = (uchar)uVar10;
          puVar11 = puVar11 + -1;
switchD_005c0b29_caseD_4:
          puVar11[-1] = (uchar)(uVar6 >> 0x18);
          puVar12 = puVar11 + -1;
LAB_005c0b65:
          puVar11 = puVar12 + -1;
          puVar12[-1] = (uchar)(uVar6 >> 0x10);
LAB_005c0b72:
          puVar11[-1] = (uchar)(uVar6 >> 8);
          puVar11 = puVar11 + -1;
switchD_005c0b29_caseD_0:
          puVar11[-1] = (uchar)uVar6;
          out = puVar11 + (uVar15 - 1);
        } while (uVar15 <= (ulong)length);
      }
    }
    else if (uVar15 <= (ulong)length) {
      do {
        length = length - uVar15;
        local_60 = uVar13;
        local_5c = uVar9;
        DES_encrypt1(&local_60,schedule,1);
        puVar11 = local_90 + uVar15;
        switch(iVar14) {
        default:
          uVar10 = 0;
          uVar6 = 0;
          goto LAB_005c0c4b;
        case 2:
          uVar10 = 0;
          uVar6 = 0;
          puVar12 = puVar11;
          goto LAB_005c0c3e;
        case 3:
          uVar10 = 0;
          uVar6 = 0;
          goto LAB_005c0c31;
        case 4:
          uVar10 = 0;
          goto LAB_005c0c26;
        case 5:
          uVar10 = 0;
          goto LAB_005c0c1c;
        case 6:
          uVar10 = 0;
          goto LAB_005c0c0f;
        case 7:
          uVar10 = 0;
          break;
        case 8:
          pbVar1 = puVar11 + -1;
          puVar11 = puVar11 + -1;
          uVar10 = (uint)*pbVar1 << 0x18;
        }
        pbVar1 = puVar11 + -1;
        puVar11 = puVar11 + -1;
        uVar10 = (uint)*pbVar1 << 0x10 | uVar10;
LAB_005c0c0f:
        pbVar1 = puVar11 + -1;
        puVar11 = puVar11 + -1;
        uVar10 = (uint)*pbVar1 << 8 | uVar10;
LAB_005c0c1c:
        uVar10 = puVar11[-1] | uVar10;
        puVar11 = puVar11 + -1;
LAB_005c0c26:
        pbVar1 = puVar11 + -1;
        puVar11 = puVar11 + -1;
        uVar6 = (uint)*pbVar1 << 0x18;
LAB_005c0c31:
        uVar6 = (uint)puVar11[-1] << 0x10 | uVar6;
        puVar12 = puVar11 + -1;
LAB_005c0c3e:
        puVar11 = puVar12 + -1;
        uVar6 = (uint)puVar12[-1] << 8 | uVar6;
LAB_005c0c4b:
        local_90 = puVar11 + (uVar15 - 1);
        puVar12 = out + uVar15;
        uVar10 = uVar10 ^ local_5c;
        uVar6 = (puVar11[-1] | uVar6) ^ local_60;
        switch(iVar14) {
        default:
          goto switchD_005c0c81_caseD_0;
        case 2:
          goto LAB_005c0944;
        case 3:
          puVar11 = puVar12;
          goto LAB_005c0935;
        case 4:
          goto switchD_005c0c81_caseD_4;
        case 5:
          break;
        case 8:
          puVar12 = puVar12 + -1;
          *puVar12 = (uchar)(uVar10 >> 0x18);
        case 7:
          puVar12 = puVar12 + -1;
          *puVar12 = (uchar)(uVar10 >> 0x10);
        case 6:
          puVar12[-1] = (uchar)(uVar10 >> 8);
          puVar12 = puVar12 + -1;
        }
        puVar12[-1] = (uchar)uVar10;
        puVar12 = puVar12 + -1;
switchD_005c0c81_caseD_4:
        puVar12[-1] = (uchar)(uVar6 >> 0x18);
        puVar11 = puVar12 + -1;
LAB_005c0935:
        puVar12 = puVar11 + -1;
        puVar11[-1] = (uchar)(uVar6 >> 0x10);
LAB_005c0944:
        puVar12[-1] = (uchar)(uVar6 >> 8);
        puVar12 = puVar12 + -1;
switchD_005c0c81_caseD_0:
        puVar12[-1] = (uchar)uVar6;
        out = puVar12 + (uVar15 - 1);
        uVar3 = uVar9;
        uVar4 = uVar6;
        if ((numbits != 0x20) && (uVar3 = uVar6, uVar4 = uVar10, numbits != 0x40)) {
          local_58 = CONCAT44(uVar9,uVar13);
          local_50 = uVar6;
          local_4c = uVar10;
          if ((numbits & 7U) == 0) {
            local_58 = *(undefined8 *)((long)&local_58 + (long)iVar5);
          }
          else {
            puVar7 = (uint *)&local_58;
            do {
              puVar8 = (uint *)((long)puVar7 + 1);
              *(byte *)puVar7 =
                   *(byte *)((long)puVar7 + (long)iVar5) << (sbyte)(numbits & 7U) |
                   (byte)((int)(uint)*(byte *)((long)puVar7 + (long)iVar5 + 1) >> (8 - bVar2 & 0x1f)
                         );
              puVar7 = puVar8;
            } while (puVar8 != &local_50);
          }
          uVar3 = (uint)local_58;
          uVar4 = local_58._4_4_;
        }
        uVar9 = uVar4;
        uVar13 = uVar3;
      } while (uVar15 <= (ulong)length);
    }
    *(uint *)*ivec = uVar13;
    *(uint *)(*ivec + 4) = uVar9;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

