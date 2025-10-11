
int FUN_0049fe10(long param_1,int param_2,char *param_3,int param_4)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  byte *pbVar11;
  char *pcVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  undefined1 *local_98;
  uint local_84;
  int local_80;
  undefined1 *local_78;
  int local_60;
  undefined1 local_58 [24];
  long local_40;
  
  local_80 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 == 0) goto LAB_004a0076;
  if (param_4 == -1) {
    param_4 = thunk_FUN_007129d0(param_3);
    local_84 = (int)*param_3 - 0x30;
    if (2 < local_84) goto LAB_004a00bd;
LAB_0049fe65:
    if (param_4 < 2) {
      FUN_0051f420();
      lVar6 = 0;
      FUN_0051f540("../crypto/asn1/a_object.c",0x4e,"a2d_ASN1_OBJECT");
      FUN_0051f8f0(0xd,0x8a,0);
    }
    else {
      param_4 = param_4 + -2;
      pcVar12 = param_3 + 2;
      if (param_4 == 0) {
        lVar6 = 0;
        local_80 = 0;
LAB_004a0332:
        FUN_004b7fa0(lVar6);
        goto LAB_004a0076;
      }
      if ((param_3[1] == '.') || (param_3[1] == ' ')) {
        local_60 = 0x18;
        lVar6 = 0;
        local_80 = 0;
        local_98 = local_58;
        do {
          uVar13 = 0;
          bVar2 = false;
          do {
            while( true ) {
              iVar10 = (int)*pcVar12;
              pcVar12 = pcVar12 + 1;
              param_4 = param_4 + -1;
              if ((iVar10 == 0x20) || (iVar10 == 0x2e)) goto LAB_0049ff90;
              iVar3 = FUN_005466e0(iVar10);
              if (iVar3 == 0) {
                FUN_0051f420();
                FUN_0051f540("../crypto/asn1/a_object.c",100,"a2d_ASN1_OBJECT");
                FUN_0051f8f0(0xd,0x82,0);
                goto LAB_004a0048;
              }
              if (!bVar2) break;
LAB_0049fefc:
              iVar3 = FUN_004bcd70(lVar6,10);
              if ((iVar3 == 0) || (iVar3 = FUN_004bcc70(lVar6,(long)(iVar10 + -0x30)), iVar3 == 0))
              goto LAB_004a0048;
              bVar2 = true;
              if (param_4 == 0) goto LAB_0049ff90;
            }
            if (0x1999999999999990 < uVar13) {
              if (((lVar6 != 0) || (lVar6 = FUN_004b7690(), lVar6 != 0)) &&
                 (iVar3 = FUN_004b8190(lVar6,uVar13), iVar3 != 0)) goto LAB_0049fefc;
              goto LAB_004a0048;
            }
            uVar13 = (long)(iVar10 + -0x30) + uVar13 * 10;
          } while (param_4 != 0);
LAB_0049ff90:
          if (local_80 == 0) {
            if (((int)local_84 < 2) && (0x27 < uVar13)) {
              FUN_0051f420();
              FUN_0051f540("../crypto/asn1/a_object.c",0x77,"a2d_ASN1_OBJECT");
              FUN_0051f8f0(0xd,0x93,0);
              goto LAB_004a0048;
            }
            uVar13 = uVar13 + (long)(int)local_84 * 0x28;
            if (!bVar2) goto LAB_0049ffbb;
            iVar3 = FUN_004bcc70(lVar6,(long)(int)(local_84 * 0x28));
            if (iVar3 == 0) goto LAB_004a0048;
LAB_004a0119:
            iVar3 = FUN_004b7bb0(lVar6);
            iVar3 = (iVar3 + 6) / 7;
            if (local_60 < iVar3) {
              if (local_98 != local_58) {
                FUN_0041ad60(local_98,"../crypto/asn1/a_object.c",0x87);
              }
              local_60 = iVar3 + 0x20;
              local_98 = (undefined1 *)FUN_0041ad90((long)local_60,"../crypto/asn1/a_object.c",0x89)
              ;
              if (local_98 != (undefined1 *)0x0) {
LAB_004a01a2:
                lVar7 = 1;
                do {
                  lVar5 = lVar7;
                  lVar7 = FUN_004bc970(lVar6,0x80);
                  if (lVar7 == -1) goto LAB_004a0048;
                  local_98[lVar5 + -1] = (char)lVar7;
                  lVar7 = lVar5 + 1;
                } while (lVar5 + 1 != (ulong)(iVar3 - 1) + 2);
                goto LAB_0049ffde;
              }
              FUN_0051f420();
              FUN_0051f540("../crypto/asn1/a_object.c",0x8b,"a2d_ASN1_OBJECT");
              FUN_0051f8f0(0xd,0xc0100,0);
              goto LAB_004a005a;
            }
            if (iVar3 != 0) goto LAB_004a01a2;
            iVar3 = 0;
            iVar4 = local_80;
          }
          else {
            if (bVar2) goto LAB_004a0119;
LAB_0049ffbb:
            lVar7 = 1;
            do {
              lVar5 = lVar7;
              local_98[lVar5 + -1] = (byte)uVar13 & 0x7f;
              uVar13 = uVar13 >> 7;
              lVar7 = lVar5 + 1;
            } while (uVar13 != 0);
LAB_0049ffde:
            iVar3 = (int)lVar5;
            iVar4 = local_80 + iVar3;
          }
          if (param_1 != 0) {
            if (param_2 < iVar4) {
              FUN_0051f420();
              FUN_0051f540("../crypto/asn1/a_object.c",0xa1,"a2d_ASN1_OBJECT");
              FUN_0051f8f0(0xd,0x6b,0);
              goto LAB_004a0048;
            }
            if (0 < iVar3 + -1) {
              pbVar11 = local_98 + (iVar3 + -1);
              pbVar8 = (byte *)(param_1 + local_80);
              do {
                bVar1 = *pbVar11;
                pbVar9 = pbVar8 + 1;
                pbVar11 = pbVar11 + -1;
                *pbVar8 = bVar1 | 0x80;
                pbVar8 = pbVar9;
              } while (pbVar9 != (byte *)(param_1 + 1 + (long)local_80 + (ulong)(iVar3 - 2U)));
              local_80 = local_80 + 1 + (iVar3 - 2U);
            }
            *(undefined1 *)(param_1 + local_80) = *local_98;
            iVar4 = local_80 + 1;
          }
          local_80 = iVar4;
          if (param_4 == 0) {
            if (local_98 != local_58) {
              FUN_0041ad60(local_98,"../crypto/asn1/a_object.c",0xab);
            }
            goto LAB_004a0332;
          }
        } while ((iVar10 == 0x2e) || (iVar10 == 0x20));
      }
      else {
        local_98 = local_58;
        lVar6 = 0;
      }
      FUN_0051f420();
      FUN_0051f540("../crypto/asn1/a_object.c",0x57,"a2d_ASN1_OBJECT");
      FUN_0051f8f0(0xd,0x83,0);
LAB_004a0048:
      local_78 = local_58;
      if (local_98 != local_78) {
LAB_004a005a:
        FUN_0041ad60(local_98,"../crypto/asn1/a_object.c",0xb0);
      }
    }
  }
  else {
    local_84 = (int)*param_3 - 0x30;
    if (local_84 < 3) goto LAB_0049fe65;
LAB_004a00bd:
    FUN_0051f420();
    lVar6 = 0;
    FUN_0051f540("../crypto/asn1/a_object.c",0x49,"a2d_ASN1_OBJECT");
    FUN_0051f8f0(0xd,0x7a,0);
  }
  local_80 = 0;
  FUN_004b7fa0(lVar6);
LAB_004a0076:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_80;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

