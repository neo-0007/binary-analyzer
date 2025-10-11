
int FUN_00469820(long param_1,long param_2,ulong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long local_a8;
  ulong local_a0;
  long local_98;
  long local_90;
  ulong local_68;
  undefined1 local_5c;
  
  iVar4 = FUN_0043b840();
  if ((iVar4 != 0) && (iVar4 = FUN_00469720(param_1,param_4), iVar4 != 0)) {
    if (*(long *)(param_1 + 0x20) == 0) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/kdfs/pkcs12kdf.c",0xd2,"kdf_pkcs12_derive");
      FUN_0051f8f0(0x39,0x82,0);
    }
    else {
      if (*(long *)(param_1 + 0x30) != 0) {
        uVar7 = FUN_0043c7e0(param_1 + 8);
        lVar16 = *(long *)(param_1 + 0x30);
        uVar2 = *(ulong *)(param_1 + 0x40);
        uVar1 = *(undefined4 *)(param_1 + 0x48);
        uVar14 = *(ulong *)(param_1 + 0x38);
        uVar15 = *(ulong *)(param_1 + 0x28);
        lVar3 = *(long *)(param_1 + 0x20);
        lVar8 = FUN_00405f40();
        if (lVar8 == 0) {
          lVar9 = 0;
          lVar10 = 0;
          FUN_0051f420();
          FUN_0051f540("../providers/implementations/kdfs/pkcs12kdf.c",0x3e,"pkcs12kdf_derive");
          FUN_0051f8f0(0x39,0xc0100,0);
          iVar4 = 0;
          local_90 = 0;
          local_98 = 0;
        }
        else {
          iVar4 = FUN_0040abc0(uVar7);
          iVar5 = FUN_0040ac10(uVar7);
          if ((iVar5 < 1) || (iVar4 < 1)) {
            lVar9 = 0;
            lVar10 = 0;
            FUN_0051f420();
            FUN_0051f540("../providers/implementations/kdfs/pkcs12kdf.c",0x44,"pkcs12kdf_derive");
            FUN_0051f8f0(0x39,0xda,0);
            iVar4 = 0;
            local_90 = 0;
            local_98 = 0;
          }
          else {
            uVar19 = (ulong)iVar4;
            uVar18 = (ulong)iVar5;
            local_98 = FUN_0041ad90(uVar19,"../providers/implementations/kdfs/pkcs12kdf.c",0x49);
            lVar9 = FUN_0041ad90(uVar18,"../providers/implementations/kdfs/pkcs12kdf.c",0x4a);
            lVar10 = FUN_0041ad90(uVar19 + 1,"../providers/implementations/kdfs/pkcs12kdf.c",0x4b);
            uVar11 = (((uVar14 - 1) + uVar19) / uVar19) * uVar19;
            if (uVar15 == 0) {
              uVar12 = 0;
              local_68 = uVar11;
            }
            else {
              uVar12 = (((uVar15 - 1) + uVar19) / uVar19) * uVar19;
              local_68 = uVar11 + uVar12;
            }
            local_90 = FUN_0041ad90(local_68,"../providers/implementations/kdfs/pkcs12kdf.c",0x52);
            if ((((local_98 == 0) || (lVar9 == 0)) || (lVar10 == 0)) || (local_90 == 0)) {
              FUN_0051f420();
              FUN_0051f540("../providers/implementations/kdfs/pkcs12kdf.c",0x54,"pkcs12kdf_derive");
              FUN_0051f8f0(0x39,0xc0100,0);
              iVar4 = 0;
            }
            else {
              local_5c = (undefined1)uVar1;
              uVar13 = 1;
              if (iVar4 != 0) {
                uVar13 = uVar19;
              }
              thunk_FUN_00713720(local_98,local_5c,uVar13);
              lVar17 = local_90;
              if (uVar11 != 0) {
                uVar13 = 0;
                do {
                  *(undefined1 *)(local_90 + uVar13) = *(undefined1 *)(lVar16 + uVar13 % uVar14);
                  uVar13 = uVar13 + 1;
                } while (uVar11 != uVar13);
                lVar17 = uVar11 + local_90;
              }
              uVar14 = 0;
              local_a8 = param_2;
              local_a0 = param_3;
              if (uVar12 != 0) {
                do {
                  *(undefined1 *)(lVar17 + uVar14) = *(undefined1 *)(lVar3 + uVar14 % uVar15);
                  uVar14 = uVar14 + 1;
                } while (uVar12 != uVar14);
              }
              while( true ) {
                iVar4 = FUN_00407430(lVar8,uVar7,0);
                if (((iVar4 == 0) || (iVar4 = FUN_00405f60(lVar8,local_98,uVar19), iVar4 == 0)) ||
                   ((iVar4 = FUN_00405f60(lVar8,local_90,local_68), iVar4 == 0 ||
                    (iVar4 = FUN_00406090(lVar8,lVar9,0), iVar4 == 0)))) goto LAB_00469b4b;
                uVar14 = 1;
                if (1 < uVar2) {
                  do {
                    iVar4 = FUN_00407430(lVar8,uVar7,0);
                    if (((iVar4 == 0) || (iVar4 = FUN_00405f60(lVar8,lVar9,uVar18), iVar4 == 0)) ||
                       (iVar4 = FUN_00406090(lVar8,lVar9,0), iVar4 == 0)) goto LAB_00469b4b;
                    uVar14 = uVar14 + 1;
                  } while (uVar2 != uVar14);
                }
                uVar14 = local_a0;
                if (uVar18 <= local_a0) {
                  uVar14 = uVar18;
                }
                thunk_FUN_00713a50(local_a8,lVar9,uVar14);
                if (local_a0 <= uVar18) break;
                local_a0 = local_a0 - uVar18;
                uVar14 = 0;
                local_a8 = local_a8 + uVar18;
                do {
                  *(undefined1 *)(lVar10 + uVar14) = *(undefined1 *)(lVar9 + uVar14 % uVar18);
                  uVar14 = uVar14 + 1;
                } while (uVar14 < uVar19);
                uVar14 = 0;
                lVar16 = local_90;
                if (local_68 != 0) {
                  do {
                    uVar6 = 1;
                    uVar15 = uVar19;
                    do {
                      uVar15 = uVar15 - 1;
                      uVar6 = uVar6 + (uint)*(byte *)(lVar16 + uVar15) +
                                      (uint)*(byte *)(lVar10 + uVar15);
                      *(char *)(lVar16 + uVar15) = (char)uVar6;
                      uVar6 = uVar6 >> 8;
                    } while (uVar15 != 0);
                    uVar14 = uVar14 + uVar19;
                    lVar16 = lVar16 + uVar19;
                  } while (uVar14 < local_68);
                }
              }
              iVar4 = 1;
            }
          }
        }
LAB_00469b4b:
        FUN_0041ad60(lVar9,"../providers/implementations/kdfs/pkcs12kdf.c",0x82);
        FUN_0041ad60(lVar10,"../providers/implementations/kdfs/pkcs12kdf.c",0x83);
        FUN_0041ad60(local_98,"../providers/implementations/kdfs/pkcs12kdf.c",0x84);
        FUN_0041ad60(local_90,"../providers/implementations/kdfs/pkcs12kdf.c",0x85);
        FUN_00406b90(lVar8);
        return iVar4;
      }
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/kdfs/pkcs12kdf.c",0xd7,"kdf_pkcs12_derive");
      FUN_0051f8f0(0x39,0x83,0);
    }
  }
  return 0;
}

