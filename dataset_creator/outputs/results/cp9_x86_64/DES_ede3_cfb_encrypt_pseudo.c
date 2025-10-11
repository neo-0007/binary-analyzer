
void DES_ede3_cfb_encrypt
               (uchar *in,uchar *out,int numbits,long length,DES_key_schedule *ks1,
               DES_key_schedule *ks2,DES_key_schedule *ks3,DES_cblock *ivec,int enc)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  uchar *puVar11;
  uchar *puVar12;
  uint uVar13;
  uint uVar14;
  long in_FS_OFFSET;
  uint *local_a8;
  undefined8 *local_88;
  uint local_70;
  uint local_60;
  uint local_5c;
  undefined8 local_58;
  uint local_50;
  uint local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (numbits < 0x41) {
    uVar8 = numbits + 7;
    uVar13 = *(uint *)*ivec;
    uVar2 = (ulong)(uVar8 >> 3);
    uVar5 = *(uint *)(*ivec + 4);
    bVar3 = (byte)(numbits >> 0x1f);
    if (enc == 0) {
      if (uVar2 <= (ulong)length) {
        if (-1 < numbits) {
          uVar8 = numbits;
        }
        puVar10 = (undefined8 *)((long)&local_58 + (long)((int)uVar8 >> 3));
        uVar8 = uVar5;
        do {
          local_70 = numbits & 7;
          local_88 = &local_58;
          local_a8 = &local_60;
          length = length - uVar2;
          local_60 = uVar13;
          local_5c = uVar8;
          DES_encrypt3(local_a8,ks1,ks2,ks3);
          puVar11 = in + uVar2;
          switch(uVar2) {
          default:
            uVar9 = 0;
            uVar14 = 0;
            goto LAB_004c1cd9;
          case 1:
            uVar9 = 0;
            uVar14 = 0;
            goto LAB_004c1ccd;
          case 2:
            uVar9 = 0;
            uVar14 = 0;
            goto LAB_004c1cc0;
          case 3:
            uVar9 = 0;
            uVar14 = 0;
            goto LAB_004c1cb3;
          case 4:
            uVar9 = 0;
            goto LAB_004c1ca8;
          case 5:
            uVar9 = 0;
            goto LAB_004c1c9c;
          case 6:
            uVar9 = 0;
            goto LAB_004c1c8f;
          case 7:
            uVar9 = 0;
            break;
          case 8:
            pbVar1 = puVar11 + -1;
            puVar11 = puVar11 + -1;
            uVar9 = (uint)*pbVar1 << 0x18;
          }
          pbVar1 = puVar11 + -1;
          puVar11 = puVar11 + -1;
          uVar9 = (uint)*pbVar1 << 0x10 | uVar9;
LAB_004c1c8f:
          pbVar1 = puVar11 + -1;
          puVar11 = puVar11 + -1;
          uVar9 = (uint)*pbVar1 << 8 | uVar9;
LAB_004c1c9c:
          pbVar1 = puVar11 + -1;
          puVar11 = puVar11 + -1;
          uVar9 = *pbVar1 | uVar9;
LAB_004c1ca8:
          pbVar1 = puVar11 + -1;
          puVar11 = puVar11 + -1;
          uVar14 = (uint)*pbVar1 << 0x18;
LAB_004c1cb3:
          pbVar1 = puVar11 + -1;
          puVar11 = puVar11 + -1;
          uVar14 = (uint)*pbVar1 << 0x10 | uVar14;
LAB_004c1cc0:
          pbVar1 = puVar11 + -1;
          puVar11 = puVar11 + -1;
          uVar14 = (uint)*pbVar1 << 8 | uVar14;
LAB_004c1ccd:
          pbVar1 = puVar11 + -1;
          puVar11 = puVar11 + -1;
          uVar14 = *pbVar1 | uVar14;
LAB_004c1cd9:
          in = puVar11 + uVar2;
          uVar5 = uVar14;
          uVar4 = uVar8;
          if ((numbits != 0x20) && (uVar5 = uVar9, uVar4 = uVar14, numbits != 0x40)) {
            local_58 = CONCAT44(uVar8,uVar13);
            local_50 = uVar14;
            local_4c = uVar9;
            if (local_70 == 0) {
              local_58 = *puVar10;
            }
            else {
              puVar6 = (uint *)memmove(local_88,puVar10,9);
              do {
                puVar7 = (uint *)((long)puVar6 + 1);
                *(byte *)puVar6 =
                     (byte)*puVar6 << (sbyte)local_70 |
                     (byte)((int)(uint)*(byte *)((long)puVar6 + 1) >>
                           (((bVar3 >> 5) - ((char)numbits + (bVar3 >> 5) & 7)) + 8 & 0x1f));
                puVar6 = puVar7;
              } while (puVar7 != &local_50);
            }
            uVar5 = local_58._4_4_;
            uVar4 = (uint)local_58;
          }
          uVar13 = uVar4;
          uVar14 = uVar14 ^ local_60;
          uVar9 = uVar9 ^ local_5c;
          puVar12 = out + uVar2;
          puVar11 = puVar12;
          switch(uVar2) {
          default:
            goto switchD_004c1d9f_caseD_0;
          case 1:
            goto LAB_004c1b80;
          case 2:
            goto switchD_004c1d9f_caseD_2;
          case 3:
            goto LAB_004c1b69;
          case 4:
            goto switchD_004c1d9f_caseD_4;
          case 5:
            break;
          case 8:
            puVar12 = puVar12 + -1;
            *puVar12 = (uchar)(uVar9 >> 0x18);
          case 7:
            puVar11 = puVar12 + -1;
            *puVar11 = (uchar)(uVar9 >> 0x10);
          case 6:
            puVar12 = puVar11 + -1;
            puVar11[-1] = (uchar)(uVar9 >> 8);
          }
          puVar12[-1] = (uchar)uVar9;
          puVar11 = puVar12 + -1;
switchD_004c1d9f_caseD_4:
          puVar12 = puVar11 + -1;
          puVar11[-1] = (uchar)(uVar14 >> 0x18);
LAB_004c1b69:
          puVar11 = puVar12 + -1;
          puVar12[-1] = (uchar)(uVar14 >> 0x10);
switchD_004c1d9f_caseD_2:
          puVar12 = puVar11 + -1;
          puVar11[-1] = (uchar)(uVar14 >> 8);
LAB_004c1b80:
          puVar12[-1] = (uchar)uVar14;
          puVar12 = puVar12 + -1;
switchD_004c1d9f_caseD_0:
          out = puVar12 + uVar2;
          uVar8 = uVar5;
        } while (uVar2 <= (ulong)length);
      }
    }
    else if (uVar2 <= (ulong)length) {
      if (-1 < numbits) {
        uVar8 = numbits;
      }
      puVar10 = (undefined8 *)((long)((int)uVar8 >> 3) + (long)&local_58);
      do {
        length = length - uVar2;
        local_60 = uVar13;
        local_5c = uVar5;
        DES_encrypt3(&local_60,ks1,ks2,ks3);
        puVar11 = in + uVar2;
        switch(uVar2) {
        default:
          uVar8 = 0;
          uVar9 = 0;
          puVar12 = puVar11;
          goto LAB_004c1e65;
        case 1:
          uVar8 = 0;
          uVar9 = 0;
          goto LAB_004c1e5b;
        case 2:
          uVar8 = 0;
          uVar9 = 0;
          goto LAB_004c1e4e;
        case 3:
          uVar8 = 0;
          uVar9 = 0;
          goto LAB_004c1e41;
        case 4:
          uVar8 = 0;
          goto LAB_004c1e36;
        case 5:
          uVar8 = 0;
          goto LAB_004c1e2c;
        case 6:
          uVar8 = 0;
          goto LAB_004c1e1f;
        case 7:
          uVar8 = 0;
          break;
        case 8:
          pbVar1 = puVar11 + -1;
          puVar11 = puVar11 + -1;
          uVar8 = (uint)*pbVar1 << 0x18;
        }
        pbVar1 = puVar11 + -1;
        puVar11 = puVar11 + -1;
        uVar8 = (uint)*pbVar1 << 0x10 | uVar8;
LAB_004c1e1f:
        pbVar1 = puVar11 + -1;
        puVar11 = puVar11 + -1;
        uVar8 = (uint)*pbVar1 << 8 | uVar8;
LAB_004c1e2c:
        uVar8 = puVar11[-1] | uVar8;
        puVar11 = puVar11 + -1;
LAB_004c1e36:
        pbVar1 = puVar11 + -1;
        puVar11 = puVar11 + -1;
        uVar9 = (uint)*pbVar1 << 0x18;
LAB_004c1e41:
        pbVar1 = puVar11 + -1;
        puVar11 = puVar11 + -1;
        uVar9 = (uint)*pbVar1 << 0x10 | uVar9;
LAB_004c1e4e:
        pbVar1 = puVar11 + -1;
        puVar11 = puVar11 + -1;
        uVar9 = (uint)*pbVar1 << 8 | uVar9;
LAB_004c1e5b:
        puVar12 = puVar11 + -1;
        uVar9 = puVar11[-1] | uVar9;
LAB_004c1e65:
        in = puVar12 + uVar2;
        uVar9 = uVar9 ^ local_60;
        uVar8 = uVar8 ^ local_5c;
        puVar11 = out + uVar2;
        switch(uVar2) {
        default:
          goto switchD_004c1e82_caseD_0;
        case 1:
          goto LAB_004c1ed1;
        case 2:
          goto switchD_004c1e82_caseD_2;
        case 3:
          puVar12 = puVar11;
          goto LAB_004c1ebd;
        case 4:
          goto switchD_004c1e82_caseD_4;
        case 5:
          break;
        case 8:
          puVar11 = puVar11 + -1;
          *puVar11 = (uchar)(uVar8 >> 0x18);
        case 7:
          puVar11 = puVar11 + -1;
          *puVar11 = (uchar)(uVar8 >> 0x10);
        case 6:
          puVar11[-1] = (uchar)(uVar8 >> 8);
          puVar11 = puVar11 + -1;
        }
        puVar11[-1] = (uchar)uVar8;
        puVar11 = puVar11 + -1;
switchD_004c1e82_caseD_4:
        puVar11[-1] = (uchar)(uVar9 >> 0x18);
        puVar12 = puVar11 + -1;
LAB_004c1ebd:
        puVar11 = puVar12 + -1;
        puVar12[-1] = (uchar)(uVar9 >> 0x10);
switchD_004c1e82_caseD_2:
        puVar11[-1] = (uchar)(uVar9 >> 8);
        puVar11 = puVar11 + -1;
LAB_004c1ed1:
        puVar11[-1] = (uchar)uVar9;
        puVar11 = puVar11 + -1;
switchD_004c1e82_caseD_0:
        out = puVar11 + uVar2;
        uVar14 = uVar9;
        uVar4 = uVar5;
        if ((numbits != 0x20) && (uVar14 = uVar8, uVar4 = uVar9, numbits != 0x40)) {
          local_58 = CONCAT44(uVar5,uVar13);
          local_50 = uVar9;
          local_4c = uVar8;
          if ((numbits & 7U) == 0) {
            local_58 = *puVar10;
          }
          else {
            puVar6 = (uint *)memmove(&local_58,puVar10,9);
            do {
              puVar7 = (uint *)((long)puVar6 + 1);
              *(byte *)puVar6 =
                   (byte)((int)(uint)*(byte *)((long)puVar6 + 1) >>
                         (((bVar3 >> 5) - ((char)numbits + (bVar3 >> 5) & 7)) + 8 & 0x1f)) |
                   (byte)*puVar6 << (sbyte)(numbits & 7U);
              puVar6 = puVar7;
            } while (puVar7 != &local_50);
          }
          uVar14 = local_58._4_4_;
          uVar4 = (uint)local_58;
        }
        uVar13 = uVar4;
        uVar5 = uVar14;
      } while (uVar2 <= (ulong)length);
    }
    *(uint *)*ivec = uVar13;
    *(uint *)(*ivec + 4) = uVar5;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

