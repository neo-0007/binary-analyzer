
int FUN_00468530(long param_1,long param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  byte bVar12;
  byte *pbVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  byte *pbVar20;
  long in_FS_OFFSET;
  bool bVar21;
  ulong local_d0;
  byte *local_b0;
  int local_8c;
  byte local_88 [32];
  byte local_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = FUN_0043b840();
  if ((iVar4 != 0) && (iVar4 = FUN_00468420(param_1,param_4), iVar4 != 0)) {
    lVar7 = FUN_0043c5c0(param_1 + 8);
    if (lVar7 != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/kdfs/krb5kdf.c",0x79,"krb5kdf_derive");
        FUN_0051f8f0(0x39,0x80,0);
        iVar4 = 0;
        goto LAB_0046856f;
      }
      if (*(long *)(param_1 + 0x30) == 0) {
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/kdfs/krb5kdf.c",0x7d,"krb5kdf_derive");
        FUN_0051f8f0(0x39,0x9c,0);
        iVar4 = 0;
        goto LAB_0046856f;
      }
      uVar8 = FUN_0043c5d0(param_1 + 8);
      uVar1 = *(ulong *)(param_1 + 0x28);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      uVar19 = *(ulong *)(param_1 + 0x38);
      lVar15 = *(long *)(param_1 + 0x30);
      if (param_3 == uVar1) {
        bVar21 = false;
      }
      else {
        iVar4 = FUN_0040a250(lVar7);
        if (((iVar4 != 0x2c) || (uVar1 != 0x18)) || (bVar21 = true, param_3 != 0x15)) {
          FUN_0051f420();
          FUN_0051f540("../providers/implementations/kdfs/krb5kdf.c",0x17a,"KRB5KDF");
          FUN_0051f8f0(0x39,0x8b,0);
          iVar4 = 0;
          goto LAB_0046856f;
        }
      }
      lVar9 = FUN_00535890();
      iVar4 = 0;
      if (lVar9 == 0) goto LAB_0046856f;
      iVar4 = FUN_00468300(lVar9,lVar7,uVar8,uVar2,uVar1);
      if (iVar4 != 0) {
        uVar5 = FUN_004096f0(lVar9);
        if ((ulong)(long)(int)uVar5 < uVar19) {
          FUN_0051f420();
          FUN_0051f540("../providers/implementations/kdfs/krb5kdf.c",0x18d,"KRB5KDF");
          FUN_0051f8f0(0x39,0x9d,0);
          iVar4 = 0;
        }
        else {
          uVar18 = (ulong)uVar5;
          if (uVar19 == uVar18) {
            FUN_00771fb0(local_88,lVar15,uVar19,0x40);
          }
          else {
            local_d0 = uVar18;
            if ((int)uVar19 != 0) {
              uVar10 = (ulong)uVar5;
              uVar11 = uVar19 & 0xffffffff;
              do {
                local_d0 = uVar11;
                uVar11 = uVar10 % local_d0;
                uVar10 = local_d0;
              } while ((int)uVar11 != 0);
            }
            FUN_00771fd0(local_88,0,uVar18,0x40);
            uVar6 = 0;
            uVar16 = (int)((uVar18 * uVar19) / local_d0) - 1;
            uVar18 = (ulong)(int)uVar16;
            if (-1 < (int)uVar16) {
              do {
                uVar11 = uVar18 / uVar19;
                uVar18 = uVar18 - 1;
                uVar17 = (int)uVar11 * 0xd;
                bVar12 = (byte)uVar17 & 7;
                uVar17 = uVar16 - (uVar17 >> 3);
                uVar11 = (ulong)uVar16;
                uVar16 = uVar16 - 1;
                pbVar13 = local_88 + uVar11 % (ulong)uVar5;
                uVar6 = (((uint)*(byte *)(lVar15 + (ulong)(uVar17 - 1) % uVar19) <<
                          (8 - bVar12 & 0x1f) |
                         (int)(uint)*(byte *)(lVar15 + (ulong)uVar17 % uVar19) >> bVar12) & 0xff) +
                        (uint)*pbVar13 + uVar6;
                *pbVar13 = (byte)uVar6;
                uVar6 = uVar6 >> 8;
              } while (uVar16 != 0xffffffff);
              iVar4 = uVar5 - 1;
              if ((0 < (int)uVar5) && ((uVar6 & 1) != 0)) {
                pbVar13 = local_88 + iVar4;
                do {
                  bVar12 = *pbVar13;
                  *pbVar13 = bVar12 + 1;
                  iVar4 = iVar4 + -1;
                  if (iVar4 < 0) break;
                  pbVar13 = pbVar13 + -1;
                } while (bVar12 + 1 >> 8 != 0);
              }
            }
          }
          local_b0 = local_88;
          if (param_3 == 0) {
LAB_004688d4:
            iVar4 = FUN_0040a250(lVar7);
            if ((iVar4 == 0x2c) && (!bVar21)) {
              lVar7 = param_2 + 0xe;
              lVar15 = param_2 + 0x10;
              do {
                thunk_FUN_00713610(lVar15,lVar7,7);
                *(undefined1 *)(lVar15 + 7) = 0;
                lVar14 = 1;
                uVar5 = 0;
                do {
                  pbVar13 = (byte *)(lVar15 + -1 + lVar14);
                  bVar12 = (byte)lVar14;
                  lVar14 = lVar14 + 1;
                  uVar5 = uVar5 | (*pbVar13 & 1) << (bVar12 & 0x1f);
                  *(char *)(lVar15 + 7) = (char)uVar5;
                } while (lVar14 != 8);
                lVar7 = lVar7 + -7;
                FUN_004d1de0(lVar15);
                bVar21 = param_2 != lVar15;
                lVar15 = lVar15 + -8;
              } while (bVar21);
              iVar4 = FUN_00422820(param_2,param_2 + 8,8);
              if ((iVar4 == 0) || (iVar4 = FUN_00422820(param_2 + 8,param_2 + 0x10,8), iVar4 == 0))
              {
                FUN_0051f420();
                FUN_0051f540("../providers/implementations/kdfs/krb5kdf.c",0x1c4,"KRB5KDF");
                FUN_0051f8f0(0x39,0x79,0);
                iVar4 = 0;
                goto LAB_00468673;
              }
            }
            iVar4 = 1;
          }
          else {
            uVar19 = 0;
            pbVar13 = local_b0;
            pbVar3 = local_68;
            while (pbVar20 = pbVar3, iVar4 = FUN_00535bf0(lVar9,pbVar20,&local_8c,pbVar13,uVar5),
                  iVar4 != 0) {
              uVar18 = (ulong)local_8c;
              iVar4 = FUN_00535df0(lVar9,pbVar20,&local_8c);
              if (iVar4 == 0) break;
              if (local_8c != 0) {
                FUN_0051f420();
                FUN_0051f540("../providers/implementations/kdfs/krb5kdf.c",0x1a2,"KRB5KDF");
                FUN_0051f8f0(0x39,0x6b,0);
                break;
              }
              lVar15 = param_2 + uVar19;
              if (param_3 - uVar19 <= uVar18) {
                uVar18 = param_3 - uVar19;
              }
              uVar19 = uVar19 + uVar18;
              thunk_FUN_00713a50(lVar15,pbVar20,uVar18);
              if (param_3 <= uVar19) goto LAB_004688d4;
              iVar4 = FUN_00537a80(lVar9);
              if ((iVar4 == 0) || (iVar4 = FUN_00468300(lVar9,lVar7,uVar8,uVar2,uVar1), iVar4 == 0))
              break;
              pbVar13 = pbVar20;
              pbVar3 = local_b0;
              if (pbVar20 == local_b0) {
                pbVar3 = local_68;
              }
            }
            iVar4 = 0;
          }
        }
      }
LAB_00468673:
      local_b0 = local_88;
      FUN_00537b70(lVar9);
      FUN_004227b0(local_b0,0x40);
      goto LAB_0046856f;
    }
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/kdfs/krb5kdf.c",0x75,"krb5kdf_derive");
    FUN_0051f8f0(0x39,0x9b,0);
  }
  iVar4 = 0;
LAB_0046856f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return iVar4;
}

